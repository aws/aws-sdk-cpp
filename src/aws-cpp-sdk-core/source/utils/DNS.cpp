/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/DNS.h>
#include <aws/core/utils/StringUtils.h>
namespace Aws
{
    namespace Utils
    {
        bool IsValidDnsLabel(const Aws::String& label)
        {
            // Valid DNS hostnames are composed of valid DNS labels separated by a period.
            // Valid DNS labels are characterized by the following:
            // 1- Only contains alphanumeric characters and/or dashes
            // 2- Cannot start or end with a dash
            // 3- Have a maximum length of 63 characters (the entirety of the domain name should be less than 255 bytes)

            if (label.empty())
                return false;

            if (label.size() > 63)
                return false;

            if (!StringUtils::IsAlnum(label.front()))
                return false; // '-' is not acceptable as the first character

            if (!StringUtils::IsAlnum(label.back()))
                return false; // '-' is not acceptable as the last  character

            for (size_t i = 1, e = label.size() - 1; i < e; ++i)
            {
                auto c = label[i];
                if (c != '-' && !StringUtils::IsAlnum(c))
                    return false;
            }

            return true;
        }


        bool isHexChar(char c) {
            return (c >= '0' && c <= '9') || 
                (c >= 'a' && c <= 'f') || 
                (c >= 'A' && c <= 'F');
        }

        bool isValidIPv6Segment(const std::string& segment) {
            if (segment.empty() || segment.length() > 4){
                return false;
            }
            return std::all_of(segment.begin(), segment.end(), isHexChar);
        }

        //The assumption is this is only called with the domain part of uri
        bool isValidIpv6Host(const Aws::String& host)
        {
            if(host.empty())
            {
                return false;
            }
            size_t segmentCount = 1;
            bool doubleColonFound = false;
            size_t labelStart = 0;

            for(size_t i = 0; i < host.length(); ++i)
            {
                if(host[i] == ':')
                {
                    // double colon check
                    if(i + 1 < host.length() && host[i+1] == ':')
                    {
                        if(doubleColonFound) {
                            return false;
                        }
                        doubleColonFound = true;
                        ++i;
                    }
                    // single colon segment
                    else
                    {
                        if(!isValidIPv6Segment(host.substr(labelStart, i - labelStart))) {
                            return false;
                        }
                        ++segmentCount;
                    }
                    labelStart = i + 1;
                }
                // no dots in ipv6
                else if(host[i] == '.')
                {
                    return false;
                }
            }

            // Handle last segment
            if(labelStart < host.length())
            {
                if(!isValidIPv6Segment(host.substr(labelStart))){
                    return false;
                }
            }
            // Check if we have 8 segments or less with one double colon
            return (doubleColonFound && segmentCount < 8) || (!doubleColonFound && segmentCount == 8);
        }

        bool IsValidHost(const Aws::String& host)
        {
            // Valid DNS hostnames are composed of valid DNS labels separated by a period.
            auto labels = StringUtils::Split(host, '.');
            if (labels.empty()) 
            {
                return false;
            }

            return !std::any_of(labels.begin(), labels.end(), [](const Aws::String& label){ return !IsValidDnsLabel(label); }) || isValidIpv6Host(host);
        }
    }
}
