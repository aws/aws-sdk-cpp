/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringJobDefinitionSummary.h>
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
  class ListModelBiasJobDefinitionsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelBiasJobDefinitionsResult() = default;
    AWS_SAGEMAKER_API ListModelBiasJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelBiasJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON array in which each element is a summary for a model bias jobs.</p>
     */
    inline const Aws::Vector<MonitoringJobDefinitionSummary>& GetJobDefinitionSummaries() const { return m_jobDefinitionSummaries; }
    template<typename JobDefinitionSummariesT = Aws::Vector<MonitoringJobDefinitionSummary>>
    void SetJobDefinitionSummaries(JobDefinitionSummariesT&& value) { m_jobDefinitionSummariesHasBeenSet = true; m_jobDefinitionSummaries = std::forward<JobDefinitionSummariesT>(value); }
    template<typename JobDefinitionSummariesT = Aws::Vector<MonitoringJobDefinitionSummary>>
    ListModelBiasJobDefinitionsResult& WithJobDefinitionSummaries(JobDefinitionSummariesT&& value) { SetJobDefinitionSummaries(std::forward<JobDefinitionSummariesT>(value)); return *this;}
    template<typename JobDefinitionSummariesT = MonitoringJobDefinitionSummary>
    ListModelBiasJobDefinitionsResult& AddJobDefinitionSummaries(JobDefinitionSummariesT&& value) { m_jobDefinitionSummariesHasBeenSet = true; m_jobDefinitionSummaries.emplace_back(std::forward<JobDefinitionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelBiasJobDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListModelBiasJobDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringJobDefinitionSummary> m_jobDefinitionSummaries;
    bool m_jobDefinitionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
