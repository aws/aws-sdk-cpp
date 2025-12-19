/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/NetworkSettings.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class UpdateNetworkSettingsRequest : public WickrRequest {
 public:
  AWS_WICKR_API UpdateNetworkSettingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkSettings"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network whose settings will be updated.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateNetworkSettingsRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of setting names to their new values. Each setting should be provided
   * with its appropriate type (boolean, string, number, etc.).</p>
   */
  inline const NetworkSettings& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = NetworkSettings>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = NetworkSettings>
  UpdateNetworkSettingsRequest& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  NetworkSettings m_settings;
  bool m_networkIdHasBeenSet = false;
  bool m_settingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
