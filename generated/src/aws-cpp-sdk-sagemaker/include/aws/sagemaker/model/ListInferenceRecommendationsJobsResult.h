﻿/**
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


    ///@{
    /**
     * <p>The recommendations created from the Amazon SageMaker Inference Recommender
     * job.</p>
     */
    inline const Aws::Vector<InferenceRecommendationsJob>& GetInferenceRecommendationsJobs() const{ return m_inferenceRecommendationsJobs; }
    inline void SetInferenceRecommendationsJobs(const Aws::Vector<InferenceRecommendationsJob>& value) { m_inferenceRecommendationsJobs = value; }
    inline void SetInferenceRecommendationsJobs(Aws::Vector<InferenceRecommendationsJob>&& value) { m_inferenceRecommendationsJobs = std::move(value); }
    inline ListInferenceRecommendationsJobsResult& WithInferenceRecommendationsJobs(const Aws::Vector<InferenceRecommendationsJob>& value) { SetInferenceRecommendationsJobs(value); return *this;}
    inline ListInferenceRecommendationsJobsResult& WithInferenceRecommendationsJobs(Aws::Vector<InferenceRecommendationsJob>&& value) { SetInferenceRecommendationsJobs(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsResult& AddInferenceRecommendationsJobs(const InferenceRecommendationsJob& value) { m_inferenceRecommendationsJobs.push_back(value); return *this; }
    inline ListInferenceRecommendationsJobsResult& AddInferenceRecommendationsJobs(InferenceRecommendationsJob&& value) { m_inferenceRecommendationsJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of recommendations, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInferenceRecommendationsJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceRecommendationsJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInferenceRecommendationsJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInferenceRecommendationsJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InferenceRecommendationsJob> m_inferenceRecommendationsJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
