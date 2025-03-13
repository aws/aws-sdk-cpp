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
    AWS_PINPOINT_API InAppTemplateResponse() = default;
    AWS_PINPOINT_API InAppTemplateResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppTemplateResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource arn of the template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    InAppTemplateResponse& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message, can include up to 5 modals. Each modal must
     * contain a message, a header, and background color. ImageUrl and buttons are
     * optional.</p>
     */
    inline const Aws::Vector<InAppMessageContent>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Vector<InAppMessageContent>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Vector<InAppMessageContent>>
    InAppTemplateResponse& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentT = InAppMessageContent>
    InAppTemplateResponse& AddContent(ContentT&& value) { m_contentHasBeenSet = true; m_content.emplace_back(std::forward<ContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the template.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    InAppTemplateResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom config to be sent to client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomConfig() const { return m_customConfig; }
    inline bool CustomConfigHasBeenSet() const { return m_customConfigHasBeenSet; }
    template<typename CustomConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomConfig(CustomConfigT&& value) { m_customConfigHasBeenSet = true; m_customConfig = std::forward<CustomConfigT>(value); }
    template<typename CustomConfigT = Aws::Map<Aws::String, Aws::String>>
    InAppTemplateResponse& WithCustomConfig(CustomConfigT&& value) { SetCustomConfig(std::forward<CustomConfigT>(value)); return *this;}
    template<typename CustomConfigKeyT = Aws::String, typename CustomConfigValueT = Aws::String>
    InAppTemplateResponse& AddCustomConfig(CustomConfigKeyT&& key, CustomConfigValueT&& value) {
      m_customConfigHasBeenSet = true; m_customConfig.emplace(std::forward<CustomConfigKeyT>(key), std::forward<CustomConfigValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The last modified date of the template.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    InAppTemplateResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layout of the message.</p>
     */
    inline Layout GetLayout() const { return m_layout; }
    inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
    inline void SetLayout(Layout value) { m_layoutHasBeenSet = true; m_layout = value; }
    inline InAppTemplateResponse& WithLayout(Layout value) { SetLayout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the message template. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    InAppTemplateResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    InAppTemplateResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The description of the template.</p>
     */
    inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
    inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
    template<typename TemplateDescriptionT = Aws::String>
    void SetTemplateDescription(TemplateDescriptionT&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = std::forward<TemplateDescriptionT>(value); }
    template<typename TemplateDescriptionT = Aws::String>
    InAppTemplateResponse& WithTemplateDescription(TemplateDescriptionT&& value) { SetTemplateDescription(std::forward<TemplateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    InAppTemplateResponse& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the template.</p>
     */
    inline TemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(TemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline InAppTemplateResponse& WithTemplateType(TemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version id of the template.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    InAppTemplateResponse& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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

    Layout m_layout{Layout::NOT_SET};
    bool m_layoutHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType{TemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
