﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/AppMonitorSummary.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class ListAppMonitorsResult
  {
  public:
    AWS_CLOUDWATCHRUM_API ListAppMonitorsResult();
    AWS_CLOUDWATCHRUM_API ListAppMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API ListAppMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain information about the returned app
     * monitors.</p>
     */
    inline const Aws::Vector<AppMonitorSummary>& GetAppMonitorSummaries() const{ return m_appMonitorSummaries; }
    inline void SetAppMonitorSummaries(const Aws::Vector<AppMonitorSummary>& value) { m_appMonitorSummaries = value; }
    inline void SetAppMonitorSummaries(Aws::Vector<AppMonitorSummary>&& value) { m_appMonitorSummaries = std::move(value); }
    inline ListAppMonitorsResult& WithAppMonitorSummaries(const Aws::Vector<AppMonitorSummary>& value) { SetAppMonitorSummaries(value); return *this;}
    inline ListAppMonitorsResult& WithAppMonitorSummaries(Aws::Vector<AppMonitorSummary>&& value) { SetAppMonitorSummaries(std::move(value)); return *this;}
    inline ListAppMonitorsResult& AddAppMonitorSummaries(const AppMonitorSummary& value) { m_appMonitorSummaries.push_back(value); return *this; }
    inline ListAppMonitorsResult& AddAppMonitorSummaries(AppMonitorSummary&& value) { m_appMonitorSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAppMonitorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppMonitorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppMonitorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAppMonitorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAppMonitorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAppMonitorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AppMonitorSummary> m_appMonitorSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
