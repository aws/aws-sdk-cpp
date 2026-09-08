/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <climits>
#include <functional>

#ifdef _WIN32
#include <Windows.h>
#endif

using namespace Aws::Utils;

void StringUtils::Replace(Aws::String& s, const char* search, const char* replace)
{
    if(!search || !replace)
    {
        return;
    }

    size_t replaceLength = strlen(replace);
    size_t searchLength = strlen(search);

    for (std::size_t pos = 0;; pos += replaceLength)
    {
        pos = s.find(search, pos);
        if (pos == Aws::String::npos)
            break;

        s.erase(pos, searchLength);
        s.insert(pos, replace);
    }
}


Aws::String StringUtils::ToLower(const char* source)
{
    Aws::String copy;
    size_t sourceLength = strlen(source);
    copy.resize(sourceLength);
    //appease the latest whims of the VC++ 2017 gods
    std::transform(source, source + sourceLength, copy.begin(), [](unsigned char c) { return (char)::tolower(c); });

    return copy;
}


Aws::String StringUtils::ToUpper(const char* source)
{
    Aws::String copy;
    size_t sourceLength = strlen(source);
    copy.resize(sourceLength);
    //appease the latest whims of the VC++ 2017 gods
    std::transform(source, source + sourceLength, copy.begin(), [](unsigned char c) { return (char)::toupper(c); });

    return copy;
}


bool StringUtils::CaselessCompare(const char* value1, const char* value2)
{
    Aws::String value1Lower = ToLower(value1);
    Aws::String value2Lower = ToLower(value2);

    return value1Lower == value2Lower;
}

Aws::Vector<Aws::String> StringUtils::Split(const Aws::String& toSplit, char splitOn)
{
    return Split(toSplit, splitOn, SIZE_MAX, SplitOptions::NOT_SET);
}

Aws::Vector<Aws::String> StringUtils::Split(const Aws::String& toSplit, char splitOn, SplitOptions option)
{
    return Split(toSplit, splitOn, SIZE_MAX, option);
}

Aws::Vector<Aws::String> StringUtils::Split(const Aws::String& toSplit, char splitOn, size_t numOfTargetParts)
{
    return Split(toSplit, splitOn, numOfTargetParts, SplitOptions::NOT_SET);
}

Aws::Vector<Aws::String> StringUtils::Split(const Aws::String& toSplit, char splitOn, size_t numOfTargetParts, SplitOptions option)
{
    if (option == SplitOptions::INCLUDE_EMPTY_SEGMENTS)
    {
        return StringUtils::SplitWithSpaces(toSplit, splitOn);
    }

    Aws::Vector<Aws::String> returnValues;
    Aws::StringStream input(toSplit);
    Aws::String item;

    while(returnValues.size() < numOfTargetParts - 1 && std::getline(input, item, splitOn))
    {
        if (!item.empty() || option == SplitOptions::INCLUDE_EMPTY_ENTRIES)
        {
            returnValues.emplace_back(std::move(item));
        }
    }

    if (std::getline(input, item, static_cast<char>(EOF)))
    {
        if (option != SplitOptions::INCLUDE_EMPTY_ENTRIES)
        {
            // Trim all leading delimiters.
            item.erase(item.begin(), std::find_if(item.begin(), item.end(), [splitOn](int ch) { return ch != splitOn; }));
            if (!item.empty())
            {
                returnValues.emplace_back(std::move(item));
            }
        }
        else
        {
            returnValues.emplace_back(std::move(item));
        }

    }
    // To handle the case when there are trailing delimiters.
    else if (!toSplit.empty() && toSplit.back() == splitOn && option == SplitOptions::INCLUDE_EMPTY_ENTRIES)
    {
        returnValues.emplace_back();
    }

    return returnValues;
}

Aws::Vector<Aws::String> StringUtils::SplitWithSpaces(const Aws::String& toSplit, char splitOn)
{
    size_t pos = 0;
    String split{toSplit};
    Vector<String> returnValues;
    while ((pos = split.find(splitOn)) != std::string::npos) {
        returnValues.emplace_back(split.substr(0, pos));
        split.erase(0, pos + 1);
    }
    if (!split.empty()) {
        returnValues.emplace_back(split);
    }
    return returnValues;
}

Aws::Vector<Aws::String> StringUtils::SplitOnLine(const Aws::String& toSplit)
{
    Aws::StringStream input(toSplit);
    Aws::Vector<Aws::String> returnValues;
    Aws::String item;

    while (std::getline(input, item))
    {
        if (item.size() > 0)
        {
            returnValues.push_back(item);
        }
    }

    return returnValues;
}


