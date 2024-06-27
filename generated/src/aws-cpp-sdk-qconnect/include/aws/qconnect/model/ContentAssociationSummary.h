/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentAssociationContents.h>
#include <aws/qconnect/model/ContentAssociationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>Summary information about a content association.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ContentAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ContentAssociationSummary
  {
  public:
    AWS_QCONNECT_API ContentAssociationSummary();
    AWS_QCONNECT_API ContentAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content association.</p>
     */
    inline const ContentAssociationContents& GetAssociationData() const{ return m_associationData; }
    inline bool AssociationDataHasBeenSet() const { return m_associationDataHasBeenSet; }
    inline void SetAssociationData(const ContentAssociationContents& value) { m_associationDataHasBeenSet = true; m_associationData = value; }
    inline void SetAssociationData(ContentAssociationContents&& value) { m_associationDataHasBeenSet = true; m_associationData = std::move(value); }
    inline ContentAssociationSummary& WithAssociationData(const ContentAssociationContents& value) { SetAssociationData(value); return *this;}
    inline ContentAssociationSummary& WithAssociationData(ContentAssociationContents&& value) { SetAssociationData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association.</p>
     */
    inline const ContentAssociationType& GetAssociationType() const{ return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(const ContentAssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline void SetAssociationType(ContentAssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }
    inline ContentAssociationSummary& WithAssociationType(const ContentAssociationType& value) { SetAssociationType(value); return *this;}
    inline ContentAssociationSummary& WithAssociationType(ContentAssociationType&& value) { SetAssociationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline const Aws::String& GetContentArn() const{ return m_contentArn; }
    inline bool ContentArnHasBeenSet() const { return m_contentArnHasBeenSet; }
    inline void SetContentArn(const Aws::String& value) { m_contentArnHasBeenSet = true; m_contentArn = value; }
    inline void SetContentArn(Aws::String&& value) { m_contentArnHasBeenSet = true; m_contentArn = std::move(value); }
    inline void SetContentArn(const char* value) { m_contentArnHasBeenSet = true; m_contentArn.assign(value); }
    inline ContentAssociationSummary& WithContentArn(const Aws::String& value) { SetContentArn(value); return *this;}
    inline ContentAssociationSummary& WithContentArn(Aws::String&& value) { SetContentArn(std::move(value)); return *this;}
    inline ContentAssociationSummary& WithContentArn(const char* value) { SetContentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content association.</p>
     */
    inline const Aws::String& GetContentAssociationArn() const{ return m_contentAssociationArn; }
    inline bool ContentAssociationArnHasBeenSet() const { return m_contentAssociationArnHasBeenSet; }
    inline void SetContentAssociationArn(const Aws::String& value) { m_contentAssociationArnHasBeenSet = true; m_contentAssociationArn = value; }
    inline void SetContentAssociationArn(Aws::String&& value) { m_contentAssociationArnHasBeenSet = true; m_contentAssociationArn = std::move(value); }
    inline void SetContentAssociationArn(const char* value) { m_contentAssociationArnHasBeenSet = true; m_contentAssociationArn.assign(value); }
    inline ContentAssociationSummary& WithContentAssociationArn(const Aws::String& value) { SetContentAssociationArn(value); return *this;}
    inline ContentAssociationSummary& WithContentAssociationArn(Aws::String&& value) { SetContentAssociationArn(std::move(value)); return *this;}
    inline ContentAssociationSummary& WithContentAssociationArn(const char* value) { SetContentAssociationArn(value); return *this;}
    ///@}

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
    inline ContentAssociationSummary& WithContentAssociationId(const Aws::String& value) { SetContentAssociationId(value); return *this;}
    inline ContentAssociationSummary& WithContentAssociationId(Aws::String&& value) { SetContentAssociationId(std::move(value)); return *this;}
    inline ContentAssociationSummary& WithContentAssociationId(const char* value) { SetContentAssociationId(value); return *this;}
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
    inline ContentAssociationSummary& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}
    inline ContentAssociationSummary& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}
    inline ContentAssociationSummary& WithContentId(const char* value) { SetContentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const{ return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    inline void SetKnowledgeBaseArn(const Aws::String& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = value; }
    inline void SetKnowledgeBaseArn(Aws::String&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::move(value); }
    inline void SetKnowledgeBaseArn(const char* value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn.assign(value); }
    inline ContentAssociationSummary& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline ContentAssociationSummary& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline ContentAssociationSummary& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
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
    inline ContentAssociationSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline ContentAssociationSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline ContentAssociationSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ContentAssociationSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ContentAssociationSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ContentAssociationSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ContentAssociationSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ContentAssociationSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ContentAssociationSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ContentAssociationSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ContentAssociationSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ContentAssociationSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    ContentAssociationContents m_associationData;
    bool m_associationDataHasBeenSet = false;

    ContentAssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::String m_contentArn;
    bool m_contentArnHasBeenSet = false;

    Aws::String m_contentAssociationArn;
    bool m_contentAssociationArnHasBeenSet = false;

    Aws::String m_contentAssociationId;
    bool m_contentAssociationIdHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
