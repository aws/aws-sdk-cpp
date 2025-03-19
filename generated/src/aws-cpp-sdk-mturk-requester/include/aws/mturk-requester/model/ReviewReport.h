/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ReviewResultDetail.h>
#include <aws/mturk-requester/model/ReviewActionDetail.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> Contains both ReviewResult and ReviewAction elements for a particular HIT.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewReport">AWS
   * API Reference</a></p>
   */
  class ReviewReport
  {
  public:
    AWS_MTURK_API ReviewReport() = default;
    AWS_MTURK_API ReviewReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline const Aws::Vector<ReviewResultDetail>& GetReviewResults() const { return m_reviewResults; }
    inline bool ReviewResultsHasBeenSet() const { return m_reviewResultsHasBeenSet; }
    template<typename ReviewResultsT = Aws::Vector<ReviewResultDetail>>
    void SetReviewResults(ReviewResultsT&& value) { m_reviewResultsHasBeenSet = true; m_reviewResults = std::forward<ReviewResultsT>(value); }
    template<typename ReviewResultsT = Aws::Vector<ReviewResultDetail>>
    ReviewReport& WithReviewResults(ReviewResultsT&& value) { SetReviewResults(std::forward<ReviewResultsT>(value)); return *this;}
    template<typename ReviewResultsT = ReviewResultDetail>
    ReviewReport& AddReviewResults(ReviewResultsT&& value) { m_reviewResultsHasBeenSet = true; m_reviewResults.emplace_back(std::forward<ReviewResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline const Aws::Vector<ReviewActionDetail>& GetReviewActions() const { return m_reviewActions; }
    inline bool ReviewActionsHasBeenSet() const { return m_reviewActionsHasBeenSet; }
    template<typename ReviewActionsT = Aws::Vector<ReviewActionDetail>>
    void SetReviewActions(ReviewActionsT&& value) { m_reviewActionsHasBeenSet = true; m_reviewActions = std::forward<ReviewActionsT>(value); }
    template<typename ReviewActionsT = Aws::Vector<ReviewActionDetail>>
    ReviewReport& WithReviewActions(ReviewActionsT&& value) { SetReviewActions(std::forward<ReviewActionsT>(value)); return *this;}
    template<typename ReviewActionsT = ReviewActionDetail>
    ReviewReport& AddReviewActions(ReviewActionsT&& value) { m_reviewActionsHasBeenSet = true; m_reviewActions.emplace_back(std::forward<ReviewActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ReviewResultDetail> m_reviewResults;
    bool m_reviewResultsHasBeenSet = false;

    Aws::Vector<ReviewActionDetail> m_reviewActions;
    bool m_reviewActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
