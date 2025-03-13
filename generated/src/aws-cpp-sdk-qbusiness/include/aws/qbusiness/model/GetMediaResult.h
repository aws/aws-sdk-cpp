/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{
  class GetMediaResult
  {
  public:
    AWS_QBUSINESS_API GetMediaResult() = default;
    AWS_QBUSINESS_API GetMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API GetMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base64-encoded bytes of the media object.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMediaBytes() const { return m_mediaBytes; }
    template<typename MediaBytesT = Aws::Utils::ByteBuffer>
    void SetMediaBytes(MediaBytesT&& value) { m_mediaBytesHasBeenSet = true; m_mediaBytes = std::forward<MediaBytesT>(value); }
    template<typename MediaBytesT = Aws::Utils::ByteBuffer>
    GetMediaResult& WithMediaBytes(MediaBytesT&& value) { SetMediaBytes(std::forward<MediaBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the media object (image/png).</p>
     */
    inline const Aws::String& GetMediaMimeType() const { return m_mediaMimeType; }
    template<typename MediaMimeTypeT = Aws::String>
    void SetMediaMimeType(MediaMimeTypeT&& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = std::forward<MediaMimeTypeT>(value); }
    template<typename MediaMimeTypeT = Aws::String>
    GetMediaResult& WithMediaMimeType(MediaMimeTypeT&& value) { SetMediaMimeType(std::forward<MediaMimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_mediaBytes{};
    bool m_mediaBytesHasBeenSet = false;

    Aws::String m_mediaMimeType;
    bool m_mediaMimeTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
