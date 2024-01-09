/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/curl-multi/CurlEasyHandleContext.h>
#include <aws/core/http/curl-multi/CurlMultiHttpClient.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/Outcome.h>
#include <cassert>
#include <algorithm>

namespace Aws
{
namespace Http
{
namespace Curl
{

// TODO: enable memory allocation through SDK on curl
#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

static const char* MemTag = "libcurl";
static size_t offset = sizeof(size_t);

static void* malloc_callback(size_t size)
{
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, size + offset));
    std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
    *pointerToSize = size;
    return reinterpret_cast<void*>(newMem + offset);
}

static void free_callback(void* ptr)
{
    if(ptr)
    {
        char* shiftedMemory = reinterpret_cast<char*>(ptr);
        Aws::Free(shiftedMemory - offset);
    }
}

static void* realloc_callback(void* ptr, size_t size)
{
    if(!ptr)
    {
        return malloc_callback(size);
    }


    if(!size && ptr)
    {
        free_callback(ptr);
        return nullptr;
    }

    char* originalLenCharPtr = reinterpret_cast<char*>(ptr) - offset;
    size_t originalLen = *reinterpret_cast<size_t*>(originalLenCharPtr);

    char* rawMemory = reinterpret_cast<char*>(Aws::Malloc(MemTag, size + offset));
    if(rawMemory)
    {
        std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(rawMemory);
        *pointerToSize = size;

        size_t copyLength = (std::min)(originalLen, size);
#ifdef _MSC_VER
        memcpy_s(rawMemory + offset, size, ptr, copyLength);
#else
        memcpy(rawMemory + offset, ptr, copyLength);
#endif
        free_callback(ptr);
        return reinterpret_cast<void*>(rawMemory + offset);
    }
    else
    {
        return ptr;
    }

}

static void* calloc_callback(size_t nmemb, size_t size)
{
    size_t dataSize = nmemb * size;
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, dataSize + offset));
    std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
    *pointerToSize = dataSize;
#ifdef _MSC_VER
    memset_s(newMem + offset, dataSize, 0, dataSize);
#else
    memset(newMem + offset, 0, dataSize);
#endif

    return reinterpret_cast<void*>(newMem + offset);
}

static char* strdup_callback(const char* str)
{
    size_t len = strlen(str) + 1;
    size_t newLen = len + offset;
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, newLen));

    if(newMem)
    {
        std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
        *pointerToSize = len;
#ifdef _MSC_VER
        memcpy_s(newMem + offset, len, str, len);
#else
        memcpy(newMem + offset, str, len);
#endif
        return newMem + offset;
    }
    return nullptr;
}

#endif

static const char* CURL_EASY_HANDLE_CTX_TAG = "CurlMultiHttpClient";

size_t CurlEasyHandleContext::WriteData(char* ptr, size_t size, size_t nmemb, void* userdata)
{
  if (ptr)
  {
    CurlEasyHandleContext* context = reinterpret_cast<CurlEasyHandleContext*>(userdata);
    assert(context);

    const CurlMultiHttpClient* client = context->m_client;
    assert(client);
    HttpRequest* pRequest = context->writeContext.m_request;
    assert(pRequest);
    if(!client->ContinueRequest(*pRequest) || !client->IsRequestProcessingEnabled())
    {
      return 0;
    }

    HttpResponse* response = context->writeContext.m_response.get();
    assert(response);

    size_t sizeToWrite = size * nmemb; // TODO: check for overflow
    if (context->writeContext.m_rateLimiter)
    {
      context->writeContext.m_rateLimiter->ApplyAndPayForCost(static_cast<int64_t>(sizeToWrite));
    }

    for (const auto& hashIterator : pRequest->GetResponseValidationHashes())
    {
      hashIterator.second->Update(reinterpret_cast<unsigned char*>(ptr), sizeToWrite);
    }

    if (response->GetResponseBody().fail()) {
      const auto& ref = response->GetResponseBody();
      AWS_LOGSTREAM_ERROR(CURL_EASY_HANDLE_CTX_TAG, "Response output stream in bad state (eof: "
          << ref.eof() << ", bad: " << ref.bad() << ")");
      return 0;
    }

    size_t cur = response->GetResponseBody().tellp();
    if (response->GetResponseBody().fail()) {
      const auto& ref = response->GetResponseBody();
      AWS_LOGSTREAM_ERROR(CURL_EASY_HANDLE_CTX_TAG, "Unable to query response output position (eof: "
          << ref.eof() << ", bad: " << ref.bad() << ")");
      return 0;
    }

    response->GetResponseBody().write(ptr, static_cast<std::streamsize>(sizeToWrite));
    if (response->GetResponseBody().fail()) {
      const auto& ref = response->GetResponseBody();
      AWS_LOGSTREAM_ERROR(CURL_EASY_HANDLE_CTX_TAG, "Failed to write " << size << " / " << sizeToWrite << " B response"
                                                                   << " at " << cur << " (eof: " << ref.eof() << ", bad: " << ref.bad() << ")");
      return 0;
    }
    if (pRequest->IsEventStreamRequest() && !response->HasHeader(Aws::Http::X_AMZN_ERROR_TYPE))
    {
      response->GetResponseBody().flush();
      if (response->GetResponseBody().fail()) {
        const auto& ref = response->GetResponseBody();
        AWS_LOGSTREAM_ERROR(CURL_EASY_HANDLE_CTX_TAG, "Failed to flush event response (eof: "
            << ref.eof() << ", bad: " << ref.bad() << ")");
        return 0;
      }
    }
    auto& receivedHandler = pRequest->GetDataReceivedEventHandler();
    if (receivedHandler)
    {
      receivedHandler(pRequest, response, static_cast<long long>(sizeToWrite));
    }

    AWS_LOGSTREAM_TRACE(CURL_EASY_HANDLE_CTX_TAG, sizeToWrite << " bytes written to response.");
    context->writeContext.m_numBytesResponseReceived += sizeToWrite;
    return sizeToWrite;
  }
  return 0;
}

