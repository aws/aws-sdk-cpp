/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class DeleteWhatsAppMessageTemplateRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API DeleteWhatsAppMessageTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWhatsAppMessageTemplate"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

    AWS_SOCIALMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The numeric ID of the template assigned by Meta.</p>
     */
    inline const Aws::String& GetMetaTemplateId() const { return m_metaTemplateId; }
    inline bool MetaTemplateIdHasBeenSet() const { return m_metaTemplateIdHasBeenSet; }
    template<typename MetaTemplateIdT = Aws::String>
    void SetMetaTemplateId(MetaTemplateIdT&& value) { m_metaTemplateIdHasBeenSet = true; m_metaTemplateId = std::forward<MetaTemplateIdT>(value); }
    template<typename MetaTemplateIdT = Aws::String>
    DeleteWhatsAppMessageTemplateRequest& WithMetaTemplateId(MetaTemplateIdT&& value) { SetMetaTemplateId(std::forward<MetaTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, deletes all language versions of the template.</p>
     */
    inline bool GetDeleteAllLanguages() const { return m_deleteAllLanguages; }
    inline bool DeleteAllLanguagesHasBeenSet() const { return m_deleteAllLanguagesHasBeenSet; }
    inline void SetDeleteAllLanguages(bool value) { m_deleteAllLanguagesHasBeenSet = true; m_deleteAllLanguages = value; }
    inline DeleteWhatsAppMessageTemplateRequest& WithDeleteAllLanguages(bool value) { SetDeleteAllLanguages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the WhatsApp Business Account associated with this template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteWhatsAppMessageTemplateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template to delete.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    DeleteWhatsAppMessageTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metaTemplateId;
    bool m_metaTemplateIdHasBeenSet = false;

    bool m_deleteAllLanguages{false};
    bool m_deleteAllLanguagesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
