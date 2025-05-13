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
#include <aws/supplychain/model/DataIntegrationEventDatasetTargetConfiguration.h>
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
     * <p>The data event type.</p> <ul> <li> <p> <b>scn.data.dataset</b> - Send data
     * directly to any specified dataset.</p> </li> <li> <p> <b>scn.data.supplyplan</b>
     * - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/supply-plan-entity.html">supply_plan</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.shipmentstoporder</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/replenishment-shipment-stop-order-entity.html">shipment_stop_order</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.shipmentstop</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/replenishment-shipment-stop-entity.html">shipment_stop</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.shipment</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/replenishment-shipment-entity.html">shipment</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.reservation</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/planning-reservation-entity.html">reservation</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.processproduct</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/operation-process-product-entity.html">process_product</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.processoperation</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/operation-process-operation-entity.html">process_operation</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.processheader</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/operation-process-header-entity.html">process_header</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.forecast</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/forecast-forecast-entity.html">forecast</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.inventorylevel</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/inventory_mgmnt-inv-level-entity.html">inv_level</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.inboundorder</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/replenishment-inbound-order-entity.html">inbound_order</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.inboundorderline</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/replenishment-inbound-order-line-entity.html">inbound_order_line</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.inboundorderlineschedule</b> - Send data
     * to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/replenishment-inbound-order-line-schedule-entity.html">inbound_order_line_schedule</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.outboundorderline</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/outbound-fulfillment-order-line-entity.html">outbound_order_line</a>
     * dataset.</p> </li> <li> <p> <b>scn.data.outboundshipment</b> - Send data to <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/outbound-fulfillment-shipment-entity.html">outbound_shipment</a>
     * dataset.</p> </li> </ul>
     */
    inline DataIntegrationEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(DataIntegrationEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline SendDataIntegrationEventRequest& WithEventType(DataIntegrationEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data payload of the event, should follow the data schema of the target
     * dataset, or see <a
     * href="https://docs.aws.amazon.com/aws-supply-chain/latest/userguide/data-model-asc.html">Data
     * entities supported in AWS Supply Chain</a>. To send single data record, use
     * JsonObject format; to send multiple data records, use JsonArray format.</p>
     * <p>Note that for AWS Supply Chain dataset under <b>asc</b> namespace, it has a
     * connection_id internal field that is not allowed to be provided by client
     * directly, they will be auto populated.</p>
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
     * sharding or partitioning. Noted under one eventGroupId of same eventType and
     * instanceId, events are processed sequentially in the order they are received by
     * the server.</p>
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
     * <p>The timestamp (in epoch seconds) associated with the event. If not provided,
     * it will be assigned with current timestamp.</p>
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
     * <p>The idempotent client token. The token is active for 8 hours, and within its
     * lifetime, it ensures the request completes only once upon retry with same client
     * token. If omitted, the AWS SDK generates a unique value so that AWS SDK can
     * safely retry the request upon network errors.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    SendDataIntegrationEventRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target dataset configuration for <b>scn.data.dataset</b> event type.</p>
     */
    inline const DataIntegrationEventDatasetTargetConfiguration& GetDatasetTarget() const { return m_datasetTarget; }
    inline bool DatasetTargetHasBeenSet() const { return m_datasetTargetHasBeenSet; }
    template<typename DatasetTargetT = DataIntegrationEventDatasetTargetConfiguration>
    void SetDatasetTarget(DatasetTargetT&& value) { m_datasetTargetHasBeenSet = true; m_datasetTarget = std::forward<DatasetTargetT>(value); }
    template<typename DatasetTargetT = DataIntegrationEventDatasetTargetConfiguration>
    SendDataIntegrationEventRequest& WithDatasetTarget(DatasetTargetT&& value) { SetDatasetTarget(std::forward<DatasetTargetT>(value)); return *this;}
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    DataIntegrationEventDatasetTargetConfiguration m_datasetTarget;
    bool m_datasetTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