size_t CurlEasyHandleContext::WriteHeader(char* ptr, size_t size, size_t nmemb, void* userdata)
{
  if (ptr)
  {
    CurlEasyHandleContext* context = reinterpret_cast<CurlEasyHandleContext*>(userdata);
    assert(context);
    AWS_LOGSTREAM_TRACE(CURL_EASY_HANDLE_CTX_TAG, ptr);

    HttpResponse* response = context->writeContext.m_response.get();
    assert(response);

    Aws::String headerLine(ptr);
    Aws::Vector<Aws::String> keyValuePair = Aws::Utils::StringUtils::Split(headerLine, ':', 2);

    if (keyValuePair.size() == 2)
    {
      response->AddHeader(Aws::Utils::StringUtils::Trim(keyValuePair[0].c_str()), Aws::Utils::StringUtils::Trim(keyValuePair[1].c_str()));
    }

    return size * nmemb;
  }
  return 0;
}

size_t CurlEasyHandleContext::ReadBody(char* ptr, size_t size, size_t nmemb, void* userdata, bool isStreaming)
{
  CurlEasyHandleContext* context = reinterpret_cast<CurlEasyHandleContext*>(userdata);
  if(!context->writeContext.m_HasBody)
  {
    return 0;
  }

  const CurlMultiHttpClient* client = context->m_client;
  assert(client);

  HttpRequest* request = context->writeContext.m_request;
  assert(request);

  if(!client->ContinueRequest(*request) || !client->IsRequestProcessingEnabled())
  {
    return CURL_READFUNC_ABORT;
  }

  const std::shared_ptr<Aws::IOStream>& ioStream = request->GetContentBody();

  size_t amountToRead = size * nmemb; // TODO: check for overflow
  bool isAwsChunked = request->HasHeader(Aws::Http::CONTENT_ENCODING_HEADER) &&
                      request->GetHeaderValue(Aws::Http::CONTENT_ENCODING_HEADER) == Aws::Http::AWS_CHUNKED_VALUE;
  // aws-chunk = hex(chunk-size) + CRLF + chunk-data + CRLF
  // Needs to reserve bytes of sizeof(hex(chunk-size)) + sizeof(CRLF) + sizeof(CRLF)
  if (isAwsChunked)
  {
    Aws::String amountToReadHexString = Aws::Utils::StringUtils::ToHexString(amountToRead);
    amountToRead -= (amountToReadHexString.size() + 4);
  }

  if (ioStream != nullptr && amountToRead > 0)
  {
    if (isStreaming)
    {
      if (ioStream->readsome(ptr, amountToRead) == 0 && !ioStream->eof())
      {
        return CURL_READFUNC_PAUSE;
      }
    }
    else
    {
      ioStream->read(ptr, amountToRead);
    }
    size_t amountRead = static_cast<size_t>(ioStream->gcount());

    if (isAwsChunked)
    {
      if (amountRead > 0)
      {
        if (request->GetRequestHash().second != nullptr)
        {
          request->GetRequestHash().second->Update(reinterpret_cast<unsigned char*>(ptr), amountRead);
        }

        Aws::String hex = Aws::Utils::StringUtils::ToHexString(amountRead);
        memmove(ptr + hex.size() + 2, ptr, amountRead);
        memmove(ptr + hex.size() + 2 + amountRead, "\r\n", 2);
        memmove(ptr, hex.c_str(), hex.size());
        memmove(ptr + hex.size(), "\r\n", 2);
        amountRead += hex.size() + 4;
      }
      else if (!context->readContext.m_chunkEnd)
      {
        Aws::StringStream chunkedTrailer;
        chunkedTrailer << "0\r\n";
        if (request->GetRequestHash().second != nullptr)
        {
          chunkedTrailer << "x-amz-checksum-" << request->GetRequestHash().first << ":"
                         << Aws::Utils::HashingUtils::Base64Encode(request->GetRequestHash().second->GetHash().GetResult()) << "\r\n";
        }
        chunkedTrailer << "\r\n";
        amountRead = chunkedTrailer.str().size();
        memcpy(ptr, chunkedTrailer.str().c_str(), amountRead);
        context->readContext.m_chunkEnd = true;
      }
    }

    auto& sentHandler = request->GetDataSentEventHandler();
    if (sentHandler)
    {
      sentHandler(request, static_cast<long long>(amountRead));
    }

    if (context->readContext.m_rateLimiter)
    {
      context->readContext.m_rateLimiter->ApplyAndPayForCost(static_cast<int64_t>(amountRead));
    }

    return amountRead;
  }

  return 0;
}

