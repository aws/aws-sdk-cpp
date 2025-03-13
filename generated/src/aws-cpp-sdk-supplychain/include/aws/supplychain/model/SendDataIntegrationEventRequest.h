/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationEventType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for SendDataIntegrationEvent.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/SendDataIntegrationEventRequest">AWS
   * API Reference</a></p>
   */
  class SendDataIntegrationEventRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API SendDataIntegrationEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataIntegrationEvent"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SendDataIntegrationEventRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data event type.</p>
     */
    inline DataIntegrationEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(DataIntegrationEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline SendDataIntegrationEventRequest& WithEventType(DataIntegrationEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data payload of the event. For more information on the data schema to
     * use, see <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html">Data
     * entities supported in AWS Supply Chain</a>.</p>
     */
    inline const Aws::String& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::String>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::String>
    SendDataIntegrationEventRequest& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline const Aws::String& GetEventGroupId() const { return m_eventGroupId; }
    inline bool EventGroupIdHasBeenSet() const { return m_eventGroupIdHasBeenSet; }
    template<typename EventGroupIdT = Aws::String>
    void SetEventGroupId(EventGroupIdT&& value) { m_eventGroupIdHasBeenSet = true; m_eventGroupId = std::forward<EventGroupIdT>(value); }
    template<typename EventGroupIdT = Aws::String>
    SendDataIntegrationEventRequest& WithEventGroupId(EventGroupIdT&& value) { SetEventGroupId(std::forward<EventGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::Utils::DateTime>
    SendDataIntegrationEventRequest& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotent client token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    SendDataIntegrationEventRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    DataIntegrationEventType m_eventType{DataIntegrationEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_eventGroupId;
    bool m_eventGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestamp{};
    bool m_eventTimestampHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
