template <typename T1, typename T2>
inline T2 max (T1 const& a, T2 const& b)
{
    return a<b?b:a;
}
