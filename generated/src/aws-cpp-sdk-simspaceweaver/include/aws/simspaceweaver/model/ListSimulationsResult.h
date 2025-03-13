/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simspaceweaver/model/SimulationMetadata.h>
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
namespace SimSpaceWeaver
{
namespace Model
{
  class ListSimulationsResult
  {
  public:
    AWS_SIMSPACEWEAVER_API ListSimulationsResult() = default;
    AWS_SIMSPACEWEAVER_API ListSimulationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIMSPACEWEAVER_API ListSimulationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If SimSpace Weaver returns <code>nextToken</code>, then there are more
     * results available. The value of <code>nextToken</code> is a unique pagination
     * token for each page. To retrieve the next page, call the operation again using
     * the returned token. Keep all other arguments unchanged. If no results remain,
     * then <code>nextToken</code> is set to <code>null</code>. Each pagination token
     * expires after 24 hours. If you provide a token that isn't valid, then you
     * receive an <i>HTTP 400 ValidationException</i> error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSimulationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of simulations.</p>
     */
    inline const Aws::Vector<SimulationMetadata>& GetSimulations() const { return m_simulations; }
    template<typename SimulationsT = Aws::Vector<SimulationMetadata>>
    void SetSimulations(SimulationsT&& value) { m_simulationsHasBeenSet = true; m_simulations = std::forward<SimulationsT>(value); }
    template<typename SimulationsT = Aws::Vector<SimulationMetadata>>
    ListSimulationsResult& WithSimulations(SimulationsT&& value) { SetSimulations(std::forward<SimulationsT>(value)); return *this;}
    template<typename SimulationsT = SimulationMetadata>
    ListSimulationsResult& AddSimulations(SimulationsT&& value) { m_simulationsHasBeenSet = true; m_simulations.emplace_back(std::forward<SimulationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSimulationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SimulationMetadata> m_simulations;
    bool m_simulationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
