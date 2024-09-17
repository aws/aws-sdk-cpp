/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/User.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workdocs/model/CommentStatusType.h>
#include <aws/workdocs/model/CommentVisibilityType.h>
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
   * <p>Describes a comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Comment">AWS
   * API Reference</a></p>
   */
  class Comment
  {
  public:
    AWS_WORKDOCS_API Comment();
    AWS_WORKDOCS_API Comment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the comment.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }
    inline Comment& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}
    inline Comment& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}
    inline Comment& WithCommentId(const char* value) { SetCommentId(value); return *this;}
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
    inline Comment& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline Comment& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline Comment& WithParentId(const char* value) { SetParentId(value); return *this;}
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
    inline Comment& WithThreadId(const Aws::String& value) { SetThreadId(value); return *this;}
    inline Comment& WithThreadId(Aws::String&& value) { SetThreadId(std::move(value)); return *this;}
    inline Comment& WithThreadId(const char* value) { SetThreadId(value); return *this;}
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
    inline Comment& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline Comment& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline Comment& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline const User& GetContributor() const{ return m_contributor; }
    inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }
    inline void SetContributor(const User& value) { m_contributorHasBeenSet = true; m_contributor = value; }
    inline void SetContributor(User&& value) { m_contributorHasBeenSet = true; m_contributor = std::move(value); }
    inline Comment& WithContributor(const User& value) { SetContributor(value); return *this;}
    inline Comment& WithContributor(User&& value) { SetContributor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the comment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline Comment& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline Comment& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the comment.</p>
     */
    inline const CommentStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CommentStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CommentStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Comment& WithStatus(const CommentStatusType& value) { SetStatus(value); return *this;}
    inline Comment& WithStatus(CommentStatusType&& value) { SetStatus(std::move(value)); return *this;}
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
    inline Comment& WithVisibility(const CommentVisibilityType& value) { SetVisibility(value); return *this;}
    inline Comment& WithVisibility(CommentVisibilityType&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline const Aws::String& GetRecipientId() const{ return m_recipientId; }
    inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }
    inline void SetRecipientId(const Aws::String& value) { m_recipientIdHasBeenSet = true; m_recipientId = value; }
    inline void SetRecipientId(Aws::String&& value) { m_recipientIdHasBeenSet = true; m_recipientId = std::move(value); }
    inline void SetRecipientId(const char* value) { m_recipientIdHasBeenSet = true; m_recipientId.assign(value); }
    inline Comment& WithRecipientId(const Aws::String& value) { SetRecipientId(value); return *this;}
    inline Comment& WithRecipientId(Aws::String&& value) { SetRecipientId(std::move(value)); return *this;}
    inline Comment& WithRecipientId(const char* value) { SetRecipientId(value); return *this;}
    ///@}
  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_threadId;
    bool m_threadIdHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    User m_contributor;
    bool m_contributorHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    CommentStatusType m_status;
    bool m_statusHasBeenSet = false;

    CommentVisibilityType m_visibility;
    bool m_visibilityHasBeenSet = false;

    Aws::String m_recipientId;
    bool m_recipientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
