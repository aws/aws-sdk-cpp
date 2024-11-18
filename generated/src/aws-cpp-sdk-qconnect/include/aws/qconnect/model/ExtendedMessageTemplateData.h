/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/ChannelSubtype.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/MessageTemplateAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/MessageTemplateAttachment.h>
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
   * <p>The extended data of a message template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ExtendedMessageTemplateData">AWS
   * API Reference</a></p>
   */
  class ExtendedMessageTemplateData
  {
  public:
    AWS_QCONNECT_API ExtendedMessageTemplateData();
    AWS_QCONNECT_API ExtendedMessageTemplateData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ExtendedMessageTemplateData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message template attachments.</p>
     */
    inline const Aws::Vector<MessageTemplateAttachment>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<MessageTemplateAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<MessageTemplateAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline ExtendedMessageTemplateData& WithAttachments(const Aws::Vector<MessageTemplateAttachment>& value) { SetAttachments(value); return *this;}
    inline ExtendedMessageTemplateData& WithAttachments(Aws::Vector<MessageTemplateAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& AddAttachments(const MessageTemplateAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline ExtendedMessageTemplateData& AddAttachments(MessageTemplateAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The types of attributes contain the message template.</p>
     */
    inline const Aws::Vector<MessageTemplateAttributeType>& GetAttributeTypes() const{ return m_attributeTypes; }
    inline bool AttributeTypesHasBeenSet() const { return m_attributeTypesHasBeenSet; }
    inline void SetAttributeTypes(const Aws::Vector<MessageTemplateAttributeType>& value) { m_attributeTypesHasBeenSet = true; m_attributeTypes = value; }
    inline void SetAttributeTypes(Aws::Vector<MessageTemplateAttributeType>&& value) { m_attributeTypesHasBeenSet = true; m_attributeTypes = std::move(value); }
    inline ExtendedMessageTemplateData& WithAttributeTypes(const Aws::Vector<MessageTemplateAttributeType>& value) { SetAttributeTypes(value); return *this;}
    inline ExtendedMessageTemplateData& WithAttributeTypes(Aws::Vector<MessageTemplateAttributeType>&& value) { SetAttributeTypes(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& AddAttributeTypes(const MessageTemplateAttributeType& value) { m_attributeTypesHasBeenSet = true; m_attributeTypes.push_back(value); return *this; }
    inline ExtendedMessageTemplateData& AddAttributeTypes(MessageTemplateAttributeType&& value) { m_attributeTypesHasBeenSet = true; m_attributeTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel subtype this message template applies to.</p>
     */
    inline const ChannelSubtype& GetChannelSubtype() const{ return m_channelSubtype; }
    inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
    inline void SetChannelSubtype(const ChannelSubtype& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = value; }
    inline void SetChannelSubtype(ChannelSubtype&& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = std::move(value); }
    inline ExtendedMessageTemplateData& WithChannelSubtype(const ChannelSubtype& value) { SetChannelSubtype(value); return *this;}
    inline ExtendedMessageTemplateData& WithChannelSubtype(ChannelSubtype&& value) { SetChannelSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message template.</p>
     */
    inline const MessageTemplateContentProvider& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const MessageTemplateContentProvider& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(MessageTemplateContentProvider&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline ExtendedMessageTemplateData& WithContent(const MessageTemplateContentProvider& value) { SetContent(value); return *this;}
    inline ExtendedMessageTemplateData& WithContent(MessageTemplateContentProvider&& value) { SetContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the message template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline ExtendedMessageTemplateData& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline ExtendedMessageTemplateData& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies the default values to use for variables in the
     * message template. This object contains different categories of key-value pairs.
     * Each key defines a variable or placeholder in the message template. The
     * corresponding value defines the default value for that variable.</p>
     */
    inline const MessageTemplateAttributes& GetDefaultAttributes() const{ return m_defaultAttributes; }
    inline bool DefaultAttributesHasBeenSet() const { return m_defaultAttributesHasBeenSet; }
    inline void SetDefaultAttributes(const MessageTemplateAttributes& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes = value; }
    inline void SetDefaultAttributes(MessageTemplateAttributes&& value) { m_defaultAttributesHasBeenSet = true; m_defaultAttributes = std::move(value); }
    inline ExtendedMessageTemplateData& WithDefaultAttributes(const MessageTemplateAttributes& value) { SetDefaultAttributes(value); return *this;}
    inline ExtendedMessageTemplateData& WithDefaultAttributes(MessageTemplateAttributes&& value) { SetDefaultAttributes(std::move(value)); return *this;}
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
    inline ExtendedMessageTemplateData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ExtendedMessageTemplateData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }
    inline ExtendedMessageTemplateData& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}
    inline ExtendedMessageTemplateData& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the version of the message template is activated.</p>
     */
    inline bool GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(bool value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline ExtendedMessageTemplateData& WithIsActive(bool value) { SetIsActive(value); return *this;}
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
    inline ExtendedMessageTemplateData& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline ExtendedMessageTemplateData& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
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
    inline ExtendedMessageTemplateData& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline ExtendedMessageTemplateData& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
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
    inline ExtendedMessageTemplateData& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline ExtendedMessageTemplateData& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
    inline ExtendedMessageTemplateData& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline ExtendedMessageTemplateData& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the message template data was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ExtendedMessageTemplateData& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ExtendedMessageTemplateData& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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
    inline ExtendedMessageTemplateData& WithMessageTemplateArn(const Aws::String& value) { SetMessageTemplateArn(value); return *this;}
    inline ExtendedMessageTemplateData& WithMessageTemplateArn(Aws::String&& value) { SetMessageTemplateArn(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithMessageTemplateArn(const char* value) { SetMessageTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum value of the message template content that is referenced by the
     * <code>$LATEST</code> qualifier. It can be returned in
     * <code>MessageTemplateData</code> or <code>ExtendedMessageTemplateData</code>.
     * It’s calculated by content, language, <code>defaultAttributes</code> and
     * <code>Attachments</code> of the message template.</p>
     */
    inline const Aws::String& GetMessageTemplateContentSha256() const{ return m_messageTemplateContentSha256; }
    inline bool MessageTemplateContentSha256HasBeenSet() const { return m_messageTemplateContentSha256HasBeenSet; }
    inline void SetMessageTemplateContentSha256(const Aws::String& value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256 = value; }
    inline void SetMessageTemplateContentSha256(Aws::String&& value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256 = std::move(value); }
    inline void SetMessageTemplateContentSha256(const char* value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256.assign(value); }
    inline ExtendedMessageTemplateData& WithMessageTemplateContentSha256(const Aws::String& value) { SetMessageTemplateContentSha256(value); return *this;}
    inline ExtendedMessageTemplateData& WithMessageTemplateContentSha256(Aws::String&& value) { SetMessageTemplateContentSha256(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithMessageTemplateContentSha256(const char* value) { SetMessageTemplateContentSha256(value); return *this;}
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
    inline ExtendedMessageTemplateData& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline ExtendedMessageTemplateData& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
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
    inline ExtendedMessageTemplateData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ExtendedMessageTemplateData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ExtendedMessageTemplateData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ExtendedMessageTemplateData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ExtendedMessageTemplateData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ExtendedMessageTemplateData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ExtendedMessageTemplateData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ExtendedMessageTemplateData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ExtendedMessageTemplateData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ExtendedMessageTemplateData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ExtendedMessageTemplateData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of the message template version.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline ExtendedMessageTemplateData& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::Vector<MessageTemplateAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<MessageTemplateAttributeType> m_attributeTypes;
    bool m_attributeTypesHasBeenSet = false;

    ChannelSubtype m_channelSubtype;
    bool m_channelSubtypeHasBeenSet = false;

    MessageTemplateContentProvider m_content;
    bool m_contentHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    MessageTemplateAttributes m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;

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

    Aws::String m_messageTemplateContentSha256;
    bool m_messageTemplateContentSha256HasBeenSet = false;

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
