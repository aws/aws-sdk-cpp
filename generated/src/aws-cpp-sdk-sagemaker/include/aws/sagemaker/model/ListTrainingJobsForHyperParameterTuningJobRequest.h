/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/TrainingJobSortByOptions.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListTrainingJobsForHyperParameterTuningJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListTrainingJobsForHyperParameterTuningJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrainingJobsForHyperParameterTuningJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of training jobs to return. The default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline const TrainingJobStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const TrainingJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(TrainingJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithStatusEquals(const TrainingJobStatus& value) { SetStatusEquals(value); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithStatusEquals(TrainingJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline const TrainingJobSortByOptions& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const TrainingJobSortByOptions& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(TrainingJobSortByOptions&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortBy(const TrainingJobSortByOptions& value) { SetSortBy(value); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortBy(TrainingJobSortByOptions&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    TrainingJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    TrainingJobSortByOptions m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
