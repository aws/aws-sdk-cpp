/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceConfiguration.h>
#include <aws/mediaconnect/model/MaintenanceSchedule.h>
#include <aws/mediaconnect/model/MaintenanceScheduleType.h>
#include <aws/mediaconnect/model/MaintenanceType.h>
#include <aws/mediaconnect/model/RouterOutputConfiguration.h>
#include <aws/mediaconnect/model/RouterOutputMessage.h>
#include <aws/mediaconnect/model/RouterOutputRoutedState.h>
#include <aws/mediaconnect/model/RouterOutputState.h>
#include <aws/mediaconnect/model/RouterOutputStreamDetails.h>
#include <aws/mediaconnect/model/RouterOutputTier.h>
#include <aws/mediaconnect/model/RouterOutputType.h>
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
 * <p>A router output in AWS Elemental MediaConnect. A router output is a
 * destination for media content that can receive input from one or more router
 * inputs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutput">AWS
 * API Reference</a></p>
 */
class RouterOutput {
 public:
  AWS_MEDIACONNECT_API RouterOutput() = default;
  AWS_MEDIACONNECT_API RouterOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the router output.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RouterOutput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router output.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RouterOutput& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the router output.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  RouterOutput& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The overall state of the router output.</p>
   */
  inline RouterOutputState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RouterOutputState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RouterOutput& WithState(RouterOutputState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the router output.</p>
   */
  inline RouterOutputType GetOutputType() const { return m_outputType; }
  inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
  inline void SetOutputType(RouterOutputType value) {
    m_outputTypeHasBeenSet = true;
    m_outputType = value;
  }
  inline RouterOutput& WithOutputType(RouterOutputType value) {
    SetOutputType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const RouterOutputConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RouterOutputConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RouterOutputConfiguration>
  RouterOutput& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the association between the router output and its
   * input.</p>
   */
  inline RouterOutputRoutedState GetRoutedState() const { return m_routedState; }
  inline bool RoutedStateHasBeenSet() const { return m_routedStateHasBeenSet; }
  inline void SetRoutedState(RouterOutputRoutedState value) {
    m_routedStateHasBeenSet = true;
    m_routedState = value;
  }
  inline RouterOutput& WithRoutedState(RouterOutputRoutedState value) {
    SetRoutedState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the router output is located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  RouterOutput& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone of the router output.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  RouterOutput& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bitrate for the router output.</p>
   */
  inline long long GetMaximumBitrate() const { return m_maximumBitrate; }
  inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
  inline void SetMaximumBitrate(long long value) {
    m_maximumBitrateHasBeenSet = true;
    m_maximumBitrate = value;
  }
  inline RouterOutput& WithMaximumBitrate(long long value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the router output is configured for Regional or global
   * routing.</p>
   */
  inline RoutingScope GetRoutingScope() const { return m_routingScope; }
  inline bool RoutingScopeHasBeenSet() const { return m_routingScopeHasBeenSet; }
  inline void SetRoutingScope(RoutingScope value) {
    m_routingScopeHasBeenSet = true;
    m_routingScope = value;
  }
  inline RouterOutput& WithRoutingScope(RoutingScope value) {
    SetRoutingScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier level of the router output.</p>
   */
  inline RouterOutputTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(RouterOutputTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline RouterOutput& WithTier(RouterOutputTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router output was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RouterOutput& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router output was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RouterOutput& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The messages associated with the router output.</p>
   */
  inline const Aws::Vector<RouterOutputMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<RouterOutputMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<RouterOutputMessage>>
  RouterOutput& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = RouterOutputMessage>
  RouterOutput& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs that can be used to tag and organize this router output.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RouterOutput& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RouterOutput& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouterOutputStreamDetails& GetStreamDetails() const { return m_streamDetails; }
  inline bool StreamDetailsHasBeenSet() const { return m_streamDetailsHasBeenSet; }
  template <typename StreamDetailsT = RouterOutputStreamDetails>
  void SetStreamDetails(StreamDetailsT&& value) {
    m_streamDetailsHasBeenSet = true;
    m_streamDetails = std::forward<StreamDetailsT>(value);
  }
  template <typename StreamDetailsT = RouterOutputStreamDetails>
  RouterOutput& WithStreamDetails(StreamDetailsT&& value) {
    SetStreamDetails(std::forward<StreamDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address of the router output.</p>
   */
  inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
  inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
  template <typename IpAddressT = Aws::String>
  void SetIpAddress(IpAddressT&& value) {
    m_ipAddressHasBeenSet = true;
    m_ipAddress = std::forward<IpAddressT>(value);
  }
  template <typename IpAddressT = Aws::String>
  RouterOutput& WithIpAddress(IpAddressT&& value) {
    SetIpAddress(std::forward<IpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router input associated with the
   * output.</p>
   */
  inline const Aws::String& GetRoutedInputArn() const { return m_routedInputArn; }
  inline bool RoutedInputArnHasBeenSet() const { return m_routedInputArnHasBeenSet; }
  template <typename RoutedInputArnT = Aws::String>
  void SetRoutedInputArn(RoutedInputArnT&& value) {
    m_routedInputArnHasBeenSet = true;
    m_routedInputArn = std::forward<RoutedInputArnT>(value);
  }
  template <typename RoutedInputArnT = Aws::String>
  RouterOutput& WithRoutedInputArn(RoutedInputArnT&& value) {
    SetRoutedInputArn(std::forward<RoutedInputArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of maintenance configuration applied to this router output.</p>
   */
  inline MaintenanceType GetMaintenanceType() const { return m_maintenanceType; }
  inline bool MaintenanceTypeHasBeenSet() const { return m_maintenanceTypeHasBeenSet; }
  inline void SetMaintenanceType(MaintenanceType value) {
    m_maintenanceTypeHasBeenSet = true;
    m_maintenanceType = value;
  }
  inline RouterOutput& WithMaintenanceType(MaintenanceType value) {
    SetMaintenanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance configuration settings applied to this router output.</p>
   */
  inline const MaintenanceConfiguration& GetMaintenanceConfiguration() const { return m_maintenanceConfiguration; }
  inline bool MaintenanceConfigurationHasBeenSet() const { return m_maintenanceConfigurationHasBeenSet; }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  void SetMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    m_maintenanceConfigurationHasBeenSet = true;
    m_maintenanceConfiguration = std::forward<MaintenanceConfigurationT>(value);
  }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  RouterOutput& WithMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    SetMaintenanceConfiguration(std::forward<MaintenanceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of maintenance schedule currently in effect for this router
   * output.</p>
   */
  inline MaintenanceScheduleType GetMaintenanceScheduleType() const { return m_maintenanceScheduleType; }
  inline bool MaintenanceScheduleTypeHasBeenSet() const { return m_maintenanceScheduleTypeHasBeenSet; }
  inline void SetMaintenanceScheduleType(MaintenanceScheduleType value) {
    m_maintenanceScheduleTypeHasBeenSet = true;
    m_maintenanceScheduleType = value;
  }
  inline RouterOutput& WithMaintenanceScheduleType(MaintenanceScheduleType value) {
    SetMaintenanceScheduleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current maintenance schedule details for this router output.</p>
   */
  inline const MaintenanceSchedule& GetMaintenanceSchedule() const { return m_maintenanceSchedule; }
  inline bool MaintenanceScheduleHasBeenSet() const { return m_maintenanceScheduleHasBeenSet; }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  void SetMaintenanceSchedule(MaintenanceScheduleT&& value) {
    m_maintenanceScheduleHasBeenSet = true;
    m_maintenanceSchedule = std::forward<MaintenanceScheduleT>(value);
  }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  RouterOutput& WithMaintenanceSchedule(MaintenanceScheduleT&& value) {
    SetMaintenanceSchedule(std::forward<MaintenanceScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  RouterOutputState m_state{RouterOutputState::NOT_SET};

  RouterOutputType m_outputType{RouterOutputType::NOT_SET};

  RouterOutputConfiguration m_configuration;

  RouterOutputRoutedState m_routedState{RouterOutputRoutedState::NOT_SET};

  Aws::String m_regionName;

  Aws::String m_availabilityZone;

  long long m_maximumBitrate{0};

  RoutingScope m_routingScope{RoutingScope::NOT_SET};

  RouterOutputTier m_tier{RouterOutputTier::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<RouterOutputMessage> m_messages;

  Aws::Map<Aws::String, Aws::String> m_tags;

  RouterOutputStreamDetails m_streamDetails;

  Aws::String m_ipAddress;

  Aws::String m_routedInputArn;

  MaintenanceType m_maintenanceType{MaintenanceType::NOT_SET};

  MaintenanceConfiguration m_maintenanceConfiguration;

  MaintenanceScheduleType m_maintenanceScheduleType{MaintenanceScheduleType::NOT_SET};

  MaintenanceSchedule m_maintenanceSchedule;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_outputTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_routedStateHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_maximumBitrateHasBeenSet = false;
  bool m_routingScopeHasBeenSet = false;
  bool m_tierHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_streamDetailsHasBeenSet = false;
  bool m_ipAddressHasBeenSet = false;
  bool m_routedInputArnHasBeenSet = false;
  bool m_maintenanceTypeHasBeenSet = false;
  bool m_maintenanceConfigurationHasBeenSet = false;
  bool m_maintenanceScheduleTypeHasBeenSet = false;
  bool m_maintenanceScheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
