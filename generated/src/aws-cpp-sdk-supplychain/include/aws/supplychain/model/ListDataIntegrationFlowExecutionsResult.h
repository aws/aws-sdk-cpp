/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlowExecution.h>
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
   * <p>The response parameters of ListFlowExecutions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListDataIntegrationFlowExecutionsResponse">AWS
   * API Reference</a></p>
   */
  class ListDataIntegrationFlowExecutionsResult
  {
  public:
    AWS_SUPPLYCHAIN_API ListDataIntegrationFlowExecutionsResult() = default;
    AWS_SUPPLYCHAIN_API ListDataIntegrationFlowExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListDataIntegrationFlowExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of flow executions.</p>
     */
    inline const Aws::Vector<DataIntegrationFlowExecution>& GetFlowExecutions() const { return m_flowExecutions; }
    template<typename FlowExecutionsT = Aws::Vector<DataIntegrationFlowExecution>>
    void SetFlowExecutions(FlowExecutionsT&& value) { m_flowExecutionsHasBeenSet = true; m_flowExecutions = std::forward<FlowExecutionsT>(value); }
    template<typename FlowExecutionsT = Aws::Vector<DataIntegrationFlowExecution>>
    ListDataIntegrationFlowExecutionsResult& WithFlowExecutions(FlowExecutionsT&& value) { SetFlowExecutions(std::forward<FlowExecutionsT>(value)); return *this;}
    template<typename FlowExecutionsT = DataIntegrationFlowExecution>
    ListDataIntegrationFlowExecutionsResult& AddFlowExecutions(FlowExecutionsT&& value) { m_flowExecutionsHasBeenSet = true; m_flowExecutions.emplace_back(std::forward<FlowExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch next page of flow executions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationFlowExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataIntegrationFlowExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataIntegrationFlowExecution> m_flowExecutions;
    bool m_flowExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
