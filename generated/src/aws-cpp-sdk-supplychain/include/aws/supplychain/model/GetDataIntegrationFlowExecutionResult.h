/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowExecution.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The response parameters of GetFlowExecution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationFlowExecutionResponse">AWS
   * API Reference</a></p>
   */
  class GetDataIntegrationFlowExecutionResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataIntegrationFlowExecutionResult() = default;
    AWS_SUPPLYCHAIN_API GetDataIntegrationFlowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetDataIntegrationFlowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The flow execution details.</p>
     */
    inline const DataIntegrationFlowExecution& GetFlowExecution() const { return m_flowExecution; }
    template<typename FlowExecutionT = DataIntegrationFlowExecution>
    void SetFlowExecution(FlowExecutionT&& value) { m_flowExecutionHasBeenSet = true; m_flowExecution = std::forward<FlowExecutionT>(value); }
    template<typename FlowExecutionT = DataIntegrationFlowExecution>
    GetDataIntegrationFlowExecutionResult& WithFlowExecution(FlowExecutionT&& value) { SetFlowExecution(std::forward<FlowExecutionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataIntegrationFlowExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowExecution m_flowExecution;
    bool m_flowExecutionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
