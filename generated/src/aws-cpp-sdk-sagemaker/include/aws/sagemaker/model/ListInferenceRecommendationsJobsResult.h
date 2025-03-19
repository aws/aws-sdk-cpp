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
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsResult() = default;
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline const Aws::Vector<InferenceRecommendationsJob>& GetInferenceRecommendationsJobs() const { return m_inferenceRecommendationsJobs; }
    template<typename InferenceRecommendationsJobsT = Aws::Vector<InferenceRecommendationsJob>>
    void SetInferenceRecommendationsJobs(InferenceRecommendationsJobsT&& value) { m_inferenceRecommendationsJobsHasBeenSet = true; m_inferenceRecommendationsJobs = std::forward<InferenceRecommendationsJobsT>(value); }
    template<typename InferenceRecommendationsJobsT = Aws::Vector<InferenceRecommendationsJob>>
    ListInferenceRecommendationsJobsResult& WithInferenceRecommendationsJobs(InferenceRecommendationsJobsT&& value) { SetInferenceRecommendationsJobs(std::forward<InferenceRecommendationsJobsT>(value)); return *this;}
    template<typename InferenceRecommendationsJobsT = InferenceRecommendationsJob>
    ListInferenceRecommendationsJobsResult& AddInferenceRecommendationsJobs(InferenceRecommendationsJobsT&& value) { m_inferenceRecommendationsJobsHasBeenSet = true; m_inferenceRecommendationsJobs.emplace_back(std::forward<InferenceRecommendationsJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceRecommendationsJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInferenceRecommendationsJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceRecommendationsJob> m_inferenceRecommendationsJobs;
    bool m_inferenceRecommendationsJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
