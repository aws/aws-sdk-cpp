/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/QuickResponseStatus.h>
#include <aws/qconnect/model/QuickResponseContents.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The result of quick response search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QuickResponseSearchResultData">AWS
   * API Reference</a></p>
   */
  class QuickResponseSearchResultData
  {
  public:
    AWS_QCONNECT_API QuickResponseSearchResultData() = default;
    AWS_QCONNECT_API QuickResponseSearchResultData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QuickResponseSearchResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseArn() const { return m_quickResponseArn; }
    inline bool QuickResponseArnHasBeenSet() const { return m_quickResponseArnHasBeenSet; }
    template<typename QuickResponseArnT = Aws::String>
    void SetQuickResponseArn(QuickResponseArnT&& value) { m_quickResponseArnHasBeenSet = true; m_quickResponseArn = std::forward<QuickResponseArnT>(value); }
    template<typename QuickResponseArnT = Aws::String>
    QuickResponseSearchResultData& WithQuickResponseArn(QuickResponseArnT&& value) { SetQuickResponseArn(std::forward<QuickResponseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the quick response.</p>
     */
    inline const Aws::String& GetQuickResponseId() const { return m_quickResponseId; }
    inline bool QuickResponseIdHasBeenSet() const { return m_quickResponseIdHasBeenSet; }
    template<typename QuickResponseIdT = Aws::String>
    void SetQuickResponseId(QuickResponseIdT&& value) { m_quickResponseIdHasBeenSet = true; m_quickResponseId = std::forward<QuickResponseIdT>(value); }
    template<typename QuickResponseIdT = Aws::String>
    QuickResponseSearchResultData& WithQuickResponseId(QuickResponseIdT&& value) { SetQuickResponseId(std::forward<QuickResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    QuickResponseSearchResultData& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    QuickResponseSearchResultData& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the quick response.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QuickResponseSearchResultData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the quick response content.</p> <ul> <li> <p>Use
     * <code>application/x.quickresponse;format=plain</code> for quick response written
     * in plain text.</p> </li> <li> <p>Use
     * <code>application/x.quickresponse;format=markdown</code> for quick response
     * written in richtext.</p> </li> </ul>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    QuickResponseSearchResultData& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource status of the quick response.</p>
     */
    inline QuickResponseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QuickResponseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline QuickResponseSearchResultData& WithStatus(QuickResponseStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the quick response.</p>
     */
    inline const QuickResponseContents& GetContents() const { return m_contents; }
    inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
    template<typename ContentsT = QuickResponseContents>
    void SetContents(ContentsT&& value) { m_contentsHasBeenSet = true; m_contents = std::forward<ContentsT>(value); }
    template<typename ContentsT = QuickResponseContents>
    QuickResponseSearchResultData& WithContents(ContentsT&& value) { SetContents(std::forward<ContentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the quick response was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    QuickResponseSearchResultData& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the quick response search result data was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    QuickResponseSearchResultData& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the quick response is active.</p>
     */
    inline bool GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline QuickResponseSearchResultData& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the quick response.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    QuickResponseSearchResultData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information of the user groups that the quick response is
     * accessible to.</p>
     */
    inline const GroupingConfiguration& GetGroupingConfiguration() const { return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    void SetGroupingConfiguration(GroupingConfigurationT&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::forward<GroupingConfigurationT>(value); }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    QuickResponseSearchResultData& WithGroupingConfiguration(GroupingConfigurationT&& value) { SetGroupingConfiguration(std::forward<GroupingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shortcut key of the quick response. The value should be unique across the
     * knowledge base.</p>
     */
    inline const Aws::String& GetShortcutKey() const { return m_shortcutKey; }
    inline bool ShortcutKeyHasBeenSet() const { return m_shortcutKeyHasBeenSet; }
    template<typename ShortcutKeyT = Aws::String>
    void SetShortcutKey(ShortcutKeyT&& value) { m_shortcutKeyHasBeenSet = true; m_shortcutKey = std::forward<ShortcutKeyT>(value); }
    template<typename ShortcutKeyT = Aws::String>
    QuickResponseSearchResultData& WithShortcutKey(ShortcutKeyT&& value) { SetShortcutKey(std::forward<ShortcutKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the quick
     * response search result data.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    QuickResponseSearchResultData& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Connect contact channels this quick response applies to. The
     * supported contact channel types include <code>Chat</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChannels() const { return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    template<typename ChannelsT = Aws::Vector<Aws::String>>
    void SetChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels = std::forward<ChannelsT>(value); }
    template<typename ChannelsT = Aws::Vector<Aws::String>>
    QuickResponseSearchResultData& WithChannels(ChannelsT&& value) { SetChannels(std::forward<ChannelsT>(value)); return *this;}
    template<typename ChannelsT = Aws::String>
    QuickResponseSearchResultData& AddChannels(ChannelsT&& value) { m_channelsHasBeenSet = true; m_channels.emplace_back(std::forward<ChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language code value for the language in which the quick response is
     * written.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    QuickResponseSearchResultData& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user defined contact attributes that are not resolved when the search
     * result is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesNotInterpolated() const { return m_attributesNotInterpolated; }
    inline bool AttributesNotInterpolatedHasBeenSet() const { return m_attributesNotInterpolatedHasBeenSet; }
    template<typename AttributesNotInterpolatedT = Aws::Vector<Aws::String>>
    void SetAttributesNotInterpolated(AttributesNotInterpolatedT&& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated = std::forward<AttributesNotInterpolatedT>(value); }
    template<typename AttributesNotInterpolatedT = Aws::Vector<Aws::String>>
    QuickResponseSearchResultData& WithAttributesNotInterpolated(AttributesNotInterpolatedT&& value) { SetAttributesNotInterpolated(std::forward<AttributesNotInterpolatedT>(value)); return *this;}
    template<typename AttributesNotInterpolatedT = Aws::String>
    QuickResponseSearchResultData& AddAttributesNotInterpolated(AttributesNotInterpolatedT&& value) { m_attributesNotInterpolatedHasBeenSet = true; m_attributesNotInterpolated.emplace_back(std::forward<AttributesNotInterpolatedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user defined contact attributes that are resolved when the search result
     * is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesInterpolated() const { return m_attributesInterpolated; }
    inline bool AttributesInterpolatedHasBeenSet() const { return m_attributesInterpolatedHasBeenSet; }
    template<typename AttributesInterpolatedT = Aws::Vector<Aws::String>>
    void SetAttributesInterpolated(AttributesInterpolatedT&& value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated = std::forward<AttributesInterpolatedT>(value); }
    template<typename AttributesInterpolatedT = Aws::Vector<Aws::String>>
    QuickResponseSearchResultData& WithAttributesInterpolated(AttributesInterpolatedT&& value) { SetAttributesInterpolated(std::forward<AttributesInterpolatedT>(value)); return *this;}
    template<typename AttributesInterpolatedT = Aws::String>
    QuickResponseSearchResultData& AddAttributesInterpolated(AttributesInterpolatedT&& value) { m_attributesInterpolatedHasBeenSet = true; m_attributesInterpolated.emplace_back(std::forward<AttributesInterpolatedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    QuickResponseSearchResultData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    QuickResponseSearchResultData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_quickResponseArn;
    bool m_quickResponseArnHasBeenSet = false;

    Aws::String m_quickResponseId;
    bool m_quickResponseIdHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    QuickResponseStatus m_status{QuickResponseStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    QuickResponseContents m_contents;
    bool m_contentsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    bool m_isActive{false};
    bool m_isActiveHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    Aws::String m_shortcutKey;
    bool m_shortcutKeyHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Vector<Aws::String> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesNotInterpolated;
    bool m_attributesNotInterpolatedHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesInterpolated;
    bool m_attributesInterpolatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
