/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

#include <iostream>
#include <algorithm>
#include <cassert>

static const char* STANDARD_HTTP_REQUEST_LOG_TAG = "StandardHttpRequest";

static bool IsDefaultPort(const Aws::Http::URI& uri)
{
    switch(uri.GetPort())
    {
        case 80:
            return uri.GetScheme() == Scheme::HTTP;
        case 443:
            return uri.GetScheme() == Scheme::HTTPS;
        default:
            return false;
    }
}

Aws::Http::Standard::StandardHttpRequest::StandardHttpRequest(const Aws::Http::URI& uri, Aws::Http::HttpMethod method) :
    HttpRequest(uri, method), 
    bodyStream(nullptr),
    m_responseStreamFactory()
{
    if(IsDefaultPort(uri))
    {
        StandardHttpRequest::SetHeaderValue(HOST_HEADER, uri.GetAuthority());
    }
    else
    {
        Aws::StringStream host;
        host << uri.GetAuthority() << ":" << uri.GetPort();
        StandardHttpRequest::SetHeaderValue(HOST_HEADER, host.str());
    }
}

HeaderValueCollection Aws::Http::Standard::StandardHttpRequest::GetHeaders() const
{
    HeaderValueCollection headers;

    for (auto iter = headerMap.begin(); iter != headerMap.end(); ++iter)
    {
        headers.emplace(HeaderValuePair(iter->first, iter->second));
    }

    return headers;
}

const Aws::String& Aws::Http::Standard::StandardHttpRequest::GetHeaderValue(const char* headerName) const
{
    auto iter = headerMap.find(StringUtils::ToLower(headerName));
    assert (iter != headerMap.end());
    if (iter == headerMap.end()) {
        AWS_LOGSTREAM_ERROR(STANDARD_HTTP_REQUEST_LOG_TAG, "Requested a header value for a missing header key: " << headerName);
        static const Aws::String EMPTY_STRING = "";
        return EMPTY_STRING;
    }
    return iter->second;
}

void Aws::Http::Standard::StandardHttpRequest::SetHeaderValue(const char* headerName, const Aws::String& headerValue)
{
    headerMap[StringUtils::ToLower(headerName)] = StringUtils::Trim(headerValue.c_str());
}

void Aws::Http::Standard::StandardHttpRequest::SetHeaderValue(const Aws::String &headerName, const Aws::String &headerValue) {

    headerMap[StringUtils::ToLower(headerName.c_str())] = StringUtils::Trim(headerValue.c_str());
}

void Aws::Http::Standard::StandardHttpRequest::DeleteHeader(const char* headerName)
{
    headerMap.erase(StringUtils::ToLower(headerName));
}

bool Aws::Http::Standard::StandardHttpRequest::HasHeader(const char* headerName) const
{
    return headerMap.find(StringUtils::ToLower(headerName)) != headerMap.end();
}

int64_t Aws::Http::Standard::StandardHttpRequest::GetSize() const
{
    int64_t size = 0;

    std::for_each(headerMap.cbegin(), headerMap.cend(), [&](const HeaderValueCollection::value_type& kvPair){ size += kvPair.first.length(); size += kvPair.second.length(); });

    return size;
}

const Aws::IOStreamFactory& Aws::Http::Standard::StandardHttpRequest::GetResponseStreamFactory() const
{ 
    return m_responseStreamFactory; 
}

void Aws::Http::Standard::StandardHttpRequest::SetResponseStreamFactory(const Aws::IOStreamFactory& factory)
{ 
    m_responseStreamFactory = factory; 
}
