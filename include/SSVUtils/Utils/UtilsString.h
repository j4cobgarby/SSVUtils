// Copyright (c) 2013 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0

#ifndef SSVU_UTILS_STRING
#define SSVU_UTILS_STRING

#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

namespace ssvu
{
	/*!
	 *
	 * @brief Converts a value to a std::string
	 *
	 * Uses std::ostringstream internally.
	 *
	 * @tparam T Type of value.
	 * @param mValue Const reference to the value. (original value won't be changed)
	 *
	 * @return Returns a std::string representing the converted value.
	 *
	 */
	template<typename T> std::string toStr(const T& mValue) { std::ostringstream oss; oss << mValue; return oss.str(); }

	/*!
	 *
	 * @brief Replace the first occurrence of a string in a string with another string.
	 *
	 * @param mString String to work with.
	 * @param mFrom String to replace.
	 * @param mTo Replacement string.
	 *
	 */
	void replace(std::string& mString, const std::string& mFrom, const std::string& mTo);

	/*!
	 *
	 * @brief Replace all occurrences of a string in a string with another string.
	 *
	 * @param mString String to work with.
	 * @param mFrom String to replace.
	 * @param mTo Replacement string.
	 *
	 */
	void replaceAll(std::string& mString, const std::string& mFrom, const std::string& mTo);

	/*!
	 *
	 * @brief Returns whether a string starts with a string or not.
	 *
	 * @param mString String to work with.
	 * @param mStart String to test.
	 *
	 * @return Returns true if mString starts with mStart.
	 *
	 */
	bool startsWith(const std::string& mString, const std::string& mStart);

	/*!
	 *
	 * @brief Returns whether a string ends with a string or not.
	 *
	 * @param mString String to work with.
	 * @param mEnding String to test.
	 *
	 * @return Returns true if mString ends with mEnding.
	 *
	 */
	bool endsWith(const std::string &mString, const std::string &mEnding);

	/*!
	 *
	 * @brief Converts a string to a lowercase string.
	 *
	 * @param mString String to convert.
	 *
	 * @return Returns a std::string that is a copy of mString, with all characters lowercase.
	 *
	 */
	std::string toLower(const std::string &mString);

	/*!
	 *
	 * @brief Splits a string in smaller strings.
	 *
	 * @param mString String to split.
	 * @param mSplitter Character to split at. Every occurrence of this character will cause a split.
	 * @param mKeepSplitter Keep the splitter character in the splitted string.
	 *
	 * @return Returns a std::vector containing all splitted strings.
	 *
	 */
	std::vector<std::string> split(const std::string& mString, char mSplitter, bool mKeepSplitter = false);

	/*!
	 *
	 * @brief Copies a string and replaces the first occurrence of a string in it with another string.
	 *
	 * @param mString String to copy.
	 * @param mFrom String to replace.
	 * @param mTo Replacement string.
	 *
	 * @return Returns a std::string with mFrom replaced by mTo (first occurrence).
	 *
	 */
	std::string getReplaced(const std::string& mString, const std::string& mFrom, const std::string& mTo);

	/*!
	 *
	 * @brief Copies a string and replaces the all occurences of a string in it with another string.
	 *
	 * @param mString String to copy.
	 * @param mFrom String to replace.
	 * @param mTo Replacement string.
	 *
	 * @return Returns a std::string with mFrom replaced by mTo (all occurrences).
	 *
	 */
	std::string getReplacedAll(const std::string& mString, const std::string& mFrom, const std::string& mTo);

	/*!
	 *
	 * @brief Counts the number of newlines in a std::string.
	 *
	 * @param mString String to work with.
	 *
	 * @return Returns an unsigned int which is the count of newlines.
	 *
	 */
	unsigned int getNewLinesCount(const std::string& mString);
}

#endif
