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
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaResult();
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API GetWhatsAppMessageMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The MIME type of the media.</p>
     */
    inline const Aws::String& GetMimeType() const{ return m_mimeType; }
    inline void SetMimeType(const Aws::String& value) { m_mimeType = value; }
    inline void SetMimeType(Aws::String&& value) { m_mimeType = std::move(value); }
    inline void SetMimeType(const char* value) { m_mimeType.assign(value); }
    inline GetWhatsAppMessageMediaResult& WithMimeType(const Aws::String& value) { SetMimeType(value); return *this;}
    inline GetWhatsAppMessageMediaResult& WithMimeType(Aws::String&& value) { SetMimeType(std::move(value)); return *this;}
    inline GetWhatsAppMessageMediaResult& WithMimeType(const char* value) { SetMimeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file size of the media, in KB.</p>
     */
    inline long long GetFileSize() const{ return m_fileSize; }
    inline void SetFileSize(long long value) { m_fileSize = value; }
    inline GetWhatsAppMessageMediaResult& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetWhatsAppMessageMediaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetWhatsAppMessageMediaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetWhatsAppMessageMediaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mimeType;

    long long m_fileSize;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
