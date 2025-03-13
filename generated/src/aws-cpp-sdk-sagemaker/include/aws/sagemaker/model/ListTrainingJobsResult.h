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
    AWS_SAGEMAKER_API ListTrainingJobsResult() = default;
    AWS_SAGEMAKER_API ListTrainingJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrainingJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>TrainingJobSummary</code> objects, each listing a training
     * job.</p>
     */
    inline const Aws::Vector<TrainingJobSummary>& GetTrainingJobSummaries() const { return m_trainingJobSummaries; }
    template<typename TrainingJobSummariesT = Aws::Vector<TrainingJobSummary>>
    void SetTrainingJobSummaries(TrainingJobSummariesT&& value) { m_trainingJobSummariesHasBeenSet = true; m_trainingJobSummaries = std::forward<TrainingJobSummariesT>(value); }
    template<typename TrainingJobSummariesT = Aws::Vector<TrainingJobSummary>>
    ListTrainingJobsResult& WithTrainingJobSummaries(TrainingJobSummariesT&& value) { SetTrainingJobSummaries(std::forward<TrainingJobSummariesT>(value)); return *this;}
    template<typename TrainingJobSummariesT = TrainingJobSummary>
    ListTrainingJobsResult& AddTrainingJobSummaries(TrainingJobSummariesT&& value) { m_trainingJobSummariesHasBeenSet = true; m_trainingJobSummaries.emplace_back(std::forward<TrainingJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of training jobs, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrainingJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrainingJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrainingJobSummary> m_trainingJobSummaries;
    bool m_trainingJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
