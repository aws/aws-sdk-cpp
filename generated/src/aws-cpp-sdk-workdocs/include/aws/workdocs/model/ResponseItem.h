/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ResponseItemType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/DocumentMetadata.h>
#include <aws/workdocs/model/FolderMetadata.h>
#include <aws/workdocs/model/CommentMetadata.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>List of Documents, Folders, Comments, and Document Versions matching the
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ResponseItem">AWS
   * API Reference</a></p>
   */
  class ResponseItem
  {
  public:
    AWS_WORKDOCS_API ResponseItem() = default;
    AWS_WORKDOCS_API ResponseItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of item being returned.</p>
     */
    inline ResponseItemType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResponseItemType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ResponseItem& WithResourceType(ResponseItemType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The webUrl of the item being returned.</p>
     */
    inline const Aws::String& GetWebUrl() const { return m_webUrl; }
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }
    template<typename WebUrlT = Aws::String>
    void SetWebUrl(WebUrlT&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::forward<WebUrlT>(value); }
    template<typename WebUrlT = Aws::String>
    ResponseItem& WithWebUrl(WebUrlT&& value) { SetWebUrl(std::forward<WebUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document that matches the query.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    inline bool DocumentMetadataHasBeenSet() const { return m_documentMetadataHasBeenSet; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    ResponseItem& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder that matches the query.</p>
     */
    inline const FolderMetadata& GetFolderMetadata() const { return m_folderMetadata; }
    inline bool FolderMetadataHasBeenSet() const { return m_folderMetadataHasBeenSet; }
    template<typename FolderMetadataT = FolderMetadata>
    void SetFolderMetadata(FolderMetadataT&& value) { m_folderMetadataHasBeenSet = true; m_folderMetadata = std::forward<FolderMetadataT>(value); }
    template<typename FolderMetadataT = FolderMetadata>
    ResponseItem& WithFolderMetadata(FolderMetadataT&& value) { SetFolderMetadata(std::forward<FolderMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment that matches the query.</p>
     */
    inline const CommentMetadata& GetCommentMetadata() const { return m_commentMetadata; }
    inline bool CommentMetadataHasBeenSet() const { return m_commentMetadataHasBeenSet; }
    template<typename CommentMetadataT = CommentMetadata>
    void SetCommentMetadata(CommentMetadataT&& value) { m_commentMetadataHasBeenSet = true; m_commentMetadata = std::forward<CommentMetadataT>(value); }
    template<typename CommentMetadataT = CommentMetadata>
    ResponseItem& WithCommentMetadata(CommentMetadataT&& value) { SetCommentMetadata(std::forward<CommentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version that matches the metadata.</p>
     */
    inline const DocumentVersionMetadata& GetDocumentVersionMetadata() const { return m_documentVersionMetadata; }
    inline bool DocumentVersionMetadataHasBeenSet() const { return m_documentVersionMetadataHasBeenSet; }
    template<typename DocumentVersionMetadataT = DocumentVersionMetadata>
    void SetDocumentVersionMetadata(DocumentVersionMetadataT&& value) { m_documentVersionMetadataHasBeenSet = true; m_documentVersionMetadata = std::forward<DocumentVersionMetadataT>(value); }
    template<typename DocumentVersionMetadataT = DocumentVersionMetadata>
    ResponseItem& WithDocumentVersionMetadata(DocumentVersionMetadataT&& value) { SetDocumentVersionMetadata(std::forward<DocumentVersionMetadataT>(value)); return *this;}
    ///@}
  private:

    ResponseItemType m_resourceType{ResponseItemType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_webUrl;
    bool m_webUrlHasBeenSet = false;

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    FolderMetadata m_folderMetadata;
    bool m_folderMetadataHasBeenSet = false;

    CommentMetadata m_commentMetadata;
    bool m_commentMetadataHasBeenSet = false;

    DocumentVersionMetadata m_documentVersionMetadata;
    bool m_documentVersionMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
