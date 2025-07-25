/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/model/MetaLibraryTemplate.h>
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
  class CreateWhatsAppMessageTemplateFromLibraryRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API CreateWhatsAppMessageTemplateFromLibraryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWhatsAppMessageTemplateFromLibrary"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The template configuration from Meta's library, including customizations for
     * buttons and body text.</p>
     */
    inline const MetaLibraryTemplate& GetMetaLibraryTemplate() const { return m_metaLibraryTemplate; }
    inline bool MetaLibraryTemplateHasBeenSet() const { return m_metaLibraryTemplateHasBeenSet; }
    template<typename MetaLibraryTemplateT = MetaLibraryTemplate>
    void SetMetaLibraryTemplate(MetaLibraryTemplateT&& value) { m_metaLibraryTemplateHasBeenSet = true; m_metaLibraryTemplate = std::forward<MetaLibraryTemplateT>(value); }
    template<typename MetaLibraryTemplateT = MetaLibraryTemplate>
    CreateWhatsAppMessageTemplateFromLibraryRequest& WithMetaLibraryTemplate(MetaLibraryTemplateT&& value) { SetMetaLibraryTemplate(std::forward<MetaLibraryTemplateT>(value)); return *this;}
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
    CreateWhatsAppMessageTemplateFromLibraryRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    MetaLibraryTemplate m_metaLibraryTemplate;
    bool m_metaLibraryTemplateHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
