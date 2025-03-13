/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
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
namespace SocialMessaging
{
namespace Model
{
  class GetWhatsAppMessageMediaResult
  {
  public:
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaResult() = default;
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The MIME type of the media.</p>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    GetWhatsAppMessageMediaResult& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file size of the media, in KB.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline GetWhatsAppMessageMediaResult& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWhatsAppMessageMediaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
