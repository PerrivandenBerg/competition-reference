ll gcd(ll a, ll b) {
    while (b != 0)
        a %= b, swap(a, b);
    return a;
}