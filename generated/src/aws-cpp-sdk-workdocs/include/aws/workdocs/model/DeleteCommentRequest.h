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
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class DeleteCommentRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DeleteCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteComment"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline DeleteCommentRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline DeleteCommentRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using AWS
     * administrator credentials to access the API.</p>
     */
    inline DeleteCommentRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The ID of the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The ID of the document.</p>
     */
    inline DeleteCommentRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DeleteCommentRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document.</p>
     */
    inline DeleteCommentRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The ID of the document version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID of the document version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID of the document version.</p>
     */
    inline DeleteCommentRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID of the document version.</p>
     */
    inline DeleteCommentRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the document version.</p>
     */
    inline DeleteCommentRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The ID of the comment.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The ID of the comment.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The ID of the comment.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The ID of the comment.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The ID of the comment.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The ID of the comment.</p>
     */
    inline DeleteCommentRequest& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The ID of the comment.</p>
     */
    inline DeleteCommentRequest& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment.</p>
     */
    inline DeleteCommentRequest& WithCommentId(const char* value) { SetCommentId(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
