/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/SecurityGroupSettingsRequest.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class CreateSecurityGroupRequest : public WickrRequest {
 public:
  AWS_WICKR_API CreateSecurityGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityGroup"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network where the security group will be created.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  CreateSecurityGroupRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the new security group.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSecurityGroupRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the security group, including permissions,
   * federation settings, and feature controls.</p>
   */
  inline const SecurityGroupSettingsRequest& GetSecurityGroupSettings() const { return m_securityGroupSettings; }
  inline bool SecurityGroupSettingsHasBeenSet() const { return m_securityGroupSettingsHasBeenSet; }
  template <typename SecurityGroupSettingsT = SecurityGroupSettingsRequest>
  void SetSecurityGroupSettings(SecurityGroupSettingsT&& value) {
    m_securityGroupSettingsHasBeenSet = true;
    m_securityGroupSettings = std::forward<SecurityGroupSettingsT>(value);
  }
  template <typename SecurityGroupSettingsT = SecurityGroupSettingsRequest>
  CreateSecurityGroupRequest& WithSecurityGroupSettings(SecurityGroupSettingsT&& value) {
    SetSecurityGroupSettings(std::forward<SecurityGroupSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this request to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSecurityGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_name;

  SecurityGroupSettingsRequest m_securityGroupSettings;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_networkIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_securityGroupSettingsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
