﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/medialive/model/ContentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeInputDeviceThumbnailResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputDeviceThumbnailResponse">AWS
   * API Reference</a></p>
   */
  class DescribeInputDeviceThumbnailResult
  {
  public:
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult(DescribeInputDeviceThumbnailResult&&);
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult& operator=(DescribeInputDeviceThumbnailResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    DescribeInputDeviceThumbnailResult(const DescribeInputDeviceThumbnailResult&) = delete;
    DescribeInputDeviceThumbnailResult& operator=(const DescribeInputDeviceThumbnailResult&) = delete;


    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * The binary data for the thumbnail that the Link device has most recently sent to
     * MediaLive.
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * Specifies the media type of the thumbnail.
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const ContentType& value) { m_contentType = value; }
    inline void SetContentType(ContentType&& value) { m_contentType = std::move(value); }
    inline DescribeInputDeviceThumbnailResult& WithContentType(const ContentType& value) { SetContentType(value); return *this;}
    inline DescribeInputDeviceThumbnailResult& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The length of the content.
     */
    inline long long GetContentLength() const{ return m_contentLength; }
    inline void SetContentLength(long long value) { m_contentLength = value; }
    inline DescribeInputDeviceThumbnailResult& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * The unique, cacheable version of this thumbnail.
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline DescribeInputDeviceThumbnailResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline DescribeInputDeviceThumbnailResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline DescribeInputDeviceThumbnailResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the thumbnail was last updated at the device.
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }
    inline DescribeInputDeviceThumbnailResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline DescribeInputDeviceThumbnailResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInputDeviceThumbnailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInputDeviceThumbnailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInputDeviceThumbnailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body;

    ContentType m_contentType;

    long long m_contentLength;

    Aws::String m_eTag;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
