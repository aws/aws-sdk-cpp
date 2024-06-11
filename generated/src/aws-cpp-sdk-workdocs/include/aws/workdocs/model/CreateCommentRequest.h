/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/CommentVisibilityType.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class CreateCommentRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API CreateCommentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComment"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

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
    inline CreateCommentRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline CreateCommentRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline CreateCommentRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
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
    inline CreateCommentRequest& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline CreateCommentRequest& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline CreateCommentRequest& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline CreateCommentRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline CreateCommentRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline CreateCommentRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent comment.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }
    inline CreateCommentRequest& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline CreateCommentRequest& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline CreateCommentRequest& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline const Aws::String& GetThreadId() const{ return m_threadId; }
    inline bool ThreadIdHasBeenSet() const { return m_threadIdHasBeenSet; }
    inline void SetThreadId(const Aws::String& value) { m_threadIdHasBeenSet = true; m_threadId = value; }
    inline void SetThreadId(Aws::String&& value) { m_threadIdHasBeenSet = true; m_threadId = std::move(value); }
    inline void SetThreadId(const char* value) { m_threadIdHasBeenSet = true; m_threadId.assign(value); }
    inline CreateCommentRequest& WithThreadId(const Aws::String& value) { SetThreadId(value); return *this;}
    inline CreateCommentRequest& WithThreadId(Aws::String&& value) { SetThreadId(std::move(value)); return *this;}
    inline CreateCommentRequest& WithThreadId(const char* value) { SetThreadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the comment.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline CreateCommentRequest& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline CreateCommentRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline CreateCommentRequest& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline const CommentVisibilityType& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const CommentVisibilityType& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(CommentVisibilityType&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline CreateCommentRequest& WithVisibility(const CommentVisibilityType& value) { SetVisibility(value); return *this;}
    inline CreateCommentRequest& WithVisibility(CommentVisibilityType&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this parameter to TRUE to send an email out to the document collaborators
     * after the comment is created.</p>
     */
    inline bool GetNotifyCollaborators() const{ return m_notifyCollaborators; }
    inline bool NotifyCollaboratorsHasBeenSet() const { return m_notifyCollaboratorsHasBeenSet; }
    inline void SetNotifyCollaborators(bool value) { m_notifyCollaboratorsHasBeenSet = true; m_notifyCollaborators = value; }
    inline CreateCommentRequest& WithNotifyCollaborators(bool value) { SetNotifyCollaborators(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_threadId;
    bool m_threadIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    CommentVisibilityType m_visibility;
    bool m_visibilityHasBeenSet = false;

    bool m_notifyCollaborators;
    bool m_notifyCollaboratorsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
