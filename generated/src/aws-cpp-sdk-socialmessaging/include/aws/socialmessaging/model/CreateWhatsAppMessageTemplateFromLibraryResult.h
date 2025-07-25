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
  class CreateWhatsAppMessageTemplateFromLibraryResult
  {
  public:
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateFromLibraryResult() = default;
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateFromLibraryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateFromLibraryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The numeric ID assigned to the template by Meta.</p>
     */
    inline const Aws::String& GetMetaTemplateId() const { return m_metaTemplateId; }
    template<typename MetaTemplateIdT = Aws::String>
    void SetMetaTemplateId(MetaTemplateIdT&& value) { m_metaTemplateIdHasBeenSet = true; m_metaTemplateId = std::forward<MetaTemplateIdT>(value); }
    template<typename MetaTemplateIdT = Aws::String>
    CreateWhatsAppMessageTemplateFromLibraryResult& WithMetaTemplateId(MetaTemplateIdT&& value) { SetMetaTemplateId(std::forward<MetaTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the created template (for example, PENDING or APPROVED).</p>
     */
    inline const Aws::String& GetTemplateStatus() const { return m_templateStatus; }
    template<typename TemplateStatusT = Aws::String>
    void SetTemplateStatus(TemplateStatusT&& value) { m_templateStatusHasBeenSet = true; m_templateStatus = std::forward<TemplateStatusT>(value); }
    template<typename TemplateStatusT = Aws::String>
    CreateWhatsAppMessageTemplateFromLibraryResult& WithTemplateStatus(TemplateStatusT&& value) { SetTemplateStatus(std::forward<TemplateStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the template (for example, UTILITY or MARKETING).</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    CreateWhatsAppMessageTemplateFromLibraryResult& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWhatsAppMessageTemplateFromLibraryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metaTemplateId;
    bool m_metaTemplateIdHasBeenSet = false;

    Aws::String m_templateStatus;
    bool m_templateStatusHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
