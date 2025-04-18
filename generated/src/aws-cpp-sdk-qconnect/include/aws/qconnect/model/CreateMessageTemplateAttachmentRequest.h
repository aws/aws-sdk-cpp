/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentDisposition.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class CreateMessageTemplateAttachmentRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateMessageTemplateAttachmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMessageTemplateAttachment"; }

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
    CreateMessageTemplateAttachmentRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
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
    CreateMessageTemplateAttachmentRequest& WithMessageTemplateId(MessageTemplateIdT&& value) { SetMessageTemplateId(std::forward<MessageTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presentation information for the attachment file.</p>
     */
    inline ContentDisposition GetContentDisposition() const { return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    inline void SetContentDisposition(ContentDisposition value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }
    inline CreateMessageTemplateAttachmentRequest& WithContentDisposition(ContentDisposition value) { SetContentDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attachment file being uploaded. The name should include the
     * file extension.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateMessageTemplateAttachmentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMessageTemplateAttachmentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the attachment file being uploaded. It should be encoded using
     * base64 encoding.</p>
     */
    inline const Aws::String& GetRequestBody() const { return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    template<typename RequestBodyT = Aws::String>
    void SetRequestBody(RequestBodyT&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::forward<RequestBodyT>(value); }
    template<typename RequestBodyT = Aws::String>
    CreateMessageTemplateAttachmentRequest& WithRequestBody(RequestBodyT&& value) { SetRequestBody(std::forward<RequestBodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    ContentDisposition m_contentDisposition{ContentDisposition::NOT_SET};
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
