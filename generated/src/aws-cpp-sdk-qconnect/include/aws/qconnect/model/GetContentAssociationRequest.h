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
  class GetContentAssociationRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API GetContentAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContentAssociation"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    GetContentAssociationRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the content.</p>
     */
    inline const Aws::String& GetContentId() const { return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    template<typename ContentIdT = Aws::String>
    void SetContentId(ContentIdT&& value) { m_contentIdHasBeenSet = true; m_contentId = std::forward<ContentIdT>(value); }
    template<typename ContentIdT = Aws::String>
    GetContentAssociationRequest& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the content association. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetContentAssociationId() const { return m_contentAssociationId; }
    inline bool ContentAssociationIdHasBeenSet() const { return m_contentAssociationIdHasBeenSet; }
    template<typename ContentAssociationIdT = Aws::String>
    void SetContentAssociationId(ContentAssociationIdT&& value) { m_contentAssociationIdHasBeenSet = true; m_contentAssociationId = std::forward<ContentAssociationIdT>(value); }
    template<typename ContentAssociationIdT = Aws::String>
    GetContentAssociationRequest& WithContentAssociationId(ContentAssociationIdT&& value) { SetContentAssociationId(std::forward<ContentAssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_contentAssociationId;
    bool m_contentAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
