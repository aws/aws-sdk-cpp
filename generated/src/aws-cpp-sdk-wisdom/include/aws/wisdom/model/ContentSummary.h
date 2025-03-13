/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wisdom/model/ContentStatus.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Summary information about the content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/ContentSummary">AWS
   * API Reference</a></p>
   */
  class ContentSummary
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ContentSummary() = default;
    AWS_CONNECTWISDOMSERVICE_API ContentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API ContentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline const Aws::String& GetContentArn() const { return m_contentArn; }
    inline bool ContentArnHasBeenSet() const { return m_contentArnHasBeenSet; }
    template<typename ContentArnT = Aws::String>
    void SetContentArn(ContentArnT&& value) { m_contentArnHasBeenSet = true; m_contentArn = std::forward<ContentArnT>(value); }
    template<typename ContentArnT = Aws::String>
    ContentSummary& WithContentArn(ContentArnT&& value) { SetContentArn(std::forward<ContentArnT>(value)); return *this;}
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
    ContentSummary& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the content.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    ContentSummary& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
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
    ContentSummary& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) { SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    ContentSummary& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    ContentSummary& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    ContentSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of the content.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the revision of the content.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ContentSummary& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the content.</p>
     */
    inline ContentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ContentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ContentSummary& WithStatus(ContentStatus value) { SetStatus(value); return *this;}
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
    ContentSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ContentSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The title of the content.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ContentSummary& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contentArn;
    bool m_contentArnHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_knowledgeBaseArn;
    bool m_knowledgeBaseArnHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    ContentStatus m_status{ContentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
