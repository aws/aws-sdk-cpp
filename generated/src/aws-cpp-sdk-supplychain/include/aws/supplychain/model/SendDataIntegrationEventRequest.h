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
    AWS_SUPPLYCHAIN_API SendDataIntegrationEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataIntegrationEvent"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline SendDataIntegrationEventRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline SendDataIntegrationEventRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline SendDataIntegrationEventRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The data event type.</p>
     */
    inline const DataIntegrationEventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The data event type.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The data event type.</p>
     */
    inline void SetEventType(const DataIntegrationEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The data event type.</p>
     */
    inline void SetEventType(DataIntegrationEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The data event type.</p>
     */
    inline SendDataIntegrationEventRequest& WithEventType(const DataIntegrationEventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The data event type.</p>
     */
    inline SendDataIntegrationEventRequest& WithEventType(DataIntegrationEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The data payload of the event.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The data payload of the event.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data payload of the event.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data payload of the event.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data payload of the event.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The data payload of the event.</p>
     */
    inline SendDataIntegrationEventRequest& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The data payload of the event.</p>
     */
    inline SendDataIntegrationEventRequest& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data payload of the event.</p>
     */
    inline SendDataIntegrationEventRequest& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline const Aws::String& GetEventGroupId() const{ return m_eventGroupId; }

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline bool EventGroupIdHasBeenSet() const { return m_eventGroupIdHasBeenSet; }

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline void SetEventGroupId(const Aws::String& value) { m_eventGroupIdHasBeenSet = true; m_eventGroupId = value; }

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline void SetEventGroupId(Aws::String&& value) { m_eventGroupIdHasBeenSet = true; m_eventGroupId = std::move(value); }

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline void SetEventGroupId(const char* value) { m_eventGroupIdHasBeenSet = true; m_eventGroupId.assign(value); }

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline SendDataIntegrationEventRequest& WithEventGroupId(const Aws::String& value) { SetEventGroupId(value); return *this;}

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline SendDataIntegrationEventRequest& WithEventGroupId(Aws::String&& value) { SetEventGroupId(std::move(value)); return *this;}

    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharing or partitioning.</p>
     */
    inline SendDataIntegrationEventRequest& WithEventGroupId(const char* value) { SetEventGroupId(value); return *this;}


    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }

    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline void SetEventTimestamp(const Aws::Utils::DateTime& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline void SetEventTimestamp(Aws::Utils::DateTime&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }

    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline SendDataIntegrationEventRequest& WithEventTimestamp(const Aws::Utils::DateTime& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p>The event timestamp (in epoch seconds).</p>
     */
    inline SendDataIntegrationEventRequest& WithEventTimestamp(Aws::Utils::DateTime&& value) { SetEventTimestamp(std::move(value)); return *this;}


    /**
     * <p>The idempotent client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotent client token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotent client token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotent client token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotent client token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotent client token.</p>
     */
    inline SendDataIntegrationEventRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotent client token.</p>
     */
    inline SendDataIntegrationEventRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotent client token.</p>
     */
    inline SendDataIntegrationEventRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    DataIntegrationEventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_eventGroupId;
    bool m_eventGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
