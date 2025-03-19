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
    AWS_SSM_API DocumentReviews() = default;
    AWS_SSM_API DocumentReviews(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API DocumentReviews& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to take on a document approval review request.</p>
     */
    inline DocumentReviewAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(DocumentReviewAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline DocumentReviews& WithAction(DocumentReviewAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment entered by a user in your organization about the document review
     * request.</p>
     */
    inline const Aws::Vector<DocumentReviewCommentSource>& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::Vector<DocumentReviewCommentSource>>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::Vector<DocumentReviewCommentSource>>
    DocumentReviews& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    template<typename CommentT = DocumentReviewCommentSource>
    DocumentReviews& AddComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment.emplace_back(std::forward<CommentT>(value)); return *this; }
    ///@}
  private:

    DocumentReviewAction m_action{DocumentReviewAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::Vector<DocumentReviewCommentSource> m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
