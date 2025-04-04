/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/windows/WinSyncHttpClient.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/stream/StreamBufProtectedWriter.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/windows/WinConnectionPoolMgr.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>
#include <aws/core/utils/Outcome.h>

#include <Windows.h>
#include <sstream>
#include <iostream>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const uint32_t HTTP_REQUEST_WRITE_BUFFER_LENGTH = 8192;

WinSyncHttpClient::~WinSyncHttpClient()
{
    AWS_LOGSTREAM_DEBUG(GetLogTag(), "Cleaning up client with handle " << m_openHandle);
    if (GetConnectionPoolManager() && GetOpenHandle())
    {
        GetConnectionPoolManager()->DoCloseHandle(GetOpenHandle());
    }
    Aws::Delete(GetConnectionPoolManager());
    SetConnectionPoolManager(nullptr);
}

void WinSyncHttpClient::SetOpenHandle(void* handle)
{
    m_openHandle = handle;
}

void WinSyncHttpClient::SetConnectionPoolManager(WinConnectionPoolMgr* connectionMgr)
{
    m_connectionPoolMgr = connectionMgr;
}

void* WinSyncHttpClient::AllocateWindowsHttpRequest(const std::shared_ptr<HttpRequest>& request, void* connection) const
{
    Aws::StringStream ss;
    ss << request->GetUri().GetPath();

    if (request->GetUri().GetQueryStringParameters().size() > 0)
    {
        ss << request->GetUri().GetQueryString();
    }

    void* hHttpRequest = OpenRequest(request, connection, ss);
    AWS_LOGSTREAM_DEBUG(GetLogTag(), "AllocateWindowsHttpRequest returned handle " << hHttpRequest);

    return hHttpRequest;
}

void WinSyncHttpClient::AddHeadersToRequest(const std::shared_ptr<HttpRequest>& request, void* hHttpRequest) const
{
    if(request->GetHeaders().size() > 0)
    {
        Aws::StringStream ss;
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "with headers:");
        for (auto& header : request->GetHeaders())
        {
            if (!header.first.empty() && !header.second.empty())
            {
                ss << header.first << ": " << header.second << "\r\n";
            }
            else
            {
                // DOUBLE SPACE after COLON, thanks, WinHTTP!
                ss << header.first << ":  " << "\r\n";
            }
        }

        Aws::String headerString = ss.str();
        AWS_LOGSTREAM_DEBUG(GetLogTag(), headerString);

        DoAddHeaders(hHttpRequest, headerString);
    }
    else
    {
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "with no headers");
    }
}

