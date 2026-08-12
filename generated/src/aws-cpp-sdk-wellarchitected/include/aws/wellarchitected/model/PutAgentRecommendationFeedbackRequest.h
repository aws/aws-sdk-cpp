/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/FeedbackCategory.h>
#include <aws/wellarchitected/model/RecommendationFeedbackType.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class PutAgentRecommendationFeedbackRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API PutAgentRecommendationFeedbackRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAgentRecommendationFeedback"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation to provide feedback
   * for.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  PutAgentRecommendationFeedbackRequest& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of feedback being provided.</p>
   */
  inline RecommendationFeedbackType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RecommendationFeedbackType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PutAgentRecommendationFeedbackRequest& WithType(RecommendationFeedbackType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional category classifying the nature of the feedback.</p>
   */
  inline FeedbackCategory GetFeedbackCategory() const { return m_feedbackCategory; }
  inline bool FeedbackCategoryHasBeenSet() const { return m_feedbackCategoryHasBeenSet; }
  inline void SetFeedbackCategory(FeedbackCategory value) {
    m_feedbackCategoryHasBeenSet = true;
    m_feedbackCategory = value;
  }
  inline PutAgentRecommendationFeedbackRequest& WithFeedbackCategory(FeedbackCategory value) {
    SetFeedbackCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional comments providing additional context about the feedback.</p>
   */
  inline const Aws::String& GetComments() const { return m_comments; }
  inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
  template <typename CommentsT = Aws::String>
  void SetComments(CommentsT&& value) {
    m_commentsHasBeenSet = true;
    m_comments = std::forward<CommentsT>(value);
  }
  template <typename CommentsT = Aws::String>
  PutAgentRecommendationFeedbackRequest& WithComments(CommentsT&& value) {
    SetComments(std::forward<CommentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  RecommendationFeedbackType m_type{RecommendationFeedbackType::NOT_SET};

  FeedbackCategory m_feedbackCategory{FeedbackCategory::NOT_SET};

  Aws::String m_comments;
  bool m_recommendationArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_feedbackCategoryHasBeenSet = false;
  bool m_commentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
