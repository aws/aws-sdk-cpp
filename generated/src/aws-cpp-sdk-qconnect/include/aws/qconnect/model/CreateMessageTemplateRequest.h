/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/model/ChannelSubtype.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/qconnect/model/MessageTemplateAttributes.h>
#include <aws/qconnect/model/GroupingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class CreateMessageTemplateRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateMessageTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMessageTemplate"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The channel subtype this message template applies to.</p>
     */
    inline const ChannelSubtype& GetChannelSubtype() const{ return m_channelSubtype; }
    inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
    inline void SetChannelSubtype(const ChannelSubtype& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = value; }
    inline void SetChannelSubtype(ChannelSubtype&& value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = std::move(value); }
    inline CreateMessageTemplateRequest& WithChannelSubtype(const ChannelSubtype& value) { SetChannelSubtype(value); return *this;}
    inline CreateMessageTemplateRequest& WithChannelSubtype(ChannelSubtype&& value) { SetChannelSubtype(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateMessageTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMessageTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMessageTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the message template.</p>
     */
    inline const MessageTemplateContentProvider& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const MessageTemplateContentProvider& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(MessageTemplateContentProvider&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline CreateMessageTemplateRequest& WithContent(const MessageTemplateContentProvider& value) { SetContent(value); return *this;}
    inline CreateMessageTemplateRequest& WithContent(MessageTemplateContentProvider&& value) { SetContent(std::move(value)); return *this;}
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
    inline CreateMessageTemplateRequest& WithDefaultAttributes(const MessageTemplateAttributes& value) { SetDefaultAttributes(value); return *this;}
    inline CreateMessageTemplateRequest& WithDefaultAttributes(MessageTemplateAttributes&& value) { SetDefaultAttributes(std::move(value)); return *this;}
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
    inline CreateMessageTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMessageTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMessageTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const GroupingConfiguration& GetGroupingConfiguration() const{ return m_groupingConfiguration; }
    inline bool GroupingConfigurationHasBeenSet() const { return m_groupingConfigurationHasBeenSet; }
    inline void SetGroupingConfiguration(const GroupingConfiguration& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = value; }
    inline void SetGroupingConfiguration(GroupingConfiguration&& value) { m_groupingConfigurationHasBeenSet = true; m_groupingConfiguration = std::move(value); }
    inline CreateMessageTemplateRequest& WithGroupingConfiguration(const GroupingConfiguration& value) { SetGroupingConfiguration(value); return *this;}
    inline CreateMessageTemplateRequest& WithGroupingConfiguration(GroupingConfiguration&& value) { SetGroupingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline CreateMessageTemplateRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline CreateMessageTemplateRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline CreateMessageTemplateRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
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
    inline CreateMessageTemplateRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline CreateMessageTemplateRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline CreateMessageTemplateRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
    inline CreateMessageTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateMessageTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateMessageTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMessageTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateMessageTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMessageTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateMessageTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMessageTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMessageTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMessageTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMessageTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMessageTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    ChannelSubtype m_channelSubtype;
    bool m_channelSubtypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    MessageTemplateContentProvider m_content;
    bool m_contentHasBeenSet = false;

    MessageTemplateAttributes m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    GroupingConfiguration m_groupingConfiguration;
    bool m_groupingConfigurationHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
