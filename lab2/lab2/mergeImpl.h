#pragma once

template<typename S>
S* mergeSort(S* a, S* b, int n, std::function<bool(S,S)> f)
{
	S* ans = new S[2*n];
	int ai = 0,bi = 0, i = 0;
	for (i = 0; i < 2*n; ++i)
	{
		if ((ai<n) && (bi<n))
		{
			if (!f(a[ai],b[bi]))
				{
					ans[i] = a[ai];
					ai++;
				} else
				{
					ans[i] = b[bi];
					bi++;
				}
		} else
			break;
	}
	for (;bi<n;bi++,i++)
	{
		ans[i] = b[bi];
	}
	for (;ai<n;ai++,i++)
	{
		ans[i] = a[ai];
	}
	return ans;
}