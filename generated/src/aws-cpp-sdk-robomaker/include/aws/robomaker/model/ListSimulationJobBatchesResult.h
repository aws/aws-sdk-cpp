/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobBatchSummary.h>
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
namespace RoboMaker
{
namespace Model
{
  class ListSimulationJobBatchesResult
  {
  public:
    AWS_ROBOMAKER_API ListSimulationJobBatchesResult() = default;
    AWS_ROBOMAKER_API ListSimulationJobBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListSimulationJobBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline const Aws::Vector<SimulationJobBatchSummary>& GetSimulationJobBatchSummaries() const { return m_simulationJobBatchSummaries; }
    template<typename SimulationJobBatchSummariesT = Aws::Vector<SimulationJobBatchSummary>>
    void SetSimulationJobBatchSummaries(SimulationJobBatchSummariesT&& value) { m_simulationJobBatchSummariesHasBeenSet = true; m_simulationJobBatchSummaries = std::forward<SimulationJobBatchSummariesT>(value); }
    template<typename SimulationJobBatchSummariesT = Aws::Vector<SimulationJobBatchSummary>>
    ListSimulationJobBatchesResult& WithSimulationJobBatchSummaries(SimulationJobBatchSummariesT&& value) { SetSimulationJobBatchSummaries(std::forward<SimulationJobBatchSummariesT>(value)); return *this;}
    template<typename SimulationJobBatchSummariesT = SimulationJobBatchSummary>
    ListSimulationJobBatchesResult& AddSimulationJobBatchSummaries(SimulationJobBatchSummariesT&& value) { m_simulationJobBatchSummariesHasBeenSet = true; m_simulationJobBatchSummaries.emplace_back(std::forward<SimulationJobBatchSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSimulationJobBatchesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSimulationJobBatchesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SimulationJobBatchSummary> m_simulationJobBatchSummaries;
    bool m_simulationJobBatchSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
