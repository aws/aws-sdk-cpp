/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class UpdateWhatsAppMessageTemplateRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API UpdateWhatsAppMessageTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWhatsAppMessageTemplate"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the WhatsApp Business Account associated with this template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateWhatsAppMessageTemplateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric ID of the template assigned by Meta.</p>
     */
    inline const Aws::String& GetMetaTemplateId() const { return m_metaTemplateId; }
    inline bool MetaTemplateIdHasBeenSet() const { return m_metaTemplateIdHasBeenSet; }
    template<typename MetaTemplateIdT = Aws::String>
    void SetMetaTemplateId(MetaTemplateIdT&& value) { m_metaTemplateIdHasBeenSet = true; m_metaTemplateId = std::forward<MetaTemplateIdT>(value); }
    template<typename MetaTemplateIdT = Aws::String>
    UpdateWhatsAppMessageTemplateRequest& WithMetaTemplateId(MetaTemplateIdT&& value) { SetMetaTemplateId(std::forward<MetaTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new category for the template (for example, UTILITY or MARKETING).</p>
     */
    inline const Aws::String& GetTemplateCategory() const { return m_templateCategory; }
    inline bool TemplateCategoryHasBeenSet() const { return m_templateCategoryHasBeenSet; }
    template<typename TemplateCategoryT = Aws::String>
    void SetTemplateCategory(TemplateCategoryT&& value) { m_templateCategoryHasBeenSet = true; m_templateCategory = std::forward<TemplateCategoryT>(value); }
    template<typename TemplateCategoryT = Aws::String>
    UpdateWhatsAppMessageTemplateRequest& WithTemplateCategory(TemplateCategoryT&& value) { SetTemplateCategory(std::forward<TemplateCategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated components of the template as a JSON blob (maximum 3000
     * characters).</p>
     */
    inline const Aws::Utils::ByteBuffer& GetTemplateComponents() const { return m_templateComponents; }
    inline bool TemplateComponentsHasBeenSet() const { return m_templateComponentsHasBeenSet; }
    template<typename TemplateComponentsT = Aws::Utils::ByteBuffer>
    void SetTemplateComponents(TemplateComponentsT&& value) { m_templateComponentsHasBeenSet = true; m_templateComponents = std::forward<TemplateComponentsT>(value); }
    template<typename TemplateComponentsT = Aws::Utils::ByteBuffer>
    UpdateWhatsAppMessageTemplateRequest& WithTemplateComponents(TemplateComponentsT&& value) { SetTemplateComponents(std::forward<TemplateComponentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_metaTemplateId;
    bool m_metaTemplateIdHasBeenSet = false;

    Aws::String m_templateCategory;
    bool m_templateCategoryHasBeenSet = false;

    Aws::Utils::ByteBuffer m_templateComponents{};
    bool m_templateComponentsHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
