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
  class ListModelExplainabilityJobDefinitionsResult
  {
  public:
    AWS_SAGEMAKER_API ListModelExplainabilityJobDefinitionsResult();
    AWS_SAGEMAKER_API ListModelExplainabilityJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListModelExplainabilityJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline const Aws::Vector<MonitoringJobDefinitionSummary>& GetJobDefinitionSummaries() const{ return m_jobDefinitionSummaries; }

    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline void SetJobDefinitionSummaries(const Aws::Vector<MonitoringJobDefinitionSummary>& value) { m_jobDefinitionSummaries = value; }

    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline void SetJobDefinitionSummaries(Aws::Vector<MonitoringJobDefinitionSummary>&& value) { m_jobDefinitionSummaries = std::move(value); }

    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& WithJobDefinitionSummaries(const Aws::Vector<MonitoringJobDefinitionSummary>& value) { SetJobDefinitionSummaries(value); return *this;}

    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& WithJobDefinitionSummaries(Aws::Vector<MonitoringJobDefinitionSummary>&& value) { SetJobDefinitionSummaries(std::move(value)); return *this;}

    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& AddJobDefinitionSummaries(const MonitoringJobDefinitionSummary& value) { m_jobDefinitionSummaries.push_back(value); return *this; }

    /**
     * <p>A JSON array in which each element is a summary for a explainability bias
     * jobs.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& AddJobDefinitionSummaries(MonitoringJobDefinitionSummary&& value) { m_jobDefinitionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListModelExplainabilityJobDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListModelExplainabilityJobDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListModelExplainabilityJobDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListModelExplainabilityJobDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MonitoringJobDefinitionSummary> m_jobDefinitionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
