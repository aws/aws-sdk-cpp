/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class CreateWhatsAppMessageTemplateRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatsAppMessageTemplate"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The complete template definition as a JSON blob.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetTemplateDefinition() const { return m_templateDefinition; }
    inline bool TemplateDefinitionHasBeenSet() const { return m_templateDefinitionHasBeenSet; }
    template<typename TemplateDefinitionT = Aws::Utils::ByteBuffer>
    void SetTemplateDefinition(TemplateDefinitionT&& value) { m_templateDefinitionHasBeenSet = true; m_templateDefinition = std::forward<TemplateDefinitionT>(value); }
    template<typename TemplateDefinitionT = Aws::Utils::ByteBuffer>
    CreateWhatsAppMessageTemplateRequest& WithTemplateDefinition(TemplateDefinitionT&& value) { SetTemplateDefinition(std::forward<TemplateDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the WhatsApp Business Account to associate with this template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateWhatsAppMessageTemplateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_templateDefinition{};
    bool m_templateDefinitionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
