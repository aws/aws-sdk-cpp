﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringAlertHistorySummary.h>
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
  class ListMonitoringAlertHistoryResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryResult();
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An alert history for a model monitoring schedule.</p>
     */
    inline const Aws::Vector<MonitoringAlertHistorySummary>& GetMonitoringAlertHistory() const{ return m_monitoringAlertHistory; }
    inline void SetMonitoringAlertHistory(const Aws::Vector<MonitoringAlertHistorySummary>& value) { m_monitoringAlertHistory = value; }
    inline void SetMonitoringAlertHistory(Aws::Vector<MonitoringAlertHistorySummary>&& value) { m_monitoringAlertHistory = std::move(value); }
    inline ListMonitoringAlertHistoryResult& WithMonitoringAlertHistory(const Aws::Vector<MonitoringAlertHistorySummary>& value) { SetMonitoringAlertHistory(value); return *this;}
    inline ListMonitoringAlertHistoryResult& WithMonitoringAlertHistory(Aws::Vector<MonitoringAlertHistorySummary>&& value) { SetMonitoringAlertHistory(std::move(value)); return *this;}
    inline ListMonitoringAlertHistoryResult& AddMonitoringAlertHistory(const MonitoringAlertHistorySummary& value) { m_monitoringAlertHistory.push_back(value); return *this; }
    inline ListMonitoringAlertHistoryResult& AddMonitoringAlertHistory(MonitoringAlertHistorySummary&& value) { m_monitoringAlertHistory.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMonitoringAlertHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMonitoringAlertHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMonitoringAlertHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMonitoringAlertHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMonitoringAlertHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMonitoringAlertHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MonitoringAlertHistorySummary> m_monitoringAlertHistory;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
