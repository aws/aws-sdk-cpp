/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationEvent.h>
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
   * <p>The response parameters for GetDataIntegrationEvent.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationEventResponse">AWS
   * API Reference</a></p>
   */
  class GetDataIntegrationEventResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataIntegrationEventResult() = default;
    AWS_SUPPLYCHAIN_API GetDataIntegrationEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetDataIntegrationEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the DataIntegrationEvent returned.</p>
     */
    inline const DataIntegrationEvent& GetEvent() const { return m_event; }
    template<typename EventT = DataIntegrationEvent>
    void SetEvent(EventT&& value) { m_eventHasBeenSet = true; m_event = std::forward<EventT>(value); }
    template<typename EventT = DataIntegrationEvent>
    GetDataIntegrationEventResult& WithEvent(EventT&& value) { SetEvent(std::forward<EventT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataIntegrationEventResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationEvent m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
