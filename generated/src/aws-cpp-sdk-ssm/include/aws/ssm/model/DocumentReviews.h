/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentReviewAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about a document approval review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/DocumentReviews">AWS
   * API Reference</a></p>
   */
  class DocumentReviews
  {
  public:
    AWS_SSM_API DocumentReviews();
    AWS_SSM_API DocumentReviews(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentReviews& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline const DocumentReviewAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline void SetAction(const DocumentReviewAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline void SetAction(DocumentReviewAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline DocumentReviews& WithAction(const DocumentReviewAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline DocumentReviews& WithAction(DocumentReviewAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline const Aws::Vector<DocumentReviewCommentSource>& GetComment() const{ return m_comment; }

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline void SetComment(const Aws::Vector<DocumentReviewCommentSource>& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline void SetComment(Aws::Vector<DocumentReviewCommentSource>&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline DocumentReviews& WithComment(const Aws::Vector<DocumentReviewCommentSource>& value) { SetComment(value); return *this;}

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline DocumentReviews& WithComment(Aws::Vector<DocumentReviewCommentSource>&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline DocumentReviews& AddComment(const DocumentReviewCommentSource& value) { m_commentHasBeenSet = true; m_comment.push_back(value); return *this; }

    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline DocumentReviews& AddComment(DocumentReviewCommentSource&& value) { m_commentHasBeenSet = true; m_comment.push_back(std::move(value)); return *this; }

  private:

    DocumentReviewAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<DocumentReviewCommentSource> m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
