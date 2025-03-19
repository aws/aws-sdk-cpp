/**
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
    AWS_CLOUDWATCHRUM_API ListAppMonitorsResult() = default;
    AWS_CLOUDWATCHRUM_API ListAppMonitorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API ListAppMonitorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain information about the returned app
     * monitors.</p>
     */
    inline const Aws::Vector<AppMonitorSummary>& GetAppMonitorSummaries() const { return m_appMonitorSummaries; }
    template<typename AppMonitorSummariesT = Aws::Vector<AppMonitorSummary>>
    void SetAppMonitorSummaries(AppMonitorSummariesT&& value) { m_appMonitorSummariesHasBeenSet = true; m_appMonitorSummaries = std::forward<AppMonitorSummariesT>(value); }
    template<typename AppMonitorSummariesT = Aws::Vector<AppMonitorSummary>>
    ListAppMonitorsResult& WithAppMonitorSummaries(AppMonitorSummariesT&& value) { SetAppMonitorSummaries(std::forward<AppMonitorSummariesT>(value)); return *this;}
    template<typename AppMonitorSummariesT = AppMonitorSummary>
    ListAppMonitorsResult& AddAppMonitorSummaries(AppMonitorSummariesT&& value) { m_appMonitorSummariesHasBeenSet = true; m_appMonitorSummaries.emplace_back(std::forward<AppMonitorSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppMonitorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppMonitorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppMonitorSummary> m_appMonitorSummaries;
    bool m_appMonitorSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
