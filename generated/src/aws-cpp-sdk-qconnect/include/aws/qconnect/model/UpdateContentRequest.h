/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateContentRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContent"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the knowledge base. This should not be a QUICK_RESPONSES
     * type knowledge base. Can be either the ID or the ARN</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    UpdateContentRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the content. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetContentId() const { return m_contentId; }
    inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
    template<typename ContentIdT = Aws::String>
    void SetContentId(ContentIdT&& value) { m_contentIdHasBeenSet = true; m_contentId = std::forward<ContentIdT>(value); }
    template<typename ContentIdT = Aws::String>
    UpdateContentRequest& WithContentId(ContentIdT&& value) { SetContentId(std::forward<ContentIdT>(value)); return *this;}
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
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    UpdateContentRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
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
    UpdateContentRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI for the article. If the knowledge base has a templateUri, setting
     * this argument overrides it for this piece of content. To remove an existing
     * <code>overrideLinkOurUri</code>, exclude this argument and set
     * <code>removeOverrideLinkOutUri</code> to true.</p>
     */
    inline const Aws::String& GetOverrideLinkOutUri() const { return m_overrideLinkOutUri; }
    inline bool OverrideLinkOutUriHasBeenSet() const { return m_overrideLinkOutUriHasBeenSet; }
    template<typename OverrideLinkOutUriT = Aws::String>
    void SetOverrideLinkOutUri(OverrideLinkOutUriT&& value) { m_overrideLinkOutUriHasBeenSet = true; m_overrideLinkOutUri = std::forward<OverrideLinkOutUriT>(value); }
    template<typename OverrideLinkOutUriT = Aws::String>
    UpdateContentRequest& WithOverrideLinkOutUri(OverrideLinkOutUriT&& value) { SetOverrideLinkOutUri(std::forward<OverrideLinkOutUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unset the existing <code>overrideLinkOutUri</code> if it exists.</p>
     */
    inline bool GetRemoveOverrideLinkOutUri() const { return m_removeOverrideLinkOutUri; }
    inline bool RemoveOverrideLinkOutUriHasBeenSet() const { return m_removeOverrideLinkOutUriHasBeenSet; }
    inline void SetRemoveOverrideLinkOutUri(bool value) { m_removeOverrideLinkOutUriHasBeenSet = true; m_removeOverrideLinkOutUri = value; }
    inline UpdateContentRequest& WithRemoveOverrideLinkOutUri(bool value) { SetRemoveOverrideLinkOutUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key/value map to store attributes without affecting tagging or
     * recommendations. For example, when synchronizing data between an external system
     * and Amazon Q in Connect, you can store an external version identifier as
     * metadata to utilize for determining drift.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    UpdateContentRequest& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    UpdateContentRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A pointer to the uploaded asset. This value is returned by <a
     * href="https://docs.aws.amazon.com/amazon-q-connect/latest/APIReference/API_StartContentUpload.html">StartContentUpload</a>.
     * </p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    UpdateContentRequest& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_contentId;
    bool m_contentIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_overrideLinkOutUri;
    bool m_overrideLinkOutUriHasBeenSet = false;

    bool m_removeOverrideLinkOutUri{false};
    bool m_removeOverrideLinkOutUriHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