Aws::String StringUtils::URLEncode(const char* unsafe)
{
    Aws::StringStream escaped;
    escaped.fill('0');
    escaped << std::hex << std::uppercase;

    size_t unsafeLength = strlen(unsafe);
    for (auto i = unsafe, n = unsafe + unsafeLength; i != n; ++i)
    {
        char c = *i;
        if (IsAlnum(c) || c == '-' || c == '_' || c == '.' || c == '~')
        {
            escaped << (char)c;
        }
        else
        {
            //this unsigned char cast allows us to handle unicode characters.
            escaped << '%' << std::setw(2) << int((unsigned char)c) << std::setw(0);
        }
    }

    return escaped.str();
}

Aws::String StringUtils::UTF8Escape(const char* unicodeString, const char* delimiter)
{
    Aws::StringStream escaped;
    escaped.fill('0');
    escaped << std::hex << std::uppercase;

    size_t unsafeLength = strlen(unicodeString);
    for (auto i = unicodeString, n = unicodeString + unsafeLength; i != n; ++i)
    {
        int c = *i;
        if (c >= ' ' && c < 127 )
        {
            escaped << (char)c;
        }
        else
        {
            //this unsigned char cast allows us to handle unicode characters.
            escaped << delimiter << std::setw(2) << int((unsigned char)c) << std::setw(0);
        }
    }

    return escaped.str();
}

Aws::String StringUtils::URLEncode(double unsafe)
{
    char buffer[32];
#if defined(_MSC_VER) && _MSC_VER < 1900
    _snprintf_s(buffer, sizeof(buffer), _TRUNCATE, "%g", unsafe);
#else
    snprintf(buffer, sizeof(buffer), "%g", unsafe);
#endif

    return StringUtils::URLEncode(buffer);
}


Aws::String StringUtils::URLDecode(const char* safe)
{
    Aws::String unescaped;

    for (; *safe; safe++)
    {
        switch(*safe)
        {
            case '%':
            {
                int hex = 0;
                auto ch = *++safe;
                if (ch >= '0' && ch <= '9')
                {
                    hex = (ch - '0') * 16;
                }
                else if (ch >= 'A' && ch <= 'F')
                {
                    hex = (ch - 'A' + 10) * 16;
                }
                else if (ch >= 'a' && ch <= 'f')
                {
                    hex = (ch - 'a' + 10) * 16;
                }
                else
                {
                    unescaped.push_back('%');
                    if (ch == 0)
                    {
                        return unescaped;
                    }
                    unescaped.push_back(ch);
                    break;
                }

                ch = *++safe;
                if (ch >= '0' && ch <= '9')
                {
                    hex += (ch - '0');
                }
                else if (ch >= 'A' && ch <= 'F')
                {
                    hex += (ch - 'A' + 10);
                }
                else if (ch >= 'a' && ch <= 'f')
                {
                    hex += (ch - 'a' + 10);
                }
                else
                {
                    unescaped.push_back('%');
                    unescaped.push_back(*(safe - 1));
                    if (ch == 0)
                    {
                        return unescaped;
                    }
                    unescaped.push_back(ch);
                    break;
                }

                unescaped.push_back(char(hex));
                break;
            }
            case '+':
                unescaped.push_back(' ');
                break;
            default:
                unescaped.push_back(*safe);
                break;
        }
    }

    return unescaped;
}

static bool IsSpace(int ch)
{
    if (ch < -1 || ch > 255)
    {
        return false;
    }

    return ::isspace(ch) != 0;
}

Aws::String StringUtils::LTrim(const char* source)
{
    Aws::String copy(source);
    copy.erase(copy.begin(), std::find_if(copy.begin(), copy.end(), [](int ch) { return !IsSpace(ch); }));
    return copy;
}

// trim from end
Aws::String StringUtils::RTrim(const char* source)
{
    Aws::String copy(source);
    copy.erase(std::find_if(copy.rbegin(), copy.rend(), [](int ch) { return !IsSpace(ch); }).base(), copy.end());
    return copy;
}

// trim from both ends
Aws::String StringUtils::Trim(const char* source)
{
    return LTrim(RTrim(source).c_str());
}

