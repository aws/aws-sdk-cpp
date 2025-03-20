/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FlowOperationMetadata.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class ListFlowOperationsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListFlowOperationsResult() = default;
    AWS_NETWORKFIREWALL_API ListFlowOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListFlowOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Flow operations let you manage the flows tracked in the flow table, also
     * known as the firewall table.</p> <p>A flow is network traffic that is monitored
     * by a firewall, either by stateful or stateless rules. For traffic to be
     * considered part of a flow, it must share Destination, DestinationPort,
     * Direction, Protocol, Source, and SourcePort. </p>
     */
    inline const Aws::Vector<FlowOperationMetadata>& GetFlowOperations() const { return m_flowOperations; }
    template<typename FlowOperationsT = Aws::Vector<FlowOperationMetadata>>
    void SetFlowOperations(FlowOperationsT&& value) { m_flowOperationsHasBeenSet = true; m_flowOperations = std::forward<FlowOperationsT>(value); }
    template<typename FlowOperationsT = Aws::Vector<FlowOperationMetadata>>
    ListFlowOperationsResult& WithFlowOperations(FlowOperationsT&& value) { SetFlowOperations(std::forward<FlowOperationsT>(value)); return *this;}
    template<typename FlowOperationsT = FlowOperationMetadata>
    ListFlowOperationsResult& AddFlowOperations(FlowOperationsT&& value) { m_flowOperationsHasBeenSet = true; m_flowOperations.emplace_back(std::forward<FlowOperationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowOperationMetadata> m_flowOperations;
    bool m_flowOperationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
