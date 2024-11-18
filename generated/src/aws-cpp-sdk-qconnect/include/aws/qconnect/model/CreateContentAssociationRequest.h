/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/model/ContentAssociationContents.h>
#include <aws/qconnect/model/ContentAssociationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateContentAssociationRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateContentAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateContentAssociation"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the associated resource.</p>
     */
    inline const ContentAssociationContents& GetAssociation() const{ return m_association; }
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }
    inline void SetAssociation(const ContentAssociationContents& value) { m_associationHasBeenSet = true; m_association = value; }
    inline void SetAssociation(ContentAssociationContents&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }
    inline CreateContentAssociationRequest& WithAssociation(const ContentAssociationContents& value) { SetAssociation(value); return *this;}
    inline CreateContentAssociationRequest& WithAssociation(ContentAssociationContents&& value) { SetAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association.</p>
     */
    inline const ContentAssociationType& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const ContentAssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(ContentAssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline CreateContentAssociationRequest& WithAssociationType(const ContentAssociationType& value) { SetAssociationType(value); return *this;}
    inline CreateContentAssociationRequest& WithAssociationType(ContentAssociationType&& value) { SetAssociationType(std::move(value)); return *this;}
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
    inline CreateContentAssociationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateContentAssociationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateContentAssociationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateContentAssociationRequest& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}
    inline CreateContentAssociationRequest& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}
    inline CreateContentAssociationRequest& WithContentId(const char* value) { SetContentId(value); return *this;}
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
    inline CreateContentAssociationRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline CreateContentAssociationRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline CreateContentAssociationRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateContentAssociationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateContentAssociationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateContentAssociationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateContentAssociationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateContentAssociationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateContentAssociationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateContentAssociationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateContentAssociationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateContentAssociationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    ContentAssociationContents m_association;
    bool m_associationHasBeenSet = false;

    ContentAssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
