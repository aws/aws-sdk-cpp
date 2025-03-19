/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/ReviewStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentReviewCommentSource.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about a reviewer's response to a document review
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentReviewerResponseSource">AWS
   * API Reference</a></p>
   */
  class DocumentReviewerResponseSource
  {
  public:
    AWS_SSM_API DocumentReviewerResponseSource() = default;
    AWS_SSM_API DocumentReviewerResponseSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentReviewerResponseSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that a reviewer entered a response to a document review
     * request.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    DocumentReviewerResponseSource& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a reviewer last updated a response to a document
     * review request.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const { return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    void SetUpdatedTime(UpdatedTimeT&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::forward<UpdatedTimeT>(value); }
    template<typename UpdatedTimeT = Aws::Utils::DateTime>
    DocumentReviewerResponseSource& WithUpdatedTime(UpdatedTimeT&& value) { SetUpdatedTime(std::forward<UpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current review status of a new custom SSM document created by a member of
     * your organization, or of the latest version of an existing SSM document.</p>
     * <p>Only one version of a document can be in the APPROVED state at a time. When a
     * new version is approved, the status of the previous version changes to
     * REJECTED.</p> <p>Only one version of a document can be in review, or PENDING, at
     * a time.</p>
     */
    inline ReviewStatus GetReviewStatus() const { return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(ReviewStatus value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline DocumentReviewerResponseSource& WithReviewStatus(ReviewStatus value) { SetReviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment entered by a reviewer as part of their document review
     * response.</p>
     */
    inline const Aws::Vector<DocumentReviewCommentSource>& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::Vector<DocumentReviewCommentSource>>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::Vector<DocumentReviewCommentSource>>
    DocumentReviewerResponseSource& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    template<typename CommentT = DocumentReviewCommentSource>
    DocumentReviewerResponseSource& AddComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment.emplace_back(std::forward<CommentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user in your organization assigned to review a document request.</p>
     */
    inline const Aws::String& GetReviewer() const { return m_reviewer; }
    inline bool ReviewerHasBeenSet() const { return m_reviewerHasBeenSet; }
    template<typename ReviewerT = Aws::String>
    void SetReviewer(ReviewerT&& value) { m_reviewerHasBeenSet = true; m_reviewer = std::forward<ReviewerT>(value); }
    template<typename ReviewerT = Aws::String>
    DocumentReviewerResponseSource& WithReviewer(ReviewerT&& value) { SetReviewer(std::forward<ReviewerT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime{};
    bool m_updatedTimeHasBeenSet = false;

    ReviewStatus m_reviewStatus{ReviewStatus::NOT_SET};
    bool m_reviewStatusHasBeenSet = false;

    Aws::Vector<DocumentReviewCommentSource> m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_reviewer;
    bool m_reviewerHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
