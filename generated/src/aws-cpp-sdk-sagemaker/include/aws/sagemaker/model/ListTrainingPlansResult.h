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
    AWS_SAGEMAKER_API ListTrainingPlansResult();
    AWS_SAGEMAKER_API ListTrainingPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListTrainingPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token to continue pagination if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrainingPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrainingPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrainingPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of summary information for the training plans.</p>
     */
    inline const Aws::Vector<TrainingPlanSummary>& GetTrainingPlanSummaries() const{ return m_trainingPlanSummaries; }
    inline void SetTrainingPlanSummaries(const Aws::Vector<TrainingPlanSummary>& value) { m_trainingPlanSummaries = value; }
    inline void SetTrainingPlanSummaries(Aws::Vector<TrainingPlanSummary>&& value) { m_trainingPlanSummaries = std::move(value); }
    inline ListTrainingPlansResult& WithTrainingPlanSummaries(const Aws::Vector<TrainingPlanSummary>& value) { SetTrainingPlanSummaries(value); return *this;}
    inline ListTrainingPlansResult& WithTrainingPlanSummaries(Aws::Vector<TrainingPlanSummary>&& value) { SetTrainingPlanSummaries(std::move(value)); return *this;}
    inline ListTrainingPlansResult& AddTrainingPlanSummaries(const TrainingPlanSummary& value) { m_trainingPlanSummaries.push_back(value); return *this; }
    inline ListTrainingPlansResult& AddTrainingPlanSummaries(TrainingPlanSummary&& value) { m_trainingPlanSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrainingPlansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrainingPlansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrainingPlansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TrainingPlanSummary> m_trainingPlanSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
