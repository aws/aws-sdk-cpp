/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class InitiateDocumentVersionUploadRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API InitiateDocumentVersionUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InitiateDocumentVersionUpload"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const { return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    template<typename AuthenticationTokenT = Aws::String>
    void SetAuthenticationToken(AuthenticationTokenT&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::forward<AuthenticationTokenT>(value); }
    template<typename AuthenticationTokenT = Aws::String>
    InitiateDocumentVersionUploadRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InitiateDocumentVersionUploadRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the document.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InitiateDocumentVersionUploadRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the content of the document was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetContentCreatedTimestamp() const { return m_contentCreatedTimestamp; }
    inline bool ContentCreatedTimestampHasBeenSet() const { return m_contentCreatedTimestampHasBeenSet; }
    template<typename ContentCreatedTimestampT = Aws::Utils::DateTime>
    void SetContentCreatedTimestamp(ContentCreatedTimestampT&& value) { m_contentCreatedTimestampHasBeenSet = true; m_contentCreatedTimestamp = std::forward<ContentCreatedTimestampT>(value); }
    template<typename ContentCreatedTimestampT = Aws::Utils::DateTime>
    InitiateDocumentVersionUploadRequest& WithContentCreatedTimestamp(ContentCreatedTimestampT&& value) { SetContentCreatedTimestamp(std::forward<ContentCreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the content of the document was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetContentModifiedTimestamp() const { return m_contentModifiedTimestamp; }
    inline bool ContentModifiedTimestampHasBeenSet() const { return m_contentModifiedTimestampHasBeenSet; }
    template<typename ContentModifiedTimestampT = Aws::Utils::DateTime>
    void SetContentModifiedTimestamp(ContentModifiedTimestampT&& value) { m_contentModifiedTimestampHasBeenSet = true; m_contentModifiedTimestamp = std::forward<ContentModifiedTimestampT>(value); }
    template<typename ContentModifiedTimestampT = Aws::Utils::DateTime>
    InitiateDocumentVersionUploadRequest& WithContentModifiedTimestamp(ContentModifiedTimestampT&& value) { SetContentModifiedTimestamp(std::forward<ContentModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content type of the document.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    InitiateDocumentVersionUploadRequest& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the document, in bytes.</p>
     */
    inline long long GetDocumentSizeInBytes() const { return m_documentSizeInBytes; }
    inline bool DocumentSizeInBytesHasBeenSet() const { return m_documentSizeInBytesHasBeenSet; }
    inline void SetDocumentSizeInBytes(long long value) { m_documentSizeInBytesHasBeenSet = true; m_documentSizeInBytes = value; }
    inline InitiateDocumentVersionUploadRequest& WithDocumentSizeInBytes(long long value) { SetDocumentSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent folder.</p>
     */
    inline const Aws::String& GetParentFolderId() const { return m_parentFolderId; }
    inline bool ParentFolderIdHasBeenSet() const { return m_parentFolderIdHasBeenSet; }
    template<typename ParentFolderIdT = Aws::String>
    void SetParentFolderId(ParentFolderIdT&& value) { m_parentFolderIdHasBeenSet = true; m_parentFolderId = std::forward<ParentFolderIdT>(value); }
    template<typename ParentFolderIdT = Aws::String>
    InitiateDocumentVersionUploadRequest& WithParentFolderId(ParentFolderIdT&& value) { SetParentFolderId(std::forward<ParentFolderIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_contentCreatedTimestamp{};
    bool m_contentCreatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_contentModifiedTimestamp{};
    bool m_contentModifiedTimestampHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    long long m_documentSizeInBytes{0};
    bool m_documentSizeInBytesHasBeenSet = false;

    Aws::String m_parentFolderId;
    bool m_parentFolderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
