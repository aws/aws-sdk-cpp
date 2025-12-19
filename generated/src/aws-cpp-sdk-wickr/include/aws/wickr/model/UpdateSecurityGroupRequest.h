/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/SecurityGroupSettings.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class UpdateSecurityGroupRequest : public WickrRequest {
 public:
  AWS_WICKR_API UpdateSecurityGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityGroup"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network containing the security group to update.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateSecurityGroupRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the security group to update.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  UpdateSecurityGroupRequest& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name for the security group.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateSecurityGroupRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration settings for the security group.</p> <p>Federation
   * mode - 0 (Local federation), 1 (Restricted federation), 2 (Global federation)
   * </p>
   */
  inline const SecurityGroupSettings& GetSecurityGroupSettings() const { return m_securityGroupSettings; }
  inline bool SecurityGroupSettingsHasBeenSet() const { return m_securityGroupSettingsHasBeenSet; }
  template <typename SecurityGroupSettingsT = SecurityGroupSettings>
  void SetSecurityGroupSettings(SecurityGroupSettingsT&& value) {
    m_securityGroupSettingsHasBeenSet = true;
    m_securityGroupSettings = std::forward<SecurityGroupSettingsT>(value);
  }
  template <typename SecurityGroupSettingsT = SecurityGroupSettings>
  UpdateSecurityGroupRequest& WithSecurityGroupSettings(SecurityGroupSettingsT&& value) {
    SetSecurityGroupSettings(std::forward<SecurityGroupSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_groupId;

  Aws::String m_name;

  SecurityGroupSettings m_securityGroupSettings;
  bool m_networkIdHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_securityGroupSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
