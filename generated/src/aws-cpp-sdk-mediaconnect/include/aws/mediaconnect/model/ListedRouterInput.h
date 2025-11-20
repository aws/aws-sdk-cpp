/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceSchedule.h>
#include <aws/mediaconnect/model/MaintenanceScheduleType.h>
#include <aws/mediaconnect/model/RouterInputState.h>
#include <aws/mediaconnect/model/RouterInputType.h>
#include <aws/mediaconnect/model/RoutingScope.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>A summary of a router input, including its name, type, ARN, ID, state, and
 * other key details. This structure is used in the response of the
 * ListRouterInputs operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedRouterInput">AWS
 * API Reference</a></p>
 */
class ListedRouterInput {
 public:
  AWS_MEDIACONNECT_API ListedRouterInput() = default;
  AWS_MEDIACONNECT_API ListedRouterInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ListedRouterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the router input.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListedRouterInput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router input.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ListedRouterInput& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the router input.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ListedRouterInput& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the router input.</p>
   */
  inline RouterInputType GetInputType() const { return m_inputType; }
  inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
  inline void SetInputType(RouterInputType value) {
    m_inputTypeHasBeenSet = true;
    m_inputType = value;
  }
  inline ListedRouterInput& WithInputType(RouterInputType value) {
    SetInputType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall state of the router input.</p>
   */
  inline RouterInputState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RouterInputState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ListedRouterInput& WithState(RouterInputState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of router outputs that are associated with this router input.</p>
   */
  inline int GetRoutedOutputs() const { return m_routedOutputs; }
  inline bool RoutedOutputsHasBeenSet() const { return m_routedOutputsHasBeenSet; }
  inline void SetRoutedOutputs(int value) {
    m_routedOutputsHasBeenSet = true;
    m_routedOutputs = value;
  }
  inline ListedRouterInput& WithRoutedOutputs(int value) {
    SetRoutedOutputs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the router input is located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  ListedRouterInput& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the router input.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  ListedRouterInput& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bitrate of the router input.</p>
   */
  inline long long GetMaximumBitrate() const { return m_maximumBitrate; }
  inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
  inline void SetMaximumBitrate(long long value) {
    m_maximumBitrateHasBeenSet = true;
    m_maximumBitrate = value;
  }
  inline ListedRouterInput& WithMaximumBitrate(long long value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the router input is configured for Regional or global
   * routing.</p>
   */
  inline RoutingScope GetRoutingScope() const { return m_routingScope; }
  inline bool RoutingScopeHasBeenSet() const { return m_routingScopeHasBeenSet; }
  inline void SetRoutingScope(RoutingScope value) {
    m_routingScopeHasBeenSet = true;
    m_routingScope = value;
  }
  inline ListedRouterInput& WithRoutingScope(RoutingScope value) {
    SetRoutingScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router input was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ListedRouterInput& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router input was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ListedRouterInput& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of messages associated with the router input.</p>
   */
  inline int GetMessageCount() const { return m_messageCount; }
  inline bool MessageCountHasBeenSet() const { return m_messageCountHasBeenSet; }
  inline void SetMessageCount(int value) {
    m_messageCountHasBeenSet = true;
    m_messageCount = value;
  }
  inline ListedRouterInput& WithMessageCount(int value) {
    SetMessageCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the network interface associated with the router input.</p>
   */
  inline const Aws::String& GetNetworkInterfaceArn() const { return m_networkInterfaceArn; }
  inline bool NetworkInterfaceArnHasBeenSet() const { return m_networkInterfaceArnHasBeenSet; }
  template <typename NetworkInterfaceArnT = Aws::String>
  void SetNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    m_networkInterfaceArnHasBeenSet = true;
    m_networkInterfaceArn = std::forward<NetworkInterfaceArnT>(value);
  }
  template <typename NetworkInterfaceArnT = Aws::String>
  ListedRouterInput& WithNetworkInterfaceArn(NetworkInterfaceArnT&& value) {
    SetNetworkInterfaceArn(std::forward<NetworkInterfaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of maintenance schedule currently associated with the listed router
   * input.</p>
   */
  inline MaintenanceScheduleType GetMaintenanceScheduleType() const { return m_maintenanceScheduleType; }
  inline bool MaintenanceScheduleTypeHasBeenSet() const { return m_maintenanceScheduleTypeHasBeenSet; }
  inline void SetMaintenanceScheduleType(MaintenanceScheduleType value) {
    m_maintenanceScheduleTypeHasBeenSet = true;
    m_maintenanceScheduleType = value;
  }
  inline ListedRouterInput& WithMaintenanceScheduleType(MaintenanceScheduleType value) {
    SetMaintenanceScheduleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the maintenance schedule for the listed router input.</p>
   */
  inline const MaintenanceSchedule& GetMaintenanceSchedule() const { return m_maintenanceSchedule; }
  inline bool MaintenanceScheduleHasBeenSet() const { return m_maintenanceScheduleHasBeenSet; }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  void SetMaintenanceSchedule(MaintenanceScheduleT&& value) {
    m_maintenanceScheduleHasBeenSet = true;
    m_maintenanceSchedule = std::forward<MaintenanceScheduleT>(value);
  }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  ListedRouterInput& WithMaintenanceSchedule(MaintenanceScheduleT&& value) {
    SetMaintenanceSchedule(std::forward<MaintenanceScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  RouterInputType m_inputType{RouterInputType::NOT_SET};
  bool m_inputTypeHasBeenSet = false;

  RouterInputState m_state{RouterInputState::NOT_SET};
  bool m_stateHasBeenSet = false;

  int m_routedOutputs{0};
  bool m_routedOutputsHasBeenSet = false;

  Aws::String m_regionName;
  bool m_regionNameHasBeenSet = false;

  Aws::String m_availabilityZone;
  bool m_availabilityZoneHasBeenSet = false;

  long long m_maximumBitrate{0};
  bool m_maximumBitrateHasBeenSet = false;

  RoutingScope m_routingScope{RoutingScope::NOT_SET};
  bool m_routingScopeHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  int m_messageCount{0};
  bool m_messageCountHasBeenSet = false;

  Aws::String m_networkInterfaceArn;
  bool m_networkInterfaceArnHasBeenSet = false;

  MaintenanceScheduleType m_maintenanceScheduleType{MaintenanceScheduleType::NOT_SET};
  bool m_maintenanceScheduleTypeHasBeenSet = false;

  MaintenanceSchedule m_maintenanceSchedule;
  bool m_maintenanceScheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
