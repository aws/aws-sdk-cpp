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
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaResult() = default;
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API PostWhatsAppMessageMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the posted WhatsApp message.</p>
     */
    inline const Aws::String& GetMediaId() const { return m_mediaId; }
    template<typename MediaIdT = Aws::String>
    void SetMediaId(MediaIdT&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::forward<MediaIdT>(value); }
    template<typename MediaIdT = Aws::String>
    PostWhatsAppMessageMediaResult& WithMediaId(MediaIdT&& value) { SetMediaId(std::forward<MediaIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PostWhatsAppMessageMediaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