long long StringUtils::ConvertToInt64(const char* source)
{
    if (!source)
    {
        return 0;
    }

    const char* cursor = source;
    while (*cursor == ' ' || *cursor == '\t')
    {
        ++cursor;
    }

    bool negative = false;
    if (*cursor == '+' || *cursor == '-')
    {
        negative = (*cursor == '-');
        ++cursor;
    }

    unsigned long long value = 0;
    bool overflow = false;
    bool anyDigits = false;
    for (; *cursor >= '0' && *cursor <= '9'; ++cursor)
    {
        anyDigits = true;
        const unsigned digit = static_cast<unsigned>(*cursor - '0');
        if (value > (ULLONG_MAX - digit) / 10ULL)
        {
            overflow = true;
        }
        else
        {
            value = value * 10ULL + digit;
        }
    }

    // Interpret an exponent so scientific-notation integers (e.g. "5e9") scale correctly rather than
    // being truncated at 'e' as atoll would. cJSON keeps such literals verbatim for values outside the
    // int range, so this is the read path for large wire numbers.
    long exponent = 0;
    if (anyDigits && (*cursor == 'e' || *cursor == 'E'))
    {
        const char* exponentCursor = cursor + 1;
        bool exponentNegative = false;
        if (*exponentCursor == '+' || *exponentCursor == '-')
        {
            exponentNegative = (*exponentCursor == '-');
            ++exponentCursor;
        }
        if (*exponentCursor >= '0' && *exponentCursor <= '9')
        {
            long magnitude = 0;
            for (; *exponentCursor >= '0' && *exponentCursor <= '9'; ++exponentCursor)
            {
                magnitude = magnitude < 1000 ? magnitude * 10 + (*exponentCursor - '0') : magnitude;
            }
            exponent = exponentNegative ? -magnitude : magnitude;
        }
    }

    for (long i = 0; i < exponent && !overflow; ++i)
    {
        if (value > ULLONG_MAX / 10ULL)
        {
            overflow = true;
        }
        else
        {
            value *= 10ULL;
        }
    }
    for (long i = 0; i > exponent; --i)
    {
        value /= 10ULL;
    }

    const unsigned long long limit = negative
        ? static_cast<unsigned long long>(LLONG_MAX) + 1ULL
        : static_cast<unsigned long long>(LLONG_MAX);
    if (overflow || value > limit)
    {
        return negative ? LLONG_MIN : LLONG_MAX;
    }
    if (negative)
    {
        return value == static_cast<unsigned long long>(LLONG_MAX) + 1ULL
            ? LLONG_MIN
            : -static_cast<long long>(value);
    }
    return static_cast<long long>(value);
}

long long StringUtils::ClampDoubleToInt64(double value)
{
    if (std::isnan(value))
    {
        return 0;
    }
    // static_cast<double>(LLONG_MAX) rounds up to 2^63, so any value >= 2^63 is out of range.
    if (value >= 9223372036854775808.0)
    {
        return LLONG_MAX;
    }
    if (value < -9223372036854775808.0)
    {
        return LLONG_MIN;
    }
    return static_cast<long long>(value);
}


long StringUtils::ConvertToInt32(const char* source)
{
    if (!source)
    {
        return 0;
    }

    return std::atol(source);
}


bool StringUtils::ConvertToBool(const char* source)
{
    if(!source)
    {
        return false;
    }

    Aws::String strValue = ToLower(source);
    if(strValue == "true" || strValue == "1")
    {
        return true;
    }

    return false;
}


double StringUtils::ConvertToDouble(const char* source)
{
    if(!source)
    {
        return 0.0;
    }

    return std::strtod(source, NULL);
}

Aws::String StringUtils::Join(const Aws::Vector<Aws::String>& elements, char delimiter)
{
    return std::accumulate(std::begin(elements), std::end(elements), Aws::String{},
        [delimiter](const Aws::String& acc, const Aws::String& item) -> Aws::String {
            return acc.empty() ? item : acc + delimiter + item;
        });
}

#ifdef _WIN32

Aws::WString StringUtils::ToWString(const char* source)
{
    const auto len = static_cast<int>(std::strlen(source));
    Aws::WString outString;
    outString.resize(len); // there is no way UTF-16 would require _more_ code-points than UTF-8 for the _same_ string
    const auto result = MultiByteToWideChar(CP_UTF8                             /*CodePage*/,
                                            0                                   /*dwFlags*/,
                                            source                              /*lpMultiByteStr*/,
                                            len                                 /*cbMultiByte*/,
                                            &outString[0]                       /*lpWideCharStr*/,
                                            static_cast<int>(outString.length())/*cchWideChar*/);
    if (!result)
    {
        return L"";
    }
    outString.resize(result);
    return outString;
}

Aws::String StringUtils::FromWString(const wchar_t* source)
{
    const auto len = static_cast<int>(std::wcslen(source));
    Aws::String output;
    if (int requiredSizeInBytes = WideCharToMultiByte(CP_UTF8 /*CodePage*/,
                                                      0       /*dwFlags*/,
                                                      source  /*lpWideCharStr*/,
                                                      len     /*cchWideChar*/,
                                                      nullptr /*lpMultiByteStr*/,
                                                      0       /*cbMultiByte*/,
                                                      nullptr /*lpDefaultChar*/,
                                                      nullptr /*lpUsedDefaultChar*/))
    {
        output.resize(requiredSizeInBytes);
    }
    const auto result = WideCharToMultiByte(CP_UTF8                           /*CodePage*/,
                                            0                                 /*dwFlags*/,
                                            source                            /*lpWideCharStr*/,
                                            len                               /*cchWideChar*/,
                                            &output[0]                        /*lpMultiByteStr*/,
                                            static_cast<int>(output.length()) /*cbMultiByte*/,
                                            nullptr                           /*lpDefaultChar*/,
                                            nullptr                           /*lpUsedDefaultChar*/);
    if (!result)
    {
        return "";
    }
    output.resize(result);
    return output;
}

#endif
