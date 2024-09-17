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
  class DeleteContentAssociationRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API DeleteContentAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContentAssociation"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the content association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetContentAssociationId() const{ return m_contentAssociationId; }
    inline bool ContentAssociationIdHasBeenSet() const { return m_contentAssociationIdHasBeenSet; }
    inline void SetContentAssociationId(const Aws::String& value) { m_contentAssociationIdHasBeenSet = true; m_contentAssociationId = value; }
    inline void SetContentAssociationId(Aws::String&& value) { m_contentAssociationIdHasBeenSet = true; m_contentAssociationId = std::move(value); }
    inline void SetContentAssociationId(const char* value) { m_contentAssociationIdHasBeenSet = true; m_contentAssociationId.assign(value); }
    inline DeleteContentAssociationRequest& WithContentAssociationId(const Aws::String& value) { SetContentAssociationId(value); return *this;}
    inline DeleteContentAssociationRequest& WithContentAssociationId(Aws::String&& value) { SetContentAssociationId(std::move(value)); return *this;}
    inline DeleteContentAssociationRequest& WithContentAssociationId(const char* value) { SetContentAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the content.</p>
     */
    inline const Aws::String& GetContentId() const{ return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    inline void SetContentId(const Aws::String& value) { m_contentIdHasBeenSet = true; m_contentId = value; }
    inline void SetContentId(Aws::String&& value) { m_contentIdHasBeenSet = true; m_contentId = std::move(value); }
    inline void SetContentId(const char* value) { m_contentIdHasBeenSet = true; m_contentId.assign(value); }
    inline DeleteContentAssociationRequest& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}
    inline DeleteContentAssociationRequest& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}
    inline DeleteContentAssociationRequest& WithContentId(const char* value) { SetContentId(value); return *this;}
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
    inline DeleteContentAssociationRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline DeleteContentAssociationRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline DeleteContentAssociationRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentAssociationId;
    bool m_contentAssociationIdHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
