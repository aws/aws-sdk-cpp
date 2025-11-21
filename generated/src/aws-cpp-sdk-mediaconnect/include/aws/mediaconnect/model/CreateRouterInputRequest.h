/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceConfiguration.h>
#include <aws/mediaconnect/model/RouterInputConfiguration.h>
#include <aws/mediaconnect/model/RouterInputTier.h>
#include <aws/mediaconnect/model/RouterInputTransitEncryption.h>
#include <aws/mediaconnect/model/RoutingScope.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class CreateRouterInputRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API CreateRouterInputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRouterInput"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

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
  CreateRouterInputRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the router input, which can include the
   * protocol, network interface, and other details.</p>
   */
  inline const RouterInputConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RouterInputConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RouterInputConfiguration>
  CreateRouterInputRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
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
  inline CreateRouterInputRequest& WithMaximumBitrate(long long value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the router input can be assigned to outputs in different
   * Regions. REGIONAL (default) - connects only to outputs in same Region. GLOBAL -
   * connects to outputs in any Region.</p>
   */
  inline RoutingScope GetRoutingScope() const { return m_routingScope; }
  inline bool RoutingScopeHasBeenSet() const { return m_routingScopeHasBeenSet; }
  inline void SetRoutingScope(RoutingScope value) {
    m_routingScopeHasBeenSet = true;
    m_routingScope = value;
  }
  inline CreateRouterInputRequest& WithRoutingScope(RoutingScope value) {
    SetRoutingScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier level for the router input.</p>
   */
  inline RouterInputTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(RouterInputTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline CreateRouterInputRequest& WithTier(RouterInputTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region for the router input. Defaults to the current region if not
   * specified.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  CreateRouterInputRequest& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone where you want to create the router input. This must be
   * a valid Availability Zone for the region specified by <code>regionName</code>,
   * or the current region if no <code>regionName</code> is provided. </p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CreateRouterInputRequest& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transit encryption settings for the router input.</p>
   */
  inline const RouterInputTransitEncryption& GetTransitEncryption() const { return m_transitEncryption; }
  inline bool TransitEncryptionHasBeenSet() const { return m_transitEncryptionHasBeenSet; }
  template <typename TransitEncryptionT = RouterInputTransitEncryption>
  void SetTransitEncryption(TransitEncryptionT&& value) {
    m_transitEncryptionHasBeenSet = true;
    m_transitEncryption = std::forward<TransitEncryptionT>(value);
  }
  template <typename TransitEncryptionT = RouterInputTransitEncryption>
  CreateRouterInputRequest& WithTransitEncryption(TransitEncryptionT&& value) {
    SetTransitEncryption(std::forward<TransitEncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance configuration settings for the router input, including
   * preferred maintenance windows and schedules.</p>
   */
  inline const MaintenanceConfiguration& GetMaintenanceConfiguration() const { return m_maintenanceConfiguration; }
  inline bool MaintenanceConfigurationHasBeenSet() const { return m_maintenanceConfigurationHasBeenSet; }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  void SetMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    m_maintenanceConfigurationHasBeenSet = true;
    m_maintenanceConfiguration = std::forward<MaintenanceConfigurationT>(value);
  }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  CreateRouterInputRequest& WithMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    SetMaintenanceConfiguration(std::forward<MaintenanceConfigurationT>(value));
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
  CreateRouterInputRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRouterInputRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the request to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateRouterInputRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  RouterInputConfiguration m_configuration;
  bool m_configurationHasBeenSet = false;

  long long m_maximumBitrate{0};
  bool m_maximumBitrateHasBeenSet = false;

  RoutingScope m_routingScope{RoutingScope::NOT_SET};
  bool m_routingScopeHasBeenSet = false;

  RouterInputTier m_tier{RouterInputTier::NOT_SET};
  bool m_tierHasBeenSet = false;

  Aws::String m_regionName;
  bool m_regionNameHasBeenSet = false;

  Aws::String m_availabilityZone;
  bool m_availabilityZoneHasBeenSet = false;

  RouterInputTransitEncryption m_transitEncryption;
  bool m_transitEncryptionHasBeenSet = false;

  MaintenanceConfiguration m_maintenanceConfiguration;
  bool m_maintenanceConfigurationHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
