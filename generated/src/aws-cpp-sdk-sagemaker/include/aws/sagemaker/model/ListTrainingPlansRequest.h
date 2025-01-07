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
    AWS_SAGEMAKER_API ListTrainingPlansRequest();

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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTrainingPlansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrainingPlansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrainingPlansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTrainingPlansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to list only training plans with an actual start time after this
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimeAfter() const{ return m_startTimeAfter; }
    inline bool StartTimeAfterHasBeenSet() const { return m_startTimeAfterHasBeenSet; }
    inline void SetStartTimeAfter(const Aws::Utils::DateTime& value) { m_startTimeAfterHasBeenSet = true; m_startTimeAfter = value; }
    inline void SetStartTimeAfter(Aws::Utils::DateTime&& value) { m_startTimeAfterHasBeenSet = true; m_startTimeAfter = std::move(value); }
    inline ListTrainingPlansRequest& WithStartTimeAfter(const Aws::Utils::DateTime& value) { SetStartTimeAfter(value); return *this;}
    inline ListTrainingPlansRequest& WithStartTimeAfter(Aws::Utils::DateTime&& value) { SetStartTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to list only training plans with an actual start time before this
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimeBefore() const{ return m_startTimeBefore; }
    inline bool StartTimeBeforeHasBeenSet() const { return m_startTimeBeforeHasBeenSet; }
    inline void SetStartTimeBefore(const Aws::Utils::DateTime& value) { m_startTimeBeforeHasBeenSet = true; m_startTimeBefore = value; }
    inline void SetStartTimeBefore(Aws::Utils::DateTime&& value) { m_startTimeBeforeHasBeenSet = true; m_startTimeBefore = std::move(value); }
    inline ListTrainingPlansRequest& WithStartTimeBefore(const Aws::Utils::DateTime& value) { SetStartTimeBefore(value); return *this;}
    inline ListTrainingPlansRequest& WithStartTimeBefore(Aws::Utils::DateTime&& value) { SetStartTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The training plan field to sort the results by (e.g., StartTime, Status).</p>
     */
    inline const TrainingPlanSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const TrainingPlanSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(TrainingPlanSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListTrainingPlansRequest& WithSortBy(const TrainingPlanSortBy& value) { SetSortBy(value); return *this;}
    inline ListTrainingPlansRequest& WithSortBy(TrainingPlanSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort the results (Ascending or Descending).</p>
     */
    inline const TrainingPlanSortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const TrainingPlanSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(TrainingPlanSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListTrainingPlansRequest& WithSortOrder(const TrainingPlanSortOrder& value) { SetSortOrder(value); return *this;}
    inline ListTrainingPlansRequest& WithSortOrder(TrainingPlanSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional filters to apply to the list of training plans.</p>
     */
    inline const Aws::Vector<TrainingPlanFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<TrainingPlanFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<TrainingPlanFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListTrainingPlansRequest& WithFilters(const Aws::Vector<TrainingPlanFilter>& value) { SetFilters(value); return *this;}
    inline ListTrainingPlansRequest& WithFilters(Aws::Vector<TrainingPlanFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListTrainingPlansRequest& AddFilters(const TrainingPlanFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListTrainingPlansRequest& AddFilters(TrainingPlanFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeAfter;
    bool m_startTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeBefore;
    bool m_startTimeBeforeHasBeenSet = false;

    TrainingPlanSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    TrainingPlanSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::Vector<TrainingPlanFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
