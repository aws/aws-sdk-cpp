/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlow.h>
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
   * <p>The response parameters for UpdateDataIntegrationFlow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/UpdateDataIntegrationFlowResponse">AWS
   * API Reference</a></p>
   */
  class UpdateDataIntegrationFlowResult
  {
  public:
    AWS_SUPPLYCHAIN_API UpdateDataIntegrationFlowResult() = default;
    AWS_SUPPLYCHAIN_API UpdateDataIntegrationFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API UpdateDataIntegrationFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the updated DataIntegrationFlow.</p>
     */
    inline const DataIntegrationFlow& GetFlow() const { return m_flow; }
    template<typename FlowT = DataIntegrationFlow>
    void SetFlow(FlowT&& value) { m_flowHasBeenSet = true; m_flow = std::forward<FlowT>(value); }
    template<typename FlowT = DataIntegrationFlow>
    UpdateDataIntegrationFlowResult& WithFlow(FlowT&& value) { SetFlow(std::forward<FlowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDataIntegrationFlowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlow m_flow;
    bool m_flowHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
