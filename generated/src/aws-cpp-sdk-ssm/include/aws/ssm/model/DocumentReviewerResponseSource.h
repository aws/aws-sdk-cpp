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
    AWS_SSM_API DocumentReviewerResponseSource();
    AWS_SSM_API DocumentReviewerResponseSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentReviewerResponseSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that a reviewer entered a response to a document review
     * request.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline DocumentReviewerResponseSource& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline DocumentReviewerResponseSource& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a reviewer last updated a response to a document
     * review request.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTime() const{ return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    inline void SetUpdatedTime(const Aws::Utils::DateTime& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }
    inline void SetUpdatedTime(Aws::Utils::DateTime&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }
    inline DocumentReviewerResponseSource& WithUpdatedTime(const Aws::Utils::DateTime& value) { SetUpdatedTime(value); return *this;}
    inline DocumentReviewerResponseSource& WithUpdatedTime(Aws::Utils::DateTime&& value) { SetUpdatedTime(std::move(value)); return *this;}
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
    inline const ReviewStatus& GetReviewStatus() const{ return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(const ReviewStatus& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline void SetReviewStatus(ReviewStatus&& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = std::move(value); }
    inline DocumentReviewerResponseSource& WithReviewStatus(const ReviewStatus& value) { SetReviewStatus(value); return *this;}
    inline DocumentReviewerResponseSource& WithReviewStatus(ReviewStatus&& value) { SetReviewStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comment entered by a reviewer as part of their document review
     * response.</p>
     */
    inline const Aws::Vector<DocumentReviewCommentSource>& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::Vector<DocumentReviewCommentSource>& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::Vector<DocumentReviewCommentSource>&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline DocumentReviewerResponseSource& WithComment(const Aws::Vector<DocumentReviewCommentSource>& value) { SetComment(value); return *this;}
    inline DocumentReviewerResponseSource& WithComment(Aws::Vector<DocumentReviewCommentSource>&& value) { SetComment(std::move(value)); return *this;}
    inline DocumentReviewerResponseSource& AddComment(const DocumentReviewCommentSource& value) { m_commentHasBeenSet = true; m_comment.push_back(value); return *this; }
    inline DocumentReviewerResponseSource& AddComment(DocumentReviewCommentSource&& value) { m_commentHasBeenSet = true; m_comment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user in your organization assigned to review a document request.</p>
     */
    inline const Aws::String& GetReviewer() const{ return m_reviewer; }
    inline bool ReviewerHasBeenSet() const { return m_reviewerHasBeenSet; }
    inline void SetReviewer(const Aws::String& value) { m_reviewerHasBeenSet = true; m_reviewer = value; }
    inline void SetReviewer(Aws::String&& value) { m_reviewerHasBeenSet = true; m_reviewer = std::move(value); }
    inline void SetReviewer(const char* value) { m_reviewerHasBeenSet = true; m_reviewer.assign(value); }
    inline DocumentReviewerResponseSource& WithReviewer(const Aws::String& value) { SetReviewer(value); return *this;}
    inline DocumentReviewerResponseSource& WithReviewer(Aws::String&& value) { SetReviewer(std::move(value)); return *this;}
    inline DocumentReviewerResponseSource& WithReviewer(const char* value) { SetReviewer(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;

    ReviewStatus m_reviewStatus;
    bool m_reviewStatusHasBeenSet = false;

    Aws::Vector<DocumentReviewCommentSource> m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_reviewer;
    bool m_reviewerHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
