/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceRecommendationsJobStep.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class ListInferenceRecommendationsJobStepsResult
  {
  public:
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobStepsResult();
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline const Aws::Vector<InferenceRecommendationsJobStep>& GetSteps() const{ return m_steps; }

    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline void SetSteps(const Aws::Vector<InferenceRecommendationsJobStep>& value) { m_steps = value; }

    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline void SetSteps(Aws::Vector<InferenceRecommendationsJobStep>&& value) { m_steps = std::move(value); }

    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& WithSteps(const Aws::Vector<InferenceRecommendationsJobStep>& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& WithSteps(Aws::Vector<InferenceRecommendationsJobStep>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& AddSteps(const InferenceRecommendationsJobStep& value) { m_steps.push_back(value); return *this; }

    /**
     * <p>A list of all subtask details in Inference Recommender.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& AddSteps(InferenceRecommendationsJobStep&& value) { m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can specify in your next request to return more results from
     * the list.</p>
     */
    inline ListInferenceRecommendationsJobStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InferenceRecommendationsJobStep> m_steps;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
