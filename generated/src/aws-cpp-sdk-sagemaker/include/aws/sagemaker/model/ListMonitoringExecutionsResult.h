﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
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
  class ListMonitoringExecutionsResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult();
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline const Aws::Vector<MonitoringExecutionSummary>& GetMonitoringExecutionSummaries() const{ return m_monitoringExecutionSummaries; }
    inline void SetMonitoringExecutionSummaries(const Aws::Vector<MonitoringExecutionSummary>& value) { m_monitoringExecutionSummaries = value; }
    inline void SetMonitoringExecutionSummaries(Aws::Vector<MonitoringExecutionSummary>&& value) { m_monitoringExecutionSummaries = std::move(value); }
    inline ListMonitoringExecutionsResult& WithMonitoringExecutionSummaries(const Aws::Vector<MonitoringExecutionSummary>& value) { SetMonitoringExecutionSummaries(value); return *this;}
    inline ListMonitoringExecutionsResult& WithMonitoringExecutionSummaries(Aws::Vector<MonitoringExecutionSummary>&& value) { SetMonitoringExecutionSummaries(std::move(value)); return *this;}
    inline ListMonitoringExecutionsResult& AddMonitoringExecutionSummaries(const MonitoringExecutionSummary& value) { m_monitoringExecutionSummaries.push_back(value); return *this; }
    inline ListMonitoringExecutionsResult& AddMonitoringExecutionSummaries(MonitoringExecutionSummary&& value) { m_monitoringExecutionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMonitoringExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMonitoringExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMonitoringExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMonitoringExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMonitoringExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMonitoringExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringExecutionSummary> m_monitoringExecutionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
