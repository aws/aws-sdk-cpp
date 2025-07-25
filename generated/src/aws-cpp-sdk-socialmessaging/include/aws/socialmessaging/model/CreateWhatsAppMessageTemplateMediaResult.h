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
  class CreateWhatsAppMessageTemplateMediaResult
  {
  public:
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateMediaResult() = default;
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateMediaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateMediaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The handle assigned to the uploaded media by Meta, used to reference the
     * media in templates.</p>
     */
    inline const Aws::String& GetMetaHeaderHandle() const { return m_metaHeaderHandle; }
    template<typename MetaHeaderHandleT = Aws::String>
    void SetMetaHeaderHandle(MetaHeaderHandleT&& value) { m_metaHeaderHandleHasBeenSet = true; m_metaHeaderHandle = std::forward<MetaHeaderHandleT>(value); }
    template<typename MetaHeaderHandleT = Aws::String>
    CreateWhatsAppMessageTemplateMediaResult& WithMetaHeaderHandle(MetaHeaderHandleT&& value) { SetMetaHeaderHandle(std::forward<MetaHeaderHandleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWhatsAppMessageTemplateMediaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metaHeaderHandle;
    bool m_metaHeaderHandleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
