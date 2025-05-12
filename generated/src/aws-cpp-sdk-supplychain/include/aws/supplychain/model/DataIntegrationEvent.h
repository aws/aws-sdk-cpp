/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationEventType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/supplychain/model/DataIntegrationEventDatasetTargetDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The data integration event details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationEvent">AWS
   * API Reference</a></p>
   */
  class DataIntegrationEvent
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationEvent() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DataIntegrationEvent& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique event identifier.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    DataIntegrationEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data event type.</p>
     */
    inline DataIntegrationEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(DataIntegrationEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline DataIntegrationEvent& WithEventType(DataIntegrationEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Event identifier (for example, orderId for InboundOrder) used for data
     * sharding or partitioning.</p>
     */
    inline const Aws::String& GetEventGroupId() const { return m_eventGroupId; }
    inline bool EventGroupIdHasBeenSet() const { return m_eventGroupIdHasBeenSet; }
    template<typename EventGroupIdT = Aws::String>
    void SetEventGroupId(EventGroupIdT&& value) { m_eventGroupIdHasBeenSet = true; m_eventGroupId = std::forward<EventGroupIdT>(value); }
    template<typename EventGroupIdT = Aws::String>
    DataIntegrationEvent& WithEventGroupId(EventGroupIdT&& value) { SetEventGroupId(std::forward<EventGroupIdT>(value)); return *this;}
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
    DataIntegrationEvent& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target dataset details for a DATASET event type.</p>
     */
    inline const DataIntegrationEventDatasetTargetDetails& GetDatasetTargetDetails() const { return m_datasetTargetDetails; }
    inline bool DatasetTargetDetailsHasBeenSet() const { return m_datasetTargetDetailsHasBeenSet; }
    template<typename DatasetTargetDetailsT = DataIntegrationEventDatasetTargetDetails>
    void SetDatasetTargetDetails(DatasetTargetDetailsT&& value) { m_datasetTargetDetailsHasBeenSet = true; m_datasetTargetDetails = std::forward<DatasetTargetDetailsT>(value); }
    template<typename DatasetTargetDetailsT = DataIntegrationEventDatasetTargetDetails>
    DataIntegrationEvent& WithDatasetTargetDetails(DatasetTargetDetailsT&& value) { SetDatasetTargetDetails(std::forward<DatasetTargetDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    DataIntegrationEventType m_eventType{DataIntegrationEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_eventGroupId;
    bool m_eventGroupIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimestamp{};
    bool m_eventTimestampHasBeenSet = false;

    DataIntegrationEventDatasetTargetDetails m_datasetTargetDetails;
    bool m_datasetTargetDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
