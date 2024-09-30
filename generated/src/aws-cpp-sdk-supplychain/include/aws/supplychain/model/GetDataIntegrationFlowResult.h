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
   * <p>The response parameters for GetDataIntegrationFlow.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationFlowResponse">AWS
   * API Reference</a></p>
   */
  class GetDataIntegrationFlowResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataIntegrationFlowResult();
    AWS_SUPPLYCHAIN_API GetDataIntegrationFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetDataIntegrationFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the DataIntegrationFlow returned.</p>
     */
    inline const DataIntegrationFlow& GetFlow() const{ return m_flow; }
    inline void SetFlow(const DataIntegrationFlow& value) { m_flow = value; }
    inline void SetFlow(DataIntegrationFlow&& value) { m_flow = std::move(value); }
    inline GetDataIntegrationFlowResult& WithFlow(const DataIntegrationFlow& value) { SetFlow(value); return *this;}
    inline GetDataIntegrationFlowResult& WithFlow(DataIntegrationFlow&& value) { SetFlow(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataIntegrationFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataIntegrationFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataIntegrationFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DataIntegrationFlow m_flow;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
