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
    AWS_QCONNECT_API CreateMessageTemplateVersionRequest() = default;

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
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    CreateMessageTemplateVersionRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
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
    CreateMessageTemplateVersionRequest& WithMessageTemplateId(MessageTemplateIdT&& value) { SetMessageTemplateId(std::forward<MessageTemplateIdT>(value)); return *this;}
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
    inline const Aws::String& GetMessageTemplateContentSha256() const { return m_messageTemplateContentSha256; }
    inline bool MessageTemplateContentSha256HasBeenSet() const { return m_messageTemplateContentSha256HasBeenSet; }
    template<typename MessageTemplateContentSha256T = Aws::String>
    void SetMessageTemplateContentSha256(MessageTemplateContentSha256T&& value) { m_messageTemplateContentSha256HasBeenSet = true; m_messageTemplateContentSha256 = std::forward<MessageTemplateContentSha256T>(value); }
    template<typename MessageTemplateContentSha256T = Aws::String>
    CreateMessageTemplateVersionRequest& WithMessageTemplateContentSha256(MessageTemplateContentSha256T&& value) { SetMessageTemplateContentSha256(std::forward<MessageTemplateContentSha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    Aws::String m_messageTemplateContentSha256;
    bool m_messageTemplateContentSha256HasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
