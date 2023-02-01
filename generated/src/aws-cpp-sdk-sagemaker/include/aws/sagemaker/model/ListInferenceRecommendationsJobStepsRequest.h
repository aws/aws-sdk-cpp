/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/sagemaker/model/RecommendationStepType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListInferenceRecommendationsJobStepsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobStepsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceRecommendationsJobSteps"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the Inference Recommender job.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>A filter to return benchmarks of a specified status. If this field is left
     * empty, then all benchmarks are returned.</p>
     */
    inline const RecommendationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A filter to return benchmarks of a specified status. If this field is left
     * empty, then all benchmarks are returned.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A filter to return benchmarks of a specified status. If this field is left
     * empty, then all benchmarks are returned.</p>
     */
    inline void SetStatus(const RecommendationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A filter to return benchmarks of a specified status. If this field is left
     * empty, then all benchmarks are returned.</p>
     */
    inline void SetStatus(RecommendationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A filter to return benchmarks of a specified status. If this field is left
     * empty, then all benchmarks are returned.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithStatus(const RecommendationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A filter to return benchmarks of a specified status. If this field is left
     * empty, then all benchmarks are returned.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithStatus(RecommendationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A filter to return details about the specified type of subtask.</p> <p>
     * <code>BENCHMARK</code>: Evaluate the performance of your model on different
     * instance types.</p>
     */
    inline const RecommendationStepType& GetStepType() const{ return m_stepType; }

    /**
     * <p>A filter to return details about the specified type of subtask.</p> <p>
     * <code>BENCHMARK</code>: Evaluate the performance of your model on different
     * instance types.</p>
     */
    inline bool StepTypeHasBeenSet() const { return m_stepTypeHasBeenSet; }

    /**
     * <p>A filter to return details about the specified type of subtask.</p> <p>
     * <code>BENCHMARK</code>: Evaluate the performance of your model on different
     * instance types.</p>
     */
    inline void SetStepType(const RecommendationStepType& value) { m_stepTypeHasBeenSet = true; m_stepType = value; }

    /**
     * <p>A filter to return details about the specified type of subtask.</p> <p>
     * <code>BENCHMARK</code>: Evaluate the performance of your model on different
     * instance types.</p>
     */
    inline void SetStepType(RecommendationStepType&& value) { m_stepTypeHasBeenSet = true; m_stepType = std::move(value); }

    /**
     * <p>A filter to return details about the specified type of subtask.</p> <p>
     * <code>BENCHMARK</code>: Evaluate the performance of your model on different
     * instance types.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithStepType(const RecommendationStepType& value) { SetStepType(value); return *this;}

    /**
     * <p>A filter to return details about the specified type of subtask.</p> <p>
     * <code>BENCHMARK</code>: Evaluate the performance of your model on different
     * instance types.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithStepType(RecommendationStepType&& value) { SetStepType(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can specify to return more results from the list. Specify
     * this field if you have a token that was returned from a previous request.</p>
     */
    inline ListInferenceRecommendationsJobStepsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    RecommendationJobStatus m_status;
    bool m_statusHasBeenSet = false;

    RecommendationStepType m_stepType;
    bool m_stepTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
