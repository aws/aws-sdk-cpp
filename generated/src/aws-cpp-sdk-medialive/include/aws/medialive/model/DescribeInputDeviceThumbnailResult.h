/**
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
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult() = default;
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult(DescribeInputDeviceThumbnailResult&&) = default;
    AWS_MEDIALIVE_API DescribeInputDeviceThumbnailResult& operator=(DescribeInputDeviceThumbnailResult&&) = default;
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
    inline ContentType GetContentType() const { return m_contentType; }
    inline void SetContentType(ContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline DescribeInputDeviceThumbnailResult& WithContentType(ContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * The length of the content.
     */
    inline long long GetContentLength() const { return m_contentLength; }
    inline void SetContentLength(long long value) { m_contentLengthHasBeenSet = true; m_contentLength = value; }
    inline DescribeInputDeviceThumbnailResult& WithContentLength(long long value) { SetContentLength(value); return *this;}
    ///@}

    ///@{
    /**
     * The unique, cacheable version of this thumbnail.
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    DescribeInputDeviceThumbnailResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the thumbnail was last updated at the device.
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    DescribeInputDeviceThumbnailResult& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInputDeviceThumbnailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body{};
    bool m_bodyHasBeenSet = false;

    ContentType m_contentType{ContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    long long m_contentLength{0};
    bool m_contentLengthHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
