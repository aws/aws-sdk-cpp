/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingPlanSortBy.h>
#include <aws/sagemaker/model/TrainingPlanSortOrder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrainingPlanFilter.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListTrainingPlansRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListTrainingPlansRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrainingPlans"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A token to continue pagination if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrainingPlansRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTrainingPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to list only training plans with an actual start time after this
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimeAfter() const { return m_startTimeAfter; }
    inline bool StartTimeAfterHasBeenSet() const { return m_startTimeAfterHasBeenSet; }
    template<typename StartTimeAfterT = Aws::Utils::DateTime>
    void SetStartTimeAfter(StartTimeAfterT&& value) { m_startTimeAfterHasBeenSet = true; m_startTimeAfter = std::forward<StartTimeAfterT>(value); }
    template<typename StartTimeAfterT = Aws::Utils::DateTime>
    ListTrainingPlansRequest& WithStartTimeAfter(StartTimeAfterT&& value) { SetStartTimeAfter(std::forward<StartTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to list only training plans with an actual start time before this
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimeBefore() const { return m_startTimeBefore; }
    inline bool StartTimeBeforeHasBeenSet() const { return m_startTimeBeforeHasBeenSet; }
    template<typename StartTimeBeforeT = Aws::Utils::DateTime>
    void SetStartTimeBefore(StartTimeBeforeT&& value) { m_startTimeBeforeHasBeenSet = true; m_startTimeBefore = std::forward<StartTimeBeforeT>(value); }
    template<typename StartTimeBeforeT = Aws::Utils::DateTime>
    ListTrainingPlansRequest& WithStartTimeBefore(StartTimeBeforeT&& value) { SetStartTimeBefore(std::forward<StartTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training plan field to sort the results by (e.g., StartTime, Status).</p>
     */
    inline TrainingPlanSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(TrainingPlanSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListTrainingPlansRequest& WithSortBy(TrainingPlanSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort the results (Ascending or Descending).</p>
     */
    inline TrainingPlanSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(TrainingPlanSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListTrainingPlansRequest& WithSortOrder(TrainingPlanSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional filters to apply to the list of training plans.</p>
     */
    inline const Aws::Vector<TrainingPlanFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<TrainingPlanFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<TrainingPlanFilter>>
    ListTrainingPlansRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = TrainingPlanFilter>
    ListTrainingPlansRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeAfter{};
    bool m_startTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeBefore{};
    bool m_startTimeBeforeHasBeenSet = false;

    TrainingPlanSortBy m_sortBy{TrainingPlanSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    TrainingPlanSortOrder m_sortOrder{TrainingPlanSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::Vector<TrainingPlanFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
