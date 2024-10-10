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
  class PostWhatsAppMessageMediaResult
  {
  public:
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaResult();
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the posted WhatsApp message.</p>
     */
    inline const Aws::String& GetMediaId() const{ return m_mediaId; }
    inline void SetMediaId(const Aws::String& value) { m_mediaId = value; }
    inline void SetMediaId(Aws::String&& value) { m_mediaId = std::move(value); }
    inline void SetMediaId(const char* value) { m_mediaId.assign(value); }
    inline PostWhatsAppMessageMediaResult& WithMediaId(const Aws::String& value) { SetMediaId(value); return *this;}
    inline PostWhatsAppMessageMediaResult& WithMediaId(Aws::String&& value) { SetMediaId(std::move(value)); return *this;}
    inline PostWhatsAppMessageMediaResult& WithMediaId(const char* value) { SetMediaId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PostWhatsAppMessageMediaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PostWhatsAppMessageMediaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PostWhatsAppMessageMediaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
