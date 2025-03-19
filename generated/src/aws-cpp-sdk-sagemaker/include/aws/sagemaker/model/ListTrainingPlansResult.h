/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrainingPlanSummary.h>
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
  class ListTrainingPlansResult
  {
  public:
    AWS_SAGEMAKER_API ListTrainingPlansResult() = default;
    AWS_SAGEMAKER_API ListTrainingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrainingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token to continue pagination if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrainingPlansResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of summary information for the training plans.</p>
     */
    inline const Aws::Vector<TrainingPlanSummary>& GetTrainingPlanSummaries() const { return m_trainingPlanSummaries; }
    template<typename TrainingPlanSummariesT = Aws::Vector<TrainingPlanSummary>>
    void SetTrainingPlanSummaries(TrainingPlanSummariesT&& value) { m_trainingPlanSummariesHasBeenSet = true; m_trainingPlanSummaries = std::forward<TrainingPlanSummariesT>(value); }
    template<typename TrainingPlanSummariesT = Aws::Vector<TrainingPlanSummary>>
    ListTrainingPlansResult& WithTrainingPlanSummaries(TrainingPlanSummariesT&& value) { SetTrainingPlanSummaries(std::forward<TrainingPlanSummariesT>(value)); return *this;}
    template<typename TrainingPlanSummariesT = TrainingPlanSummary>
    ListTrainingPlansResult& AddTrainingPlanSummaries(TrainingPlanSummariesT&& value) { m_trainingPlanSummariesHasBeenSet = true; m_trainingPlanSummaries.emplace_back(std::forward<TrainingPlanSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrainingPlansResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TrainingPlanSummary> m_trainingPlanSummaries;
    bool m_trainingPlanSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
