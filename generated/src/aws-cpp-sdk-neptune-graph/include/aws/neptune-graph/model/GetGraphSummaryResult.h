/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune-graph/model/GraphDataSummary.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class GetGraphSummaryResult
  {
  public:
    AWS_NEPTUNEGRAPH_API GetGraphSummaryResult() = default;
    AWS_NEPTUNEGRAPH_API GetGraphSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetGraphSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Display the version of this tool.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    GetGraphSummaryResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune Analytics
     * last computed statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatisticsComputationTime() const { return m_lastStatisticsComputationTime; }
    template<typename LastStatisticsComputationTimeT = Aws::Utils::DateTime>
    void SetLastStatisticsComputationTime(LastStatisticsComputationTimeT&& value) { m_lastStatisticsComputationTimeHasBeenSet = true; m_lastStatisticsComputationTime = std::forward<LastStatisticsComputationTimeT>(value); }
    template<typename LastStatisticsComputationTimeT = Aws::Utils::DateTime>
    GetGraphSummaryResult& WithLastStatisticsComputationTime(LastStatisticsComputationTimeT&& value) { SetLastStatisticsComputationTime(std::forward<LastStatisticsComputationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph summary.</p>
     */
    inline const GraphDataSummary& GetGraphSummary() const { return m_graphSummary; }
    template<typename GraphSummaryT = GraphDataSummary>
    void SetGraphSummary(GraphSummaryT&& value) { m_graphSummaryHasBeenSet = true; m_graphSummary = std::forward<GraphSummaryT>(value); }
    template<typename GraphSummaryT = GraphDataSummary>
    GetGraphSummaryResult& WithGraphSummary(GraphSummaryT&& value) { SetGraphSummary(std::forward<GraphSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGraphSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatisticsComputationTime{};
    bool m_lastStatisticsComputationTimeHasBeenSet = false;

    GraphDataSummary m_graphSummary;
    bool m_graphSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
