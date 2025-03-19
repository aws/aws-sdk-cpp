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
    AWS_WORKDOCS_API CreateCommentRequest() = default;

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
    inline const Aws::String& GetAuthenticationToken() const { return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    template<typename AuthenticationTokenT = Aws::String>
    void SetAuthenticationToken(AuthenticationTokenT&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::forward<AuthenticationTokenT>(value); }
    template<typename AuthenticationTokenT = Aws::String>
    CreateCommentRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    CreateCommentRequest& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the document version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    CreateCommentRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the parent comment.</p>
     */
    inline const Aws::String& GetParentId() const { return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    template<typename ParentIdT = Aws::String>
    void SetParentId(ParentIdT&& value) { m_parentIdHasBeenSet = true; m_parentId = std::forward<ParentIdT>(value); }
    template<typename ParentIdT = Aws::String>
    CreateCommentRequest& WithParentId(ParentIdT&& value) { SetParentId(std::forward<ParentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline const Aws::String& GetThreadId() const { return m_threadId; }
    inline bool ThreadIdHasBeenSet() const { return m_threadIdHasBeenSet; }
    template<typename ThreadIdT = Aws::String>
    void SetThreadId(ThreadIdT&& value) { m_threadIdHasBeenSet = true; m_threadId = std::forward<ThreadIdT>(value); }
    template<typename ThreadIdT = Aws::String>
    CreateCommentRequest& WithThreadId(ThreadIdT&& value) { SetThreadId(std::forward<ThreadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the comment.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    CreateCommentRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline CommentVisibilityType GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(CommentVisibilityType value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline CreateCommentRequest& WithVisibility(CommentVisibilityType value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this parameter to TRUE to send an email out to the document collaborators
     * after the comment is created.</p>
     */
    inline bool GetNotifyCollaborators() const { return m_notifyCollaborators; }
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

    CommentVisibilityType m_visibility{CommentVisibilityType::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    bool m_notifyCollaborators{false};
    bool m_notifyCollaboratorsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
