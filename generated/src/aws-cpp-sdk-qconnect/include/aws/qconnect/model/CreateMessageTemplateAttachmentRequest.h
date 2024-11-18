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
    AWS_QCONNECT_API CreateMessageTemplateAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMessageTemplateAttachment"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


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
    inline CreateMessageTemplateAttachmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presentation information for the attachment file.</p>
     */
    inline const ContentDisposition& GetContentDisposition() const{ return m_contentDisposition; }
    inline bool ContentDispositionHasBeenSet() const { return m_contentDispositionHasBeenSet; }
    inline void SetContentDisposition(const ContentDisposition& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = value; }
    inline void SetContentDisposition(ContentDisposition&& value) { m_contentDispositionHasBeenSet = true; m_contentDisposition = std::move(value); }
    inline CreateMessageTemplateAttachmentRequest& WithContentDisposition(const ContentDisposition& value) { SetContentDisposition(value); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithContentDisposition(ContentDisposition&& value) { SetContentDisposition(std::move(value)); return *this;}
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
    inline CreateMessageTemplateAttachmentRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
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
    inline CreateMessageTemplateAttachmentRequest& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attachment file being uploaded. The name should include the
     * file extension.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateMessageTemplateAttachmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the attachment file being uploaded. It should be encoded using
     * base64 encoding.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }
    inline CreateMessageTemplateAttachmentRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}
    inline CreateMessageTemplateAttachmentRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ContentDisposition m_contentDisposition;
    bool m_contentDispositionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
