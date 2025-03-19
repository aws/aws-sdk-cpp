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
    AWS_WORKDOCS_API Comment() = default;
    AWS_WORKDOCS_API Comment(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the comment.</p>
     */
    inline const Aws::String& GetCommentId() const { return m_commentId; }
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }
    template<typename CommentIdT = Aws::String>
    void SetCommentId(CommentIdT&& value) { m_commentIdHasBeenSet = true; m_commentId = std::forward<CommentIdT>(value); }
    template<typename CommentIdT = Aws::String>
    Comment& WithCommentId(CommentIdT&& value) { SetCommentId(std::forward<CommentIdT>(value)); return *this;}
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
    Comment& WithParentId(ParentIdT&& value) { SetParentId(std::forward<ParentIdT>(value)); return *this;}
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
    Comment& WithThreadId(ThreadIdT&& value) { SetThreadId(std::forward<ThreadIdT>(value)); return *this;}
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
    Comment& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline const User& GetContributor() const { return m_contributor; }
    inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }
    template<typename ContributorT = User>
    void SetContributor(ContributorT&& value) { m_contributorHasBeenSet = true; m_contributor = std::forward<ContributorT>(value); }
    template<typename ContributorT = User>
    Comment& WithContributor(ContributorT&& value) { SetContributor(std::forward<ContributorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the comment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    Comment& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the comment.</p>
     */
    inline CommentStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CommentStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline Comment& WithStatus(CommentStatusType value) { SetStatus(value); return *this;}
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
    inline Comment& WithVisibility(CommentVisibilityType value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline const Aws::String& GetRecipientId() const { return m_recipientId; }
    inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }
    template<typename RecipientIdT = Aws::String>
    void SetRecipientId(RecipientIdT&& value) { m_recipientIdHasBeenSet = true; m_recipientId = std::forward<RecipientIdT>(value); }
    template<typename RecipientIdT = Aws::String>
    Comment& WithRecipientId(RecipientIdT&& value) { SetRecipientId(std::forward<RecipientIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    CommentStatusType m_status{CommentStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    CommentVisibilityType m_visibility{CommentVisibilityType::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Aws::String m_recipientId;
    bool m_recipientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
