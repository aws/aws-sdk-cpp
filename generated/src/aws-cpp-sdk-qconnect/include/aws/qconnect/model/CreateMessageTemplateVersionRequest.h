/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
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
  class CreateMessageTemplateVersionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateMessageTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMessageTemplateVersion"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


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
    inline CreateMessageTemplateVersionRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline CreateMessageTemplateVersionRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline CreateMessageTemplateVersionRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum value of the message template content that is referenced by the
     * <code>$LATEST</code> qualifier. It can be returned in
     * <code>MessageTemplateData</code> or <code>ExtendedMessageTemplateData</code>.
     * It’s calculated by content, language, <code>defaultAttributes</code> and
     * <code>Attachments</code> of the message template. If not supplied, the message
     * template version will be created based on the message template content that is
     * referenced by the <code>$LATEST</code> qualifier by default.</p>
     */
    inline const Aws::String& GetMessageTemplateContentSha256() const{ return m_messageTemplateContentSha256; }
    inline bool MessageTemplateContentSha256HasBeenSet() const { return m_messageTemplateContentSha256HasBeenSet; }
    inline void SetMessageTemplateContentSha256(const Aws::String& value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256 = value; }
    inline void SetMessageTemplateContentSha256(Aws::String&& value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256 = std::move(value); }
    inline void SetMessageTemplateContentSha256(const char* value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256.assign(value); }
    inline CreateMessageTemplateVersionRequest& WithMessageTemplateContentSha256(const Aws::String& value) { SetMessageTemplateContentSha256(value); return *this;}
    inline CreateMessageTemplateVersionRequest& WithMessageTemplateContentSha256(Aws::String&& value) { SetMessageTemplateContentSha256(std::move(value)); return *this;}
    inline CreateMessageTemplateVersionRequest& WithMessageTemplateContentSha256(const char* value) { SetMessageTemplateContentSha256(value); return *this;}
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
    inline CreateMessageTemplateVersionRequest& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline CreateMessageTemplateVersionRequest& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline CreateMessageTemplateVersionRequest& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateContentSha256;
    bool m_messageTemplateContentSha256HasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
