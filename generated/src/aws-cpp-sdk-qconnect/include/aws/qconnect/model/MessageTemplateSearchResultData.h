/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ChannelSubtype.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
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
   * <p>The result of message template search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateSearchResultData">AWS
   * API Reference</a></p>
   */
  class MessageTemplateSearchResultData
  {
  public:
    AWS_QCONNECT_API MessageTemplateSearchResultData();
    AWS_QCONNECT_API MessageTemplateSearchResultData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateSearchResultData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The channel subtype this message template applies to.</p>
     */
    inline const ChannelSubtype& GetChannelSubtype() const{ return m_channelSubtype; }
    inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
    inline void SetChannelSubtype(const ChannelSubtype& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = value; }
    inline void SetChannelSubtype(ChannelSubtype&& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = std::move(value); }
    inline MessageTemplateSearchResultData& WithChannelSubtype(const ChannelSubtype& value) { SetChannelSubtype(value); return *this;}
    inline MessageTemplateSearchResultData& WithChannelSubtype(ChannelSubtype&& value) { SetChannelSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the message template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline MessageTemplateSearchResultData& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline MessageTemplateSearchResultData& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the message template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MessageTemplateSearchResultData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MessageTemplateSearchResultData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }
    inline MessageTemplateSearchResultData& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}
    inline MessageTemplateSearchResultData& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the version of the message template is activated.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline MessageTemplateSearchResultData& WithIsActive(bool value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline MessageTemplateSearchResultData& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline MessageTemplateSearchResultData& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline MessageTemplateSearchResultData& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline MessageTemplateSearchResultData& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code value for the language in which the quick response is
     * written. The supported language codes include <code>de_DE</code>,
     * <code>en_US</code>, <code>es_ES</code>, <code>fr_FR</code>, <code>id_ID</code>,
     * <code>it_IT</code>, <code>ja_JP</code>, <code>ko_KR</code>, <code>pt_BR</code>,
     * <code>zh_CN</code>, <code>zh_TW</code> </p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline MessageTemplateSearchResultData& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline MessageTemplateSearchResultData& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the message
     * template data.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline MessageTemplateSearchResultData& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline MessageTemplateSearchResultData& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the message template data was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline MessageTemplateSearchResultData& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline MessageTemplateSearchResultData& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateArn() const{ return m_messageTemplateArn; }
    inline bool MessageTemplateArnHasBeenSet() const { return m_messageTemplateArnHasBeenSet; }
    inline void SetMessageTemplateArn(const Aws::String& value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn = value; }
    inline void SetMessageTemplateArn(Aws::String&& value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn = std::move(value); }
    inline void SetMessageTemplateArn(const char* value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn.assign(value); }
    inline MessageTemplateSearchResultData& WithMessageTemplateArn(const Aws::String& value) { SetMessageTemplateArn(value); return *this;}
    inline MessageTemplateSearchResultData& WithMessageTemplateArn(Aws::String&& value) { SetMessageTemplateArn(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithMessageTemplateArn(const char* value) { SetMessageTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId.assign(value); }
    inline MessageTemplateSearchResultData& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline MessageTemplateSearchResultData& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MessageTemplateSearchResultData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MessageTemplateSearchResultData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline MessageTemplateSearchResultData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline MessageTemplateSearchResultData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline MessageTemplateSearchResultData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline MessageTemplateSearchResultData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MessageTemplateSearchResultData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MessageTemplateSearchResultData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline MessageTemplateSearchResultData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline MessageTemplateSearchResultData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline MessageTemplateSearchResultData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the message template version.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline MessageTemplateSearchResultData& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    ChannelSubtype m_channelSubtype;
    bool m_channelSubtypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    bool m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_messageTemplateArn;
    bool m_messageTemplateArnHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
