﻿/**
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
  class GetDocumentVersionRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API GetDocumentVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocumentVersion"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline GetDocumentVersionRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline GetDocumentVersionRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline GetDocumentVersionRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline GetDocumentVersionRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline GetDocumentVersionRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline GetDocumentVersionRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the document.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline GetDocumentVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline GetDocumentVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline GetDocumentVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of values. Specify "SOURCE" to include a URL for the
     * source document.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }
    inline GetDocumentVersionRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}
    inline GetDocumentVersionRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}
    inline GetDocumentVersionRequest& WithFields(const char* value) { SetFields(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to TRUE to include custom metadata in the response.</p>
     */
    inline bool GetIncludeCustomMetadata() const{ return m_includeCustomMetadata; }
    inline bool IncludeCustomMetadataHasBeenSet() const { return m_includeCustomMetadataHasBeenSet; }
    inline void SetIncludeCustomMetadata(bool value) { m_includeCustomMetadataHasBeenSet = true; m_includeCustomMetadata = value; }
    inline GetDocumentVersionRequest& WithIncludeCustomMetadata(bool value) { SetIncludeCustomMetadata(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet = false;

    bool m_includeCustomMetadata;
    bool m_includeCustomMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
