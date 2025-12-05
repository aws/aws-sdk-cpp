/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ChannelSubtype.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/qconnect/model/MessageTemplateSourceConfigurationSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The result of message template search.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateSearchResultData">AWS
 * API Reference</a></p>
 */
class MessageTemplateSearchResultData {
 public:
  AWS_QCONNECT_API MessageTemplateSearchResultData() = default;
  AWS_QCONNECT_API MessageTemplateSearchResultData(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MessageTemplateSearchResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the message template.</p>
   */
  inline const Aws::String& GetMessageTemplateArn() const { return m_messageTemplateArn; }
  inline bool MessageTemplateArnHasBeenSet() const { return m_messageTemplateArnHasBeenSet; }
  template <typename MessageTemplateArnT = Aws::String>
  void SetMessageTemplateArn(MessageTemplateArnT&& value) {
    m_messageTemplateArnHasBeenSet = true;
    m_messageTemplateArn = std::forward<MessageTemplateArnT>(value);
  }
  template <typename MessageTemplateArnT = Aws::String>
  MessageTemplateSearchResultData& WithMessageTemplateArn(MessageTemplateArnT&& value) {
    SetMessageTemplateArn(std::forward<MessageTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the message template.</p>
   */
  inline const Aws::String& GetMessageTemplateId() const { return m_messageTemplateId; }
  inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
  template <typename MessageTemplateIdT = Aws::String>
  void SetMessageTemplateId(MessageTemplateIdT&& value) {
    m_messageTemplateIdHasBeenSet = true;
    m_messageTemplateId = std::forward<MessageTemplateIdT>(value);
  }
  template <typename MessageTemplateIdT = Aws::String>
  MessageTemplateSearchResultData& WithMessageTemplateId(MessageTemplateIdT&& value) {
    SetMessageTemplateId(std::forward<MessageTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  MessageTemplateSearchResultData& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  MessageTemplateSearchResultData& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the message template.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MessageTemplateSearchResultData& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel of the message template.</p>
   */
  inline const Aws::String& GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  template <typename ChannelT = Aws::String>
  void SetChannel(ChannelT&& value) {
    m_channelHasBeenSet = true;
    m_channel = std::forward<ChannelT>(value);
  }
  template <typename ChannelT = Aws::String>
  MessageTemplateSearchResultData& WithChannel(ChannelT&& value) {
    SetChannel(std::forward<ChannelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel subtype this message template applies to.</p>
   */
  inline ChannelSubtype GetChannelSubtype() const { return m_channelSubtype; }
  inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
  inline void SetChannelSubtype(ChannelSubtype value) {
    m_channelSubtypeHasBeenSet = true;
    m_channelSubtype = value;
  }
  inline MessageTemplateSearchResultData& WithChannelSubtype(ChannelSubtype value) {
    SetChannelSubtype(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the message template was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  MessageTemplateSearchResultData& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the message template data was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  MessageTemplateSearchResultData& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user who last updated the message
   * template data.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  MessageTemplateSearchResultData& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the version of the message template is activated.</p>
   */
  inline bool GetIsActive() const { return m_isActive; }
  inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
  inline void SetIsActive(bool value) {
    m_isActiveHasBeenSet = true;
    m_isActive = value;
  }
  inline MessageTemplateSearchResultData& WithIsActive(bool value) {
    SetIsActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the message template version.</p>
   */
  inline long long GetVersionNumber() const { return m_versionNumber; }
  inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
  inline void SetVersionNumber(long long value) {
    m_versionNumberHasBeenSet = true;
    m_versionNumber = value;
  }
  inline MessageTemplateSearchResultData& WithVersionNumber(long long value) {
    SetVersionNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the message template.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  MessageTemplateSearchResultData& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source configuration summary of the message template.</p>
   */
  inline const MessageTemplateSourceConfigurationSummary& GetSourceConfigurationSummary() const { return m_sourceConfigurationSummary; }
  inline bool SourceConfigurationSummaryHasBeenSet() const { return m_sourceConfigurationSummaryHasBeenSet; }
  template <typename SourceConfigurationSummaryT = MessageTemplateSourceConfigurationSummary>
  void SetSourceConfigurationSummary(SourceConfigurationSummaryT&& value) {
    m_sourceConfigurationSummaryHasBeenSet = true;
    m_sourceConfigurationSummary = std::forward<SourceConfigurationSummaryT>(value);
  }
  template <typename SourceConfigurationSummaryT = MessageTemplateSourceConfigurationSummary>
  MessageTemplateSearchResultData& WithSourceConfigurationSummary(SourceConfigurationSummaryT&& value) {
    SetSourceConfigurationSummary(std::forward<SourceConfigurationSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const GroupingConfiguration& GetGroupingConfiguration() const { return m_groupingConfiguration; }
  inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
  template <typename GroupingConfigurationT = GroupingConfiguration>
  void SetGroupingConfiguration(GroupingConfigurationT&& value) {
    m_groupingConfigurationHasBeenSet = true;
    m_groupingConfiguration = std::forward<GroupingConfigurationT>(value);
  }
  template <typename GroupingConfigurationT = GroupingConfiguration>
  MessageTemplateSearchResultData& WithGroupingConfiguration(GroupingConfigurationT&& value) {
    SetGroupingConfiguration(std::forward<GroupingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language code value for the language in which the quick response is
   * written. The supported language codes include <code>de_DE</code>,
   * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
   * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
   * <code>zh_CN</code>, <code>zh_TW</code> </p>
   */
  inline const Aws::String& GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  template <typename LanguageT = Aws::String>
  void SetLanguage(LanguageT&& value) {
    m_languageHasBeenSet = true;
    m_language = std::forward<LanguageT>(value);
  }
  template <typename LanguageT = Aws::String>
  MessageTemplateSearchResultData& WithLanguage(LanguageT&& value) {
    SetLanguage(std::forward<LanguageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  MessageTemplateSearchResultData& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  MessageTemplateSearchResultData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageTemplateArn;

  Aws::String m_messageTemplateId;

  Aws::String m_knowledgeBaseArn;

  Aws::String m_knowledgeBaseId;

  Aws::String m_name;

  Aws::String m_channel;

  ChannelSubtype m_channelSubtype{ChannelSubtype::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedBy;

  bool m_isActive{false};

  long long m_versionNumber{0};

  Aws::String m_description;

  MessageTemplateSourceConfigurationSummary m_sourceConfigurationSummary;

  GroupingConfiguration m_groupingConfiguration;

  Aws::String m_language;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_messageTemplateArnHasBeenSet = false;
  bool m_messageTemplateIdHasBeenSet = false;
  bool m_knowledgeBaseArnHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_channelHasBeenSet = false;
  bool m_channelSubtypeHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_isActiveHasBeenSet = false;
  bool m_versionNumberHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceConfigurationSummaryHasBeenSet = false;
  bool m_groupingConfigurationHasBeenSet = false;
  bool m_languageHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
