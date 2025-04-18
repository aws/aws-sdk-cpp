/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentAssociationType.h>
#include <aws/qconnect/model/ContentAssociationContents.h>
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
    AWS_QCONNECT_API ContentAssociationSummary() = default;
    AWS_QCONNECT_API ContentAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    ContentAssociationSummary& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
    inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
    template<typename KnowledgeBaseArnT = Aws::String>
    void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) { m_knowledgeBaseArnHasBeenSet = true; m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value); }
    template<typename KnowledgeBaseArnT = Aws::String>
    ContentAssociationSummary& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
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
    ContentAssociationSummary& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline const Aws::String& GetContentArn() const { return m_contentArn; }
    inline bool ContentArnHasBeenSet() const { return m_contentArnHasBeenSet; }
    template<typename ContentArnT = Aws::String>
    void SetContentArn(ContentArnT&& value) { m_contentArnHasBeenSet = true; m_contentArn = std::forward<ContentArnT>(value); }
    template<typename ContentArnT = Aws::String>
    ContentAssociationSummary& WithContentArn(ContentArnT&& value) { SetContentArn(std::forward<ContentArnT>(value)); return *this;}
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
    ContentAssociationSummary& WithContentAssociationId(ContentAssociationIdT&& value) { SetContentAssociationId(std::forward<ContentAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content association.</p>
     */
    inline const Aws::String& GetContentAssociationArn() const { return m_contentAssociationArn; }
    inline bool ContentAssociationArnHasBeenSet() const { return m_contentAssociationArnHasBeenSet; }
    template<typename ContentAssociationArnT = Aws::String>
    void SetContentAssociationArn(ContentAssociationArnT&& value) { m_contentAssociationArnHasBeenSet = true; m_contentAssociationArn = std::forward<ContentAssociationArnT>(value); }
    template<typename ContentAssociationArnT = Aws::String>
    ContentAssociationSummary& WithContentAssociationArn(ContentAssociationArnT&& value) { SetContentAssociationArn(std::forward<ContentAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of association.</p>
     */
    inline ContentAssociationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(ContentAssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline ContentAssociationSummary& WithAssociationType(ContentAssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content association.</p>
     */
    inline const ContentAssociationContents& GetAssociationData() const { return m_associationData; }
    inline bool AssociationDataHasBeenSet() const { return m_associationDataHasBeenSet; }
    template<typename AssociationDataT = ContentAssociationContents>
    void SetAssociationData(AssociationDataT&& value) { m_associationDataHasBeenSet = true; m_associationData = std::forward<AssociationDataT>(value); }
    template<typename AssociationDataT = ContentAssociationContents>
    ContentAssociationSummary& WithAssociationData(AssociationDataT&& value) { SetAssociationData(std::forward<AssociationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ContentAssociationSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ContentAssociationSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_contentArn;
    bool m_contentArnHasBeenSet = false;

    Aws::String m_contentAssociationId;
    bool m_contentAssociationIdHasBeenSet = false;

    Aws::String m_contentAssociationArn;
    bool m_contentAssociationArnHasBeenSet = false;

    ContentAssociationType m_associationType{ContentAssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    ContentAssociationContents m_associationData;
    bool m_associationDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
