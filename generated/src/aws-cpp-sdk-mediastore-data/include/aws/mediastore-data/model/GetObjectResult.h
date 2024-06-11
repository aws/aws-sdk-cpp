/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace MediaStoreData
{
namespace Model
{
  class GetObjectResult
  {
  public:
    AWS_MEDIASTOREDATA_API GetObjectResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_MEDIASTOREDATA_API GetObjectResult(GetObjectResult&&);
    AWS_MEDIASTOREDATA_API GetObjectResult& operator=(GetObjectResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetObjectResult(const GetObjectResult&) = delete;
    GetObjectResult& operator=(const GetObjectResult&) = delete;


    AWS_MEDIASTOREDATA_API GetObjectResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_MEDIASTOREDATA_API GetObjectResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The bytes of the object. </p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>An optional <code>CacheControl</code> header that allows the caller to
     * control the object's cache behavior. Headers can be passed in as specified in
     * the HTTP spec at <a
     * href="https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9">https://www.w3.org/Protocols/rfc2616/rfc2616-sec14.html#sec14.9</a>.</p>
     * <p>Headers with a custom user-defined value are also accepted.</p>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }
    inline void SetCacheControl(const Aws::String& value) { m_cacheControl = value; }
    inline void SetCacheControl(Aws::String&& value) { m_cacheControl = std::move(value); }
    inline void SetCacheControl(const char* value) { m_cacheControl.assign(value); }
    inline GetObjectResult& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}
    inline GetObjectResult& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}
    inline GetObjectResult& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of bytes to retrieve.</p>
     */
    inline const Aws::String& GetContentRange() const{ return m_contentRange; }
    inline void SetContentRange(const Aws::String& value) { m_contentRange = value; }
    inline void SetContentRange(Aws::String&& value) { m_contentRange = std::move(value); }
    inline void SetContentRange(const char* value) { m_contentRange.assign(value); }
    inline GetObjectResult& WithContentRange(const Aws::String& value) { SetContentRange(value); return *this;}
    inline GetObjectResult& WithContentRange(Aws::String&& value) { SetContentRange(std::move(value)); return *this;}
    inline GetObjectResult& WithContentRange(const char* value) { SetContentRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the object in bytes.</p>
     */
    inline long long GetContentLength() const{ return m_contentLength; }
    inline void SetContentLength(long long value) { m_contentLength = value; }
    inline GetObjectResult& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the object.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline GetObjectResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline GetObjectResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline GetObjectResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag that represents a unique instance of the object.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline GetObjectResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline GetObjectResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline GetObjectResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the object was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }
    inline GetObjectResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline GetObjectResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML status code of the request. Status codes ranging from 200 to 299
     * indicate success. All other status codes indicate the type of error that
     * occurred.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCode = value; }
    inline GetObjectResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetObjectResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetObjectResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetObjectResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_cacheControl;

    Aws::String m_contentRange;

    long long m_contentLength;

    Aws::String m_contentType;

    Aws::String m_eTag;

    Aws::Utils::DateTime m_lastModified;

    int m_statusCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
