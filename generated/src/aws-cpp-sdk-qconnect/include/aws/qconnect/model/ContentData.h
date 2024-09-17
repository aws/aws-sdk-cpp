/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/ContentStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about the content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ContentData">AWS
   * API Reference</a></p>
   */
  class ContentData
  {
  public:
    AWS_QCONNECT_API ContentData();
    AWS_QCONNECT_API ContentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the content.</p>
     */
    inline const Aws::String& GetContentArn() const{ return m_contentArn; }
    inline bool ContentArnHasBeenSet() const { return m_contentArnHasBeenSet; }
    inline void SetContentArn(const Aws::String& value) { m_contentArnHasBeenSet = true; m_contentArn = value; }
    inline void SetContentArn(Aws::String&& value) { m_contentArnHasBeenSet = true; m_contentArn = std::move(value); }
    inline void SetContentArn(const char* value) { m_contentArnHasBeenSet = true; m_contentArn.assign(value); }
    inline ContentData& WithContentArn(const Aws::String& value) { SetContentArn(value); return *this;}
    inline ContentData& WithContentArn(Aws::String&& value) { SetContentArn(std::move(value)); return *this;}
    inline ContentData& WithContentArn(const char* value) { SetContentArn(value); return *this;}
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
    inline ContentData& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}
    inline ContentData& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}
    inline ContentData& WithContentId(const char* value) { SetContentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the content.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline ContentData& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline ContentData& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline ContentData& WithContentType(const char* value) { SetContentType(value); return *this;}
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
    inline ContentData& WithKnowledgeBaseArn(const Aws::String& value) { SetKnowledgeBaseArn(value); return *this;}
    inline ContentData& WithKnowledgeBaseArn(Aws::String&& value) { SetKnowledgeBaseArn(std::move(value)); return *this;}
    inline ContentData& WithKnowledgeBaseArn(const char* value) { SetKnowledgeBaseArn(value); return *this;}
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
    inline ContentData& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline ContentData& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline ContentData& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the content.</p>
     */
    inline const Aws::String& GetLinkOutUri() const{ return m_linkOutUri; }
    inline bool LinkOutUriHasBeenSet() const { return m_linkOutUriHasBeenSet; }
    inline void SetLinkOutUri(const Aws::String& value) { m_linkOutUriHasBeenSet = true; m_linkOutUri = value; }
    inline void SetLinkOutUri(Aws::String&& value) { m_linkOutUriHasBeenSet = true; m_linkOutUri = std::move(value); }
    inline void SetLinkOutUri(const char* value) { m_linkOutUriHasBeenSet = true; m_linkOutUri.assign(value); }
    inline ContentData& WithLinkOutUri(const Aws::String& value) { SetLinkOutUri(value); return *this;}
    inline ContentData& WithLinkOutUri(Aws::String&& value) { SetLinkOutUri(std::move(value)); return *this;}
    inline ContentData& WithLinkOutUri(const char* value) { SetLinkOutUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Amazon Q in Connect, you can store an external version identifier as
     * metadata to utilize for determining drift.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline ContentData& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline ContentData& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline ContentData& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline ContentData& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline ContentData& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline ContentData& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline ContentData& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline ContentData& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline ContentData& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the content.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ContentData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ContentData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ContentData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the content revision.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline ContentData& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline ContentData& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline ContentData& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the content.</p>
     */
    inline const ContentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ContentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ContentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ContentData& WithStatus(const ContentStatus& value) { SetStatus(value); return *this;}
    inline ContentData& WithStatus(ContentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ContentData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ContentData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ContentData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ContentData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ContentData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ContentData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ContentData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ContentData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ContentData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The title of the content.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ContentData& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ContentData& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ContentData& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the content.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline ContentData& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline ContentData& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline ContentData& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time of the URL as an epoch timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetUrlExpiry() const{ return m_urlExpiry; }
    inline bool UrlExpiryHasBeenSet() const { return m_urlExpiryHasBeenSet; }
    inline void SetUrlExpiry(const Aws::Utils::DateTime& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = value; }
    inline void SetUrlExpiry(Aws::Utils::DateTime&& value) { m_urlExpiryHasBeenSet = true; m_urlExpiry = std::move(value); }
    inline ContentData& WithUrlExpiry(const Aws::Utils::DateTime& value) { SetUrlExpiry(value); return *this;}
    inline ContentData& WithUrlExpiry(Aws::Utils::DateTime&& value) { SetUrlExpiry(std::move(value)); return *this;}
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

    Aws::String m_linkOutUri;
    bool m_linkOutUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    ContentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Utils::DateTime m_urlExpiry;
    bool m_urlExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
