/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateContentProvider.h>
#include <aws/qconnect/model/MessageTemplateAttributes.h>
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
    AWS_QCONNECT_API UpdateMessageTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMessageTemplate"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


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
    UpdateMessageTemplateRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template. Can be either the ID or the ARN. It
     * cannot contain any qualifier.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const { return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    template<typename MessageTemplateIdT = Aws::String>
    void SetMessageTemplateId(MessageTemplateIdT&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::forward<MessageTemplateIdT>(value); }
    template<typename MessageTemplateIdT = Aws::String>
    UpdateMessageTemplateRequest& WithMessageTemplateId(MessageTemplateIdT&& value) { SetMessageTemplateId(std::forward<MessageTemplateIdT>(value)); return *this;}
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
    UpdateMessageTemplateRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
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
    UpdateMessageTemplateRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
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
    UpdateMessageTemplateRequest& WithDefaultAttributes(DefaultAttributesT&& value) { SetDefaultAttributes(std::forward<DefaultAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    MessageTemplateContentProvider m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    MessageTemplateAttributes m_defaultAttributes;
    bool m_defaultAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