bool WinSyncHttpClient::StreamPayloadToRequest(const std::shared_ptr<HttpRequest>& request, void* hHttpRequest, Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
{
    bool success = true;
    bool isChunked = request->HasTransferEncoding() && request->GetTransferEncoding() == Aws::Http::CHUNKED_VALUE;
    bool isAwsChunked = request->HasHeader(Aws::Http::CONTENT_ENCODING_HEADER) &&
                        request->GetHeaderValue(Aws::Http::CONTENT_ENCODING_HEADER).find(Aws::Http::AWS_CHUNKED_VALUE) != Aws::String::npos;
    auto payloadStream = request->GetContentBody();
    const char CRLF[] = "\r\n";
    if(payloadStream)
    {
        uint64_t bytesWritten;
        uint64_t bytesToRead = HTTP_REQUEST_WRITE_BUFFER_LENGTH;
        auto startingPos = payloadStream->tellg();
        bool done = false;
        // aws-chunk = hex(chunk-size) + CRLF + chunk-data + CRLF
        // Length of hex(HTTP_REQUEST_WRITE_BUFFER_LENGTH) is 4;
        // Length of each CRLF is 2.
        // Reserve 8 bytes in total, should the request be aws-chunked.
        char streamBuffer[ HTTP_REQUEST_WRITE_BUFFER_LENGTH + 8 ];
        while(success && !done)
        {
            payloadStream->read(streamBuffer, bytesToRead);
            std::streamsize bytesRead = payloadStream->gcount();
            success = !payloadStream->bad();

            bytesWritten = 0;
            if (bytesRead > 0)
            {
                if (isAwsChunked)
                {
                    if (request->GetRequestHash().second != nullptr)
                    {
                        request->GetRequestHash().second->Update(reinterpret_cast<unsigned char*>(streamBuffer), static_cast<size_t>(bytesRead));
                    }

                    Aws::String hex = Aws::Utils::StringUtils::ToHexString(static_cast<uint64_t>(bytesRead));
                    memcpy(streamBuffer + hex.size() + 2, streamBuffer, static_cast<size_t>(bytesRead));
                    memcpy(streamBuffer + hex.size() + 2 + bytesRead, CRLF, 2);
                    memcpy(streamBuffer, hex.c_str(), hex.size());
                    memcpy(streamBuffer + hex.size(), CRLF, 2);
                    bytesRead += hex.size() + 4;
                }

                bytesWritten = DoWriteData(hHttpRequest, streamBuffer, bytesRead, isChunked);
                if (!bytesWritten)
                {
                    success = false;
                }
                else if(writeLimiter)
                {
                    writeLimiter->ApplyAndPayForCost(bytesWritten);
                }
            }

            auto& sentHandler = request->GetDataSentEventHandler();
            if (sentHandler)
            {
                sentHandler(request.get(), (long long)bytesWritten);
            }

            if(!payloadStream->good())
            {
                done = true;
            }

            success = success && ContinueRequest(*request) && IsRequestProcessingEnabled();
        }

        if (success && isAwsChunked)
        {
            Aws::StringStream chunkedTrailer;
            chunkedTrailer << "0" << CRLF;
            if (request->GetRequestHash().second != nullptr)
            {
                chunkedTrailer << "x-amz-checksum-" << request->GetRequestHash().first << ":"
                    << Aws::Utils::HashingUtils::Base64Encode(request->GetRequestHash().second->GetHash().GetResult()) << CRLF;
            }
            chunkedTrailer << CRLF;
            bytesWritten = DoWriteData(hHttpRequest, const_cast<char*>(chunkedTrailer.str().c_str()), chunkedTrailer.str().size(), isChunked);
            if (!bytesWritten)
            {
                success = false;
            }
            else if(writeLimiter)
            {
                writeLimiter->ApplyAndPayForCost(bytesWritten);
            }
        }

        if (success && isChunked)
        {
            bytesWritten = FinalizeWriteData(hHttpRequest);
            if (!bytesWritten)
            {
                success = false;
            }
            else if (writeLimiter)
            {
                writeLimiter->ApplyAndPayForCost(bytesWritten);
            }
        }

        payloadStream->clear();
        payloadStream->seekg(startingPos, payloadStream->beg);
    }

    if(success)
    {
        success = DoReceiveResponse(hHttpRequest);
    }
    return success;
}

void WinSyncHttpClient::LogRequestInternalFailure() const
{
    static const uint32_t WINDOWS_ERROR_MESSAGE_BUFFER_SIZE = 2048;

    DWORD error = GetLastError();

    char messageBuffer[WINDOWS_ERROR_MESSAGE_BUFFER_SIZE] = { 0 };

    FormatMessageA(
        FORMAT_MESSAGE_FROM_HMODULE |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        GetClientModule(),
        error,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        messageBuffer,
        WINDOWS_ERROR_MESSAGE_BUFFER_SIZE,
        nullptr);
    AWS_LOGSTREAM_WARN(GetLogTag(), "Send request failed: Windows/WinHTTP error code is " << error << ": " << messageBuffer);

}

bool WinSyncHttpClient::BuildSuccessResponse(const std::shared_ptr<HttpRequest>& request, std::shared_ptr<HttpResponse>& response, void* hHttpRequest, Aws::Utils::RateLimits::RateLimiterInterface* readLimiter) const
{
    Aws::StringStream ss;
    uint64_t read = 0;

    DoQueryHeaders(hHttpRequest, response, ss, read);

    if(readLimiter != nullptr && read > 0)
    {
        readLimiter->ApplyAndPayForCost(read);
    }

    Aws::Vector<Aws::String> rawHeaders = StringUtils::SplitOnLine(ss.str());

    for (auto& header : rawHeaders)
    {
        Aws::Vector<Aws::String> keyValuePair = StringUtils::Split(header, ':', 2);
        if (keyValuePair.size() == 2)
        {
            response->AddHeader(StringUtils::Trim(keyValuePair[0].c_str()), StringUtils::Trim(keyValuePair[1].c_str()));
        }
    }

    if (request->GetMethod() != HttpMethod::HTTP_HEAD)
    {
        if(!ContinueRequest(*request) || !IsRequestProcessingEnabled())
        {
            response->SetClientErrorType(CoreErrors::USER_CANCELLED);
            response->SetClientErrorMessage("Request processing disabled or continuation cancelled by user's continuation handler.");
            response->SetResponseCode(Aws::Http::HttpResponseCode::NO_RESPONSE);
            return false;
        }

        if (response->GetResponseBody().fail()) {
            const auto& ref = response->GetResponseBody();
            AWS_LOGSTREAM_ERROR(GetLogTag(), "Response output stream is in a bad state (eof: " << ref.eof() << ", bad: " << ref.bad() << ")");
            response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
            response->SetClientErrorMessage("Response output stream is in a bad state.");
            return false;
        }

        bool connectionOpen = true;
        auto writerFunc =
                [this, hHttpRequest, &request, readLimiter, &response, &connectionOpen](char* dst, uint64_t dstSz, uint64_t& read) -> bool
                {
                    bool success = true;
                    uint64_t available = 0;
                    connectionOpen = DoQueryDataAvailable(hHttpRequest, available);

                    if (connectionOpen && available)
                    {
                        dstSz = (std::min)(dstSz, available);
                        success = DoReadData(hHttpRequest, dst, dstSz, read);
                        if (success && read > 0)
                        {
                            for (const auto& hashIterator : request->GetResponseValidationHashes())
                            {
                              std::stringstream headerStr;
                              headerStr<<"x-amz-checksum-"<<hashIterator.first;
                              if(response->HasHeader(headerStr.str().c_str()))
                              {
                                hashIterator.second->Update(reinterpret_cast<unsigned char*>(dst), static_cast<size_t>(read));
                                break;
                              }
                            }

                            auto& headersHandler = request->GetHeadersReceivedEventHandler();
                            if (headersHandler)
                            {
                              headersHandler(request.get(), response.get());
                            }

                            if (readLimiter != nullptr)
                            {
                                readLimiter->ApplyAndPayForCost(read);
                            }
                            auto& receivedHandler = request->GetDataReceivedEventHandler();
                            if (receivedHandler)
                            {
                                receivedHandler(request.get(), response.get(), (long long)read);
                            }
                        }
                        if (!ContinueRequest(*request) || !IsRequestProcessingEnabled())
                        {
                            return false;
                        }
                    }
                    return connectionOpen && success && ContinueRequest(*request) && IsRequestProcessingEnabled();
                };
        uint64_t numBytesResponseReceived = Aws::Utils::Stream::StreamBufProtectedWriter::WriteToBuffer(response->GetResponseBody(), writerFunc);

        if(!ContinueRequest(*request) || !IsRequestProcessingEnabled())
        {
            response->SetClientErrorType(CoreErrors::USER_CANCELLED);
            response->SetClientErrorMessage("Request processing disabled or continuation cancelled by user's continuation handler.");
            response->SetResponseCode(Aws::Http::HttpResponseCode::NO_RESPONSE);
            return false;
        }

        if (response->GetResponseBody().fail()) {
            Aws::OStringStream errorMsgStr;
            errorMsgStr << "Failed to write received response (eof: "
                        << response->GetResponseBody().eof() << ", bad: " << response->GetResponseBody().bad() << ")";

            Aws::String errorMsg = errorMsgStr.str();
            AWS_LOGSTREAM_ERROR(GetLogTag(), errorMsg);
            response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
            response->SetClientErrorMessage(errorMsg);
            return false;
        }

        if (request->IsEventStreamRequest() && !response->HasHeader(Aws::Http::X_AMZN_ERROR_TYPE))
        {
            response->GetResponseBody().flush();
            if (response->GetResponseBody().fail()) {
                const auto& ref = response->GetResponseBody();
                AWS_LOGSTREAM_ERROR(GetLogTag(), "Failed to flush event response (eof: " << ref.eof() << ", bad: " << ref.bad() << ")");
                response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
                response->SetClientErrorMessage("Failed to flush event stream event response");
                return false;
            }
        }

        if (response->HasHeader(Aws::Http::CONTENT_LENGTH_HEADER))
        {
            const Aws::String& contentLength = response->GetHeader(Aws::Http::CONTENT_LENGTH_HEADER);
            AWS_LOGSTREAM_TRACE(GetLogTag(), "Response content-length header: " << contentLength);
            AWS_LOGSTREAM_TRACE(GetLogTag(), "Response body length: " << numBytesResponseReceived);
            if ((uint64_t) StringUtils::ConvertToInt64(contentLength.c_str()) != numBytesResponseReceived)
            {
                response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
                response->SetClientErrorMessage("Response body length doesn't match the content-length header.");
                AWS_LOGSTREAM_ERROR(GetLogTag(), "Response body length doesn't match the content-length header.");
                return false;
            }
        }
    }

    //go ahead and flush the response body.
    response->GetResponseBody().flush();

    return true;
}

std::shared_ptr<HttpResponse> WinSyncHttpClient::MakeRequest(const std::shared_ptr<HttpRequest>& request,
        Aws::Utils::RateLimits::RateLimiterInterface* readLimiter,
        Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
{
	//we URL encode right before going over the wire to avoid double encoding problems with the signer.
	URI& uriRef = request->GetUri();
	uriRef.SetPath(uriRef.GetURLEncodedPathRFC3986());

    AWS_LOGSTREAM_TRACE(GetLogTag(), "Making " << HttpMethodMapper::GetNameForHttpMethod(request->GetMethod()) <<
			" request to uri " << uriRef.GetURIString(true));

    bool success = false;
    void* connection = nullptr;
    void* hHttpRequest = nullptr;
    std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(GetLogTag(), request);

    if(IsRequestProcessingEnabled())
    {
        if (writeLimiter != nullptr)
        {
            writeLimiter->ApplyAndPayForCost(request->GetSize());
        }

        connection = m_connectionPoolMgr->AcquireConnectionForHost(uriRef.GetAuthority(), uriRef.GetPort());
        OverrideOptionsOnConnectionHandle(connection);
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Acquired connection " << connection);

        hHttpRequest = AllocateWindowsHttpRequest(request, connection);

        AddHeadersToRequest(request, hHttpRequest);
        OverrideOptionsOnRequestHandle(hHttpRequest);
        if (DoSendRequest(hHttpRequest) && StreamPayloadToRequest(request, hHttpRequest, writeLimiter))
        {
            success = BuildSuccessResponse(request, response, hHttpRequest, readLimiter);
        }
        else
        {
            response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
            response->SetClientErrorMessage("Encountered network error when sending http request");
        }
    }

    if ((!success && !IsRequestProcessingEnabled()) || !ContinueRequest(*request))
    {
        response->SetClientErrorType(CoreErrors::USER_CANCELLED);
        response->SetClientErrorMessage("Request processing disabled or continuation cancelled by user's continuation handler.");
        response->SetResponseCode(Aws::Http::HttpResponseCode::NO_RESPONSE);
    }
    else if(!success)
    {
        AWS_LOGSTREAM_INFO(GetLogTag(), "Actual HTTP Version used " <<  GetActualHttpVersionUsed(hHttpRequest));
        LogRequestInternalFailure();
    }

    if (hHttpRequest)
    {
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Closing http request handle " << hHttpRequest);
        GetConnectionPoolManager()->DoCloseHandle(hHttpRequest);
    }

    AWS_LOGSTREAM_DEBUG(GetLogTag(), "Releasing connection handle " << connection);
    GetConnectionPoolManager()->ReleaseConnectionForHost(request->GetUri().GetAuthority(), request->GetUri().GetPort(), connection);

    return response;
}
