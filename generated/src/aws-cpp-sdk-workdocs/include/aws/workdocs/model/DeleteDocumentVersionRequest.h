/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class DeleteDocumentVersionRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DeleteDocumentVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDocumentVersion"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
    DeleteDocumentVersionRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document associated with the version being deleted.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    DeleteDocumentVersionRequest& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version being deleted.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    DeleteDocumentVersionRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes all versions of a document prior to the current version.</p>
     */
    inline bool GetDeletePriorVersions() const { return m_deletePriorVersions; }
    inline bool DeletePriorVersionsHasBeenSet() const { return m_deletePriorVersionsHasBeenSet; }
    inline void SetDeletePriorVersions(bool value) { m_deletePriorVersionsHasBeenSet = true; m_deletePriorVersions = value; }
    inline DeleteDocumentVersionRequest& WithDeletePriorVersions(bool value) { SetDeletePriorVersions(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    bool m_deletePriorVersions{false};
    bool m_deletePriorVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
