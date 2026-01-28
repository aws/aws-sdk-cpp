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
#include <aws/mediaconnect/model/RouterInputConfiguration.h>
#include <aws/mediaconnect/model/RouterInputMessage.h>
#include <aws/mediaconnect/model/RouterInputState.h>
#include <aws/mediaconnect/model/RouterInputStreamDetails.h>
#include <aws/mediaconnect/model/RouterInputTier.h>
#include <aws/mediaconnect/model/RouterInputTransitEncryption.h>
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
 * <p>A router input in AWS Elemental MediaConnect. A router input is a source of
 * media content that can be routed to one or more router outputs.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInput">AWS
 * API Reference</a></p>
 */
class RouterInput {
 public:
  AWS_MEDIACONNECT_API RouterInput() = default;
  AWS_MEDIACONNECT_API RouterInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RouterInput& WithName(NameT&& value) {
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
  RouterInput& WithArn(ArnT&& value) {
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
  RouterInput& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the router input.</p>
   */
  inline RouterInputState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RouterInputState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RouterInput& WithState(RouterInputState value) {
    SetState(value);
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
  inline RouterInput& WithInputType(RouterInputType value) {
    SetInputType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const RouterInputConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RouterInputConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RouterInputConfiguration>
  RouterInput& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of router outputs associated with the router input.</p>
   */
  inline int GetRoutedOutputs() const { return m_routedOutputs; }
  inline bool RoutedOutputsHasBeenSet() const { return m_routedOutputsHasBeenSet; }
  inline void SetRoutedOutputs(int value) {
    m_routedOutputsHasBeenSet = true;
    m_routedOutputs = value;
  }
  inline RouterInput& WithRoutedOutputs(int value) {
    SetRoutedOutputs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of outputs that can be simultaneously routed to this
   * input.</p>
   */
  inline int GetMaximumRoutedOutputs() const { return m_maximumRoutedOutputs; }
  inline bool MaximumRoutedOutputsHasBeenSet() const { return m_maximumRoutedOutputsHasBeenSet; }
  inline void SetMaximumRoutedOutputs(int value) {
    m_maximumRoutedOutputsHasBeenSet = true;
    m_maximumRoutedOutputs = value;
  }
  inline RouterInput& WithMaximumRoutedOutputs(int value) {
    SetMaximumRoutedOutputs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the router input is located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  RouterInput& WithRegionName(RegionNameT&& value) {
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
  RouterInput& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bitrate for the router input.</p>
   */
  inline long long GetMaximumBitrate() const { return m_maximumBitrate; }
  inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
  inline void SetMaximumBitrate(long long value) {
    m_maximumBitrateHasBeenSet = true;
    m_maximumBitrate = value;
  }
  inline RouterInput& WithMaximumBitrate(long long value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier level of the router input.</p>
   */
  inline RouterInputTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(RouterInputTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline RouterInput& WithTier(RouterInputTier value) {
    SetTier(value);
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
  inline RouterInput& WithRoutingScope(RoutingScope value) {
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
  RouterInput& WithCreatedAt(CreatedAtT&& value) {
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
  RouterInput& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The messages associated with the router input.</p>
   */
  inline const Aws::Vector<RouterInputMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<RouterInputMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<RouterInputMessage>>
  RouterInput& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = RouterInputMessage>
  RouterInput& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouterInputTransitEncryption& GetTransitEncryption() const { return m_transitEncryption; }
  inline bool TransitEncryptionHasBeenSet() const { return m_transitEncryptionHasBeenSet; }
  template <typename TransitEncryptionT = RouterInputTransitEncryption>
  void SetTransitEncryption(TransitEncryptionT&& value) {
    m_transitEncryptionHasBeenSet = true;
    m_transitEncryption = std::forward<TransitEncryptionT>(value);
  }
  template <typename TransitEncryptionT = RouterInputTransitEncryption>
  RouterInput& WithTransitEncryption(TransitEncryptionT&& value) {
    SetTransitEncryption(std::forward<TransitEncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs that can be used to tag and organize this router input.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RouterInput& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RouterInput& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouterInputStreamDetails& GetStreamDetails() const { return m_streamDetails; }
  inline bool StreamDetailsHasBeenSet() const { return m_streamDetailsHasBeenSet; }
  template <typename StreamDetailsT = RouterInputStreamDetails>
  void SetStreamDetails(StreamDetailsT&& value) {
    m_streamDetailsHasBeenSet = true;
    m_streamDetails = std::forward<StreamDetailsT>(value);
  }
  template <typename StreamDetailsT = RouterInputStreamDetails>
  RouterInput& WithStreamDetails(StreamDetailsT&& value) {
    SetStreamDetails(std::forward<StreamDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address of the router input.</p>
   */
  inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
  inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
  template <typename IpAddressT = Aws::String>
  void SetIpAddress(IpAddressT&& value) {
    m_ipAddressHasBeenSet = true;
    m_ipAddress = std::forward<IpAddressT>(value);
  }
  template <typename IpAddressT = Aws::String>
  RouterInput& WithIpAddress(IpAddressT&& value) {
    SetIpAddress(std::forward<IpAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of maintenance configuration applied to this router input.</p>
   */
  inline MaintenanceType GetMaintenanceType() const { return m_maintenanceType; }
  inline bool MaintenanceTypeHasBeenSet() const { return m_maintenanceTypeHasBeenSet; }
  inline void SetMaintenanceType(MaintenanceType value) {
    m_maintenanceTypeHasBeenSet = true;
    m_maintenanceType = value;
  }
  inline RouterInput& WithMaintenanceType(MaintenanceType value) {
    SetMaintenanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance configuration settings applied to this router input.</p>
   */
  inline const MaintenanceConfiguration& GetMaintenanceConfiguration() const { return m_maintenanceConfiguration; }
  inline bool MaintenanceConfigurationHasBeenSet() const { return m_maintenanceConfigurationHasBeenSet; }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  void SetMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    m_maintenanceConfigurationHasBeenSet = true;
    m_maintenanceConfiguration = std::forward<MaintenanceConfigurationT>(value);
  }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  RouterInput& WithMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    SetMaintenanceConfiguration(std::forward<MaintenanceConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of maintenance schedule currently in effect for this router
   * input.</p>
   */
  inline MaintenanceScheduleType GetMaintenanceScheduleType() const { return m_maintenanceScheduleType; }
  inline bool MaintenanceScheduleTypeHasBeenSet() const { return m_maintenanceScheduleTypeHasBeenSet; }
  inline void SetMaintenanceScheduleType(MaintenanceScheduleType value) {
    m_maintenanceScheduleTypeHasBeenSet = true;
    m_maintenanceScheduleType = value;
  }
  inline RouterInput& WithMaintenanceScheduleType(MaintenanceScheduleType value) {
    SetMaintenanceScheduleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current maintenance schedule details for this router input.</p>
   */
  inline const MaintenanceSchedule& GetMaintenanceSchedule() const { return m_maintenanceSchedule; }
  inline bool MaintenanceScheduleHasBeenSet() const { return m_maintenanceScheduleHasBeenSet; }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  void SetMaintenanceSchedule(MaintenanceScheduleT&& value) {
    m_maintenanceScheduleHasBeenSet = true;
    m_maintenanceSchedule = std::forward<MaintenanceScheduleT>(value);
  }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  RouterInput& WithMaintenanceSchedule(MaintenanceScheduleT&& value) {
    SetMaintenanceSchedule(std::forward<MaintenanceScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  RouterInputState m_state{RouterInputState::NOT_SET};

  RouterInputType m_inputType{RouterInputType::NOT_SET};

  RouterInputConfiguration m_configuration;

  int m_routedOutputs{0};

  int m_maximumRoutedOutputs{0};

  Aws::String m_regionName;

  Aws::String m_availabilityZone;

  long long m_maximumBitrate{0};

  RouterInputTier m_tier{RouterInputTier::NOT_SET};

  RoutingScope m_routingScope{RoutingScope::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Vector<RouterInputMessage> m_messages;

  RouterInputTransitEncryption m_transitEncryption;

  Aws::Map<Aws::String, Aws::String> m_tags;

  RouterInputStreamDetails m_streamDetails;

  Aws::String m_ipAddress;

  MaintenanceType m_maintenanceType{MaintenanceType::NOT_SET};

  MaintenanceConfiguration m_maintenanceConfiguration;

  MaintenanceScheduleType m_maintenanceScheduleType{MaintenanceScheduleType::NOT_SET};

  MaintenanceSchedule m_maintenanceSchedule;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_inputTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_routedOutputsHasBeenSet = false;
  bool m_maximumRoutedOutputsHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_maximumBitrateHasBeenSet = false;
  bool m_tierHasBeenSet = false;
  bool m_routingScopeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_transitEncryptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_streamDetailsHasBeenSet = false;
  bool m_ipAddressHasBeenSet = false;
  bool m_maintenanceTypeHasBeenSet = false;
  bool m_maintenanceConfigurationHasBeenSet = false;
  bool m_maintenanceScheduleTypeHasBeenSet = false;
  bool m_maintenanceScheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
