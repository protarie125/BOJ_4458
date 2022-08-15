#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	constexpr auto offset = 'A' - 'a';

	auto n = int{};
	cin >> n;
	auto s = string{};
	getline(cin, s);
	while (0 < (n--)) {
		getline(cin, s);

		if ('a' <= s[0] && s[0] <= 'z') {
			s[0] += offset;
		}

		cout << s << '\n';
	}

	return 0;
}