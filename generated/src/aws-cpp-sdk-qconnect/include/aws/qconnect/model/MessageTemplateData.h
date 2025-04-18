/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ChannelSubtype.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/qconnect/model/MessageTemplateAttributes.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/MessageTemplateAttributeType.h>
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
   * <p>The data of a message template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateData">AWS
   * API Reference</a></p>
   */
  class MessageTemplateData
  {
  public:
    AWS_QCONNECT_API MessageTemplateData() = default;
    AWS_QCONNECT_API MessageTemplateData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateArn() const { return m_messageTemplateArn; }
    inline bool MessageTemplateArnHasBeenSet() const { return m_messageTemplateArnHasBeenSet; }
    template<typename MessageTemplateArnT = Aws::String>
    void SetMessageTemplateArn(MessageTemplateArnT&& value) { m_messageTemplateArnHasBeenSet = true; m_messageTemplateArn = std::forward<MessageTemplateArnT>(value); }
    template<typename MessageTemplateArnT = Aws::String>
    MessageTemplateData& WithMessageTemplateArn(MessageTemplateArnT&& value) { SetMessageTemplateArn(std::forward<MessageTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const { return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    template<typename MessageTemplateIdT = Aws::String>
    void SetMessageTemplateId(MessageTemplateIdT&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::forward<MessageTemplateIdT>(value); }
    template<typename MessageTemplateIdT = Aws::String>
    MessageTemplateData& WithMessageTemplateId(MessageTemplateIdT&& value) { SetMessageTemplateId(std::forward<MessageTemplateIdT>(value)); return *this;}
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
    MessageTemplateData& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    MessageTemplateData& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MessageTemplateData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel subtype this message template applies to.</p>
     */
    inline ChannelSubtype GetChannelSubtype() const { return m_channelSubtype; }
    inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
    inline void SetChannelSubtype(ChannelSubtype value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = value; }
    inline MessageTemplateData& WithChannelSubtype(ChannelSubtype value) { SetChannelSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the message template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    MessageTemplateData& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the message template data was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    MessageTemplateData& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who last updated the message
     * template data.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    MessageTemplateData& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message template.</p>
     */
    inline const MessageTemplateContentProvider& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = MessageTemplateContentProvider>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = MessageTemplateContentProvider>
    MessageTemplateData& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the message template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MessageTemplateData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    MessageTemplateData& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const GroupingConfiguration& GetGroupingConfiguration() const { return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    void SetGroupingConfiguration(GroupingConfigurationT&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::forward<GroupingConfigurationT>(value); }
    template<typename GroupingConfigurationT = GroupingConfiguration>
    MessageTemplateData& WithGroupingConfiguration(GroupingConfigurationT&& value) { SetGroupingConfiguration(std::forward<GroupingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the default values to use for variables in the
     * message template. This object contains different categories of key-value pairs.
     * Each key defines a variable or placeholder in the message template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline const MessageTemplateAttributes& GetDefaultAttributes() const { return m_defaultAttributes; }
    inline bool DefaultAttributesHasBeenSet() const { return m_defaultAttributesHasBeenSet; }
    template<typename DefaultAttributesT = MessageTemplateAttributes>
    void SetDefaultAttributes(DefaultAttributesT&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes = std::forward<DefaultAttributesT>(value); }
    template<typename DefaultAttributesT = MessageTemplateAttributes>
    MessageTemplateData& WithDefaultAttributes(DefaultAttributesT&& value) { SetDefaultAttributes(std::forward<DefaultAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of attributes that the message template contains.</p>
     */
    inline const Aws::Vector<MessageTemplateAttributeType>& GetAttributeTypes() const { return m_attributeTypes; }
    inline bool AttributeTypesHasBeenSet() const { return m_attributeTypesHasBeenSet; }
    template<typename AttributeTypesT = Aws::Vector<MessageTemplateAttributeType>>
    void SetAttributeTypes(AttributeTypesT&& value) { m_attributeTypesHasBeenSet = true; m_attributeTypes = std::forward<AttributeTypesT>(value); }
    template<typename AttributeTypesT = Aws::Vector<MessageTemplateAttributeType>>
    MessageTemplateData& WithAttributeTypes(AttributeTypesT&& value) { SetAttributeTypes(std::forward<AttributeTypesT>(value)); return *this;}
    inline MessageTemplateData& AddAttributeTypes(MessageTemplateAttributeType value) { m_attributeTypesHasBeenSet = true; m_attributeTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The checksum value of the message template content that is referenced by the
     * <code>$LATEST</code> qualifier. It can be returned in
     * <code>MessageTemplateData</code> or <code>ExtendedMessageTemplateData</code>.
     * It’s calculated by content, language, <code>defaultAttributes</code> and
     * <code>Attachments</code> of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateContentSha256() const { return m_messageTemplateContentSha256; }
    inline bool MessageTemplateContentSha256HasBeenSet() const { return m_messageTemplateContentSha256HasBeenSet; }
    template<typename MessageTemplateContentSha256T = Aws::String>
    void SetMessageTemplateContentSha256(MessageTemplateContentSha256T&& value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256 = std::forward<MessageTemplateContentSha256T>(value); }
    template<typename MessageTemplateContentSha256T = Aws::String>
    MessageTemplateData& WithMessageTemplateContentSha256(MessageTemplateContentSha256T&& value) { SetMessageTemplateContentSha256(std::forward<MessageTemplateContentSha256T>(value)); return *this;}
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
    MessageTemplateData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    MessageTemplateData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_messageTemplateArn;
    bool m_messageTemplateArnHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ChannelSubtype m_channelSubtype{ChannelSubtype::NOT_SET};
    bool m_channelSubtypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    MessageTemplateContentProvider m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    MessageTemplateAttributes m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;

    Aws::Vector<MessageTemplateAttributeType> m_attributeTypes;
    bool m_attributeTypesHasBeenSet = false;

    Aws::String m_messageTemplateContentSha256;
    bool m_messageTemplateContentSha256HasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
