/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class UpdateContentRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API UpdateContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContent"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetContentId() const{ return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    inline void SetContentId(const Aws::String& value) { m_contentIdHasBeenSet = true; m_contentId = value; }
    inline void SetContentId(Aws::String&& value) { m_contentIdHasBeenSet = true; m_contentId = std::move(value); }
    inline void SetContentId(const char* value) { m_contentIdHasBeenSet = true; m_contentId.assign(value); }
    inline UpdateContentRequest& WithContentId(const Aws::String& value) { SetContentId(value); return *this;}
    inline UpdateContentRequest& WithContentId(Aws::String&& value) { SetContentId(std::move(value)); return *this;}
    inline UpdateContentRequest& WithContentId(const char* value) { SetContentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base if you're storing Wisdom Content resource to it. Can be
     * either the ID or the ARN</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline UpdateContentRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline UpdateContentRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline UpdateContentRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Wisdom, you can store an external version identifier as metadata to utilize
     * for determining drift.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline UpdateContentRequest& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}
    inline UpdateContentRequest& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}
    inline UpdateContentRequest& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline UpdateContentRequest& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline UpdateContentRequest& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline UpdateContentRequest& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateContentRequest& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline UpdateContentRequest& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline UpdateContentRequest& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URI for the article. If the knowledge base has a templateUri, setting
     * this argument overrides it for this piece of content. To remove an existing
     * <code>overrideLinkOurUri</code>, exclude this argument and set
     * <code>removeOverrideLinkOutUri</code> to true.</p>
     */
    inline const Aws::String& GetOverrideLinkOutUri() const{ return m_overrideLinkOutUri; }
    inline bool OverrideLinkOutUriHasBeenSet() const { return m_overrideLinkOutUriHasBeenSet; }
    inline void SetOverrideLinkOutUri(const Aws::String& value) { m_overrideLinkOutUriHasBeenSet = true; m_overrideLinkOutUri = value; }
    inline void SetOverrideLinkOutUri(Aws::String&& value) { m_overrideLinkOutUriHasBeenSet = true; m_overrideLinkOutUri = std::move(value); }
    inline void SetOverrideLinkOutUri(const char* value) { m_overrideLinkOutUriHasBeenSet = true; m_overrideLinkOutUri.assign(value); }
    inline UpdateContentRequest& WithOverrideLinkOutUri(const Aws::String& value) { SetOverrideLinkOutUri(value); return *this;}
    inline UpdateContentRequest& WithOverrideLinkOutUri(Aws::String&& value) { SetOverrideLinkOutUri(std::move(value)); return *this;}
    inline UpdateContentRequest& WithOverrideLinkOutUri(const char* value) { SetOverrideLinkOutUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unset the existing <code>overrideLinkOutUri</code> if it exists.</p>
     */
    inline bool GetRemoveOverrideLinkOutUri() const{ return m_removeOverrideLinkOutUri; }
    inline bool RemoveOverrideLinkOutUriHasBeenSet() const { return m_removeOverrideLinkOutUriHasBeenSet; }
    inline void SetRemoveOverrideLinkOutUri(bool value) { m_removeOverrideLinkOutUriHasBeenSet = true; m_removeOverrideLinkOutUri = value; }
    inline UpdateContentRequest& WithRemoveOverrideLinkOutUri(bool value) { SetRemoveOverrideLinkOutUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>revisionId</code> of the content resource to update, taken from an
     * earlier call to <code>GetContent</code>, <code>GetContentSummary</code>,
     * <code>SearchContent</code>, or <code>ListContents</code>. If included, this
     * argument acts as an optimistic lock to ensure content was not modified since it
     * was last read. If it has been modified, this API throws a
     * <code>PreconditionFailedException</code>.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline UpdateContentRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline UpdateContentRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline UpdateContentRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
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
    inline UpdateContentRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UpdateContentRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UpdateContentRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/wisdom/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.
     * </p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }
    inline UpdateContentRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline UpdateContentRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline UpdateContentRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_overrideLinkOutUri;
    bool m_overrideLinkOutUriHasBeenSet = false;

    bool m_removeOverrideLinkOutUri;
    bool m_removeOverrideLinkOutUriHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
