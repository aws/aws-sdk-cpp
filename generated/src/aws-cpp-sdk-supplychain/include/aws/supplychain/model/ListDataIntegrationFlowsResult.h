/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlow.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters for ListDataIntegrationFlows.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationFlowsResponse">AWS
   * API Reference</a></p>
   */
  class ListDataIntegrationFlowsResult
  {
  public:
    AWS_SUPPLYCHAIN_API ListDataIntegrationFlowsResult() = default;
    AWS_SUPPLYCHAIN_API ListDataIntegrationFlowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListDataIntegrationFlowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response parameters for ListDataIntegrationFlows.</p>
     */
    inline const Aws::Vector<DataIntegrationFlow>& GetFlows() const { return m_flows; }
    template<typename FlowsT = Aws::Vector<DataIntegrationFlow>>
    void SetFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows = std::forward<FlowsT>(value); }
    template<typename FlowsT = Aws::Vector<DataIntegrationFlow>>
    ListDataIntegrationFlowsResult& WithFlows(FlowsT&& value) { SetFlows(std::forward<FlowsT>(value)); return *this;}
    template<typename FlowsT = DataIntegrationFlow>
    ListDataIntegrationFlowsResult& AddFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows.emplace_back(std::forward<FlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch the next page of the DataIntegrationFlows.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationFlowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataIntegrationFlowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataIntegrationFlow> m_flows;
    bool m_flowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
