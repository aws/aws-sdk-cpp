/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceRecommendationsJob.h>
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
  class ListInferenceRecommendationsJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsResult();
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline const Aws::Vector<InferenceRecommendationsJob>& GetInferenceRecommendationsJobs() const{ return m_inferenceRecommendationsJobs; }

    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline void SetInferenceRecommendationsJobs(const Aws::Vector<InferenceRecommendationsJob>& value) { m_inferenceRecommendationsJobs = value; }

    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline void SetInferenceRecommendationsJobs(Aws::Vector<InferenceRecommendationsJob>&& value) { m_inferenceRecommendationsJobs = std::move(value); }

    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline ListInferenceRecommendationsJobsResult& WithInferenceRecommendationsJobs(const Aws::Vector<InferenceRecommendationsJob>& value) { SetInferenceRecommendationsJobs(value); return *this;}

    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline ListInferenceRecommendationsJobsResult& WithInferenceRecommendationsJobs(Aws::Vector<InferenceRecommendationsJob>&& value) { SetInferenceRecommendationsJobs(std::move(value)); return *this;}

    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline ListInferenceRecommendationsJobsResult& AddInferenceRecommendationsJobs(const InferenceRecommendationsJob& value) { m_inferenceRecommendationsJobs.push_back(value); return *this; }

    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline ListInferenceRecommendationsJobsResult& AddInferenceRecommendationsJobs(InferenceRecommendationsJob&& value) { m_inferenceRecommendationsJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline ListInferenceRecommendationsJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline ListInferenceRecommendationsJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline ListInferenceRecommendationsJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InferenceRecommendationsJob> m_inferenceRecommendationsJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
