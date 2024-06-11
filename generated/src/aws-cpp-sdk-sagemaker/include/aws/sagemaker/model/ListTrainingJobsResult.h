/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingJobSummary.h>
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
  class ListTrainingJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListTrainingJobsResult();
    AWS_SAGEMAKER_API ListTrainingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrainingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>TrainingJobSummary</code> objects, each listing a training
     * job.</p>
     */
    inline const Aws::Vector<TrainingJobSummary>& GetTrainingJobSummaries() const{ return m_trainingJobSummaries; }
    inline void SetTrainingJobSummaries(const Aws::Vector<TrainingJobSummary>& value) { m_trainingJobSummaries = value; }
    inline void SetTrainingJobSummaries(Aws::Vector<TrainingJobSummary>&& value) { m_trainingJobSummaries = std::move(value); }
    inline ListTrainingJobsResult& WithTrainingJobSummaries(const Aws::Vector<TrainingJobSummary>& value) { SetTrainingJobSummaries(value); return *this;}
    inline ListTrainingJobsResult& WithTrainingJobSummaries(Aws::Vector<TrainingJobSummary>&& value) { SetTrainingJobSummaries(std::move(value)); return *this;}
    inline ListTrainingJobsResult& AddTrainingJobSummaries(const TrainingJobSummary& value) { m_trainingJobSummaries.push_back(value); return *this; }
    inline ListTrainingJobsResult& AddTrainingJobSummaries(TrainingJobSummary&& value) { m_trainingJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrainingJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrainingJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrainingJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrainingJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrainingJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrainingJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrainingJobSummary> m_trainingJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
