/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceConfiguration.h>
#include <aws/mediaconnect/model/RouterOutputConfiguration.h>
#include <aws/mediaconnect/model/RouterOutputTier.h>
#include <aws/mediaconnect/model/RoutingScope.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class UpdateRouterOutputRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API UpdateRouterOutputRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRouterOutput"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router output that you want to
   * update.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateRouterOutputRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name for the router output.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRouterOutputRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration settings for the router output. Changing the type
   * of the configuration is not supported.</p>
   */
  inline const RouterOutputConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RouterOutputConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RouterOutputConfiguration>
  UpdateRouterOutputRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated maximum bitrate for the router output.</p>
   */
  inline long long GetMaximumBitrate() const { return m_maximumBitrate; }
  inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
  inline void SetMaximumBitrate(long long value) {
    m_maximumBitrateHasBeenSet = true;
    m_maximumBitrate = value;
  }
  inline UpdateRouterOutputRequest& WithMaximumBitrate(long long value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the router output can take inputs that are in different
   * Regions. REGIONAL (default) - can only take inputs from same Region. GLOBAL -
   * can take inputs from any Region.</p>
   */
  inline RoutingScope GetRoutingScope() const { return m_routingScope; }
  inline bool RoutingScopeHasBeenSet() const { return m_routingScopeHasBeenSet; }
  inline void SetRoutingScope(RoutingScope value) {
    m_routingScopeHasBeenSet = true;
    m_routingScope = value;
  }
  inline UpdateRouterOutputRequest& WithRoutingScope(RoutingScope value) {
    SetRoutingScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated tier level for the router output.</p>
   */
  inline RouterOutputTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(RouterOutputTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline UpdateRouterOutputRequest& WithTier(RouterOutputTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated maintenance configuration settings for the router output,
   * including any changes to preferred maintenance windows and schedules.</p>
   */
  inline const MaintenanceConfiguration& GetMaintenanceConfiguration() const { return m_maintenanceConfiguration; }
  inline bool MaintenanceConfigurationHasBeenSet() const { return m_maintenanceConfigurationHasBeenSet; }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  void SetMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    m_maintenanceConfigurationHasBeenSet = true;
    m_maintenanceConfiguration = std::forward<MaintenanceConfigurationT>(value);
  }
  template <typename MaintenanceConfigurationT = MaintenanceConfiguration>
  UpdateRouterOutputRequest& WithMaintenanceConfiguration(MaintenanceConfigurationT&& value) {
    SetMaintenanceConfiguration(std::forward<MaintenanceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  RouterOutputConfiguration m_configuration;

  long long m_maximumBitrate{0};

  RoutingScope m_routingScope{RoutingScope::NOT_SET};

  RouterOutputTier m_tier{RouterOutputTier::NOT_SET};

  MaintenanceConfiguration m_maintenanceConfiguration;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_maximumBitrateHasBeenSet = false;
  bool m_routingScopeHasBeenSet = false;
  bool m_tierHasBeenSet = false;
  bool m_maintenanceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
