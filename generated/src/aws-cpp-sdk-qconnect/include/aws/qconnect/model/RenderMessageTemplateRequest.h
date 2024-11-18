/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
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
  class RenderMessageTemplateRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API RenderMessageTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenderMessageTemplate"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An object that specifies the values to use for variables in the message
     * template. This object contains different categories of key-value pairs. Each key
     * defines a variable or placeholder in the message template. The corresponding
     * value defines the value for that variable.</p>
     */
    inline const MessageTemplateAttributes& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const MessageTemplateAttributes& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(MessageTemplateAttributes&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline RenderMessageTemplateRequest& WithAttributes(const MessageTemplateAttributes& value) { SetAttributes(value); return *this;}
    inline RenderMessageTemplateRequest& WithAttributes(MessageTemplateAttributes&& value) { SetAttributes(std::move(value)); return *this;}
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
    inline RenderMessageTemplateRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline RenderMessageTemplateRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline RenderMessageTemplateRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template. Can be either the ID or the ARN.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId.assign(value); }
    inline RenderMessageTemplateRequest& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline RenderMessageTemplateRequest& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline RenderMessageTemplateRequest& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}
  private:

    MessageTemplateAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