size_t CurlEasyHandleContext::ReadBodyStreaming(char* ptr, size_t size, size_t nmemb, void* userdata) {
  return ReadBody(ptr, size, nmemb, userdata, true);
}

size_t CurlEasyHandleContext::ReadBodyFunc(char* ptr, size_t size, size_t nmemb, void* userdata) {
  return ReadBody(ptr, size, nmemb, userdata, false);
}

size_t CurlEasyHandleContext::SeekBody(void* userdata, curl_off_t offset, int origin)
{
  CurlEasyHandleContext* context = reinterpret_cast<CurlEasyHandleContext*>(userdata);
  if(context == nullptr)
  {
    return CURL_SEEKFUNC_FAIL;
  }

  const CurlMultiHttpClient* client = context->m_client;
  assert(client);
  HttpRequest* request = context->writeContext.m_request;
  assert(request);

  if(!client->ContinueRequest(*request) || !client->IsRequestProcessingEnabled())
  {
    return CURL_SEEKFUNC_FAIL;
  }

  const std::shared_ptr<Aws::IOStream>& ioStream = request->GetContentBody();

  std::ios_base::seekdir dir;
  switch(origin)
  {
    case SEEK_SET:
      dir = std::ios_base::beg;
      break;
    case SEEK_CUR:
      dir = std::ios_base::cur;
      break;
    case SEEK_END:
      dir = std::ios_base::end;
      break;
    default:
      return CURL_SEEKFUNC_FAIL;
  }

  ioStream->clear();
  ioStream->seekg(offset, dir);
  if (ioStream->fail()) {
    return CURL_SEEKFUNC_CANTSEEK;
  }

  return CURL_SEEKFUNC_OK;
}
#if LIBCURL_VERSION_NUM >= 0x072000 // 7.32.0
int CurlEasyHandleContext::CurlProgressCallback(void *userdata, curl_off_t, curl_off_t, curl_off_t, curl_off_t)
#else
int CurlEasyHandleContext::CurlProgressCallback(void *userdata, double, double, double, double)
#endif
{
  CurlEasyHandleContext* context = reinterpret_cast<CurlEasyHandleContext*>(userdata);
  assert(context && context->writeContext.m_request);

  const std::shared_ptr<Aws::IOStream>& ioStream = context->writeContext.m_request->GetContentBody();
  if (ioStream->eof())
  {
    curl_easy_pause(context->m_curlEasyHandle, CURLPAUSE_CONT);
    return 0;
  }
  char output[1];
  if (ioStream->readsome(output, 1) > 0)
  {
    ioStream->unget();
    if (!ioStream->good())
    {
      AWS_LOGSTREAM_WARN(CURL_EASY_HANDLE_CTX_TAG, "Input stream failed to perform unget().");
    }
    curl_easy_pause(context->m_curlEasyHandle, CURLPAUSE_CONT);
  }

  return 0;
}

} // namespace Curl
} // namespace Http
} // namespace Aws