/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/Layout.h>
#include <aws/pinpoint/model/TemplateType.h>
#include <aws/pinpoint/model/InAppMessageContent.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>In-App Template Response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppTemplateResponse">AWS
   * API Reference</a></p>
   */
  class InAppTemplateResponse
  {
  public:
    AWS_PINPOINT_API InAppTemplateResponse();
    AWS_PINPOINT_API InAppTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource arn of the template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline InAppTemplateResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline InAppTemplateResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline InAppTemplateResponse& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline const Aws::Vector<InAppMessageContent>& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::Vector<InAppMessageContent>& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::Vector<InAppMessageContent>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline InAppTemplateResponse& WithContent(const Aws::Vector<InAppMessageContent>& value) { SetContent(value); return *this;}
    inline InAppTemplateResponse& WithContent(Aws::Vector<InAppMessageContent>&& value) { SetContent(std::move(value)); return *this;}
    inline InAppTemplateResponse& AddContent(const InAppMessageContent& value) { m_contentHasBeenSet = true; m_content.push_back(value); return *this; }
    inline InAppTemplateResponse& AddContent(InAppMessageContent&& value) { m_contentHasBeenSet = true; m_content.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the template.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline InAppTemplateResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline InAppTemplateResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline InAppTemplateResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomConfig() const{ return m_customConfig; }
    inline bool CustomConfigHasBeenSet() const { return m_customConfigHasBeenSet; }
    inline void SetCustomConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_customConfigHasBeenSet = true; m_customConfig = value; }
    inline void SetCustomConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_customConfigHasBeenSet = true; m_customConfig = std::move(value); }
    inline InAppTemplateResponse& WithCustomConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomConfig(value); return *this;}
    inline InAppTemplateResponse& WithCustomConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomConfig(std::move(value)); return *this;}
    inline InAppTemplateResponse& AddCustomConfig(const Aws::String& key, const Aws::String& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, value); return *this; }
    inline InAppTemplateResponse& AddCustomConfig(Aws::String&& key, const Aws::String& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), value); return *this; }
    inline InAppTemplateResponse& AddCustomConfig(const Aws::String& key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, std::move(value)); return *this; }
    inline InAppTemplateResponse& AddCustomConfig(Aws::String&& key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), std::move(value)); return *this; }
    inline InAppTemplateResponse& AddCustomConfig(const char* key, Aws::String&& value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, std::move(value)); return *this; }
    inline InAppTemplateResponse& AddCustomConfig(Aws::String&& key, const char* value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(std::move(key), value); return *this; }
    inline InAppTemplateResponse& AddCustomConfig(const char* key, const char* value) { m_customConfigHasBeenSet = true; m_customConfig.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last modified date of the template.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline InAppTemplateResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline InAppTemplateResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline InAppTemplateResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layout of the message.</p>
     */
    inline const Layout& GetLayout() const{ return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    inline void SetLayout(const Layout& value) { m_layoutHasBeenSet = true; m_layout = value; }
    inline void SetLayout(Layout&& value) { m_layoutHasBeenSet = true; m_layout = std::move(value); }
    inline InAppTemplateResponse& WithLayout(const Layout& value) { SetLayout(value); return *this;}
    inline InAppTemplateResponse& WithLayout(Layout&& value) { SetLayout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline InAppTemplateResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline InAppTemplateResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline InAppTemplateResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline InAppTemplateResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InAppTemplateResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InAppTemplateResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline InAppTemplateResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline InAppTemplateResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline InAppTemplateResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::move(value); }
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }
    inline InAppTemplateResponse& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}
    inline InAppTemplateResponse& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(std::move(value)); return *this;}
    inline InAppTemplateResponse& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline InAppTemplateResponse& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline InAppTemplateResponse& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline InAppTemplateResponse& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the template.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline InAppTemplateResponse& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}
    inline InAppTemplateResponse& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version id of the template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline InAppTemplateResponse& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline InAppTemplateResponse& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline InAppTemplateResponse& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<InAppMessageContent> m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customConfig;
    bool m_customConfigHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Layout m_layout;
    bool m_layoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
