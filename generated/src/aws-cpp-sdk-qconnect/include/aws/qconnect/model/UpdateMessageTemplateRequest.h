/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/qconnect/model/MessageTemplateAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateMessageTemplateRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateMessageTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMessageTemplate"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The content of the message template.</p>
     */
    inline const MessageTemplateContentProvider& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const MessageTemplateContentProvider& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(MessageTemplateContentProvider&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline UpdateMessageTemplateRequest& WithContent(const MessageTemplateContentProvider& value) { SetContent(value); return *this;}
    inline UpdateMessageTemplateRequest& WithContent(MessageTemplateContentProvider&& value) { SetContent(std::move(value)); return *this;}
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
    inline UpdateMessageTemplateRequest& WithDefaultAttributes(const MessageTemplateAttributes& value) { SetDefaultAttributes(value); return *this;}
    inline UpdateMessageTemplateRequest& WithDefaultAttributes(MessageTemplateAttributes&& value) { SetDefaultAttributes(std::move(value)); return *this;}
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
    inline UpdateMessageTemplateRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline UpdateMessageTemplateRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline UpdateMessageTemplateRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
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
    inline UpdateMessageTemplateRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline UpdateMessageTemplateRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline UpdateMessageTemplateRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template. Can be either the ID or the ARN. It
     * cannot contain any qualifier.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId.assign(value); }
    inline UpdateMessageTemplateRequest& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline UpdateMessageTemplateRequest& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline UpdateMessageTemplateRequest& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}
  private:

    MessageTemplateContentProvider m_content;
    bool m_contentHasBeenSet = false;

    MessageTemplateAttributes m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
