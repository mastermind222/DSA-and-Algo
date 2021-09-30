class SparseTable {
	public:
	int n;
	vector<vector<int>> mat;
	
	int func(int &a, int &b) { return max(a,b); }
	
	SparseTable(const vector<int>& a) {
		n = static_cast<int>(a.size());
		int max_log = 32 - __builtin_clz(n);
		mat.resize(max_log);
		mat[0] = a;
		for (int j = 1; j < max_log; j++) {
			mat[j].resize(n - (1 << j) + 1);
			for (int i = 0; i <= n - (1 << j); i++) {
				mat[j][i] = func(mat[j - 1][i], mat[j - 1][i + (1 << (j - 1))]);
			}
		}
		show_(mat,max_log);
	}
	
	int get(int from, int to) {
		assert(0 <= from && from <= to && to <= n - 1);
		int lg = 32 - __builtin_clz(to - from + 1) - 1;
		return func(mat[lg][from], mat[lg][to - (1 << lg) + 1]);
	}
};