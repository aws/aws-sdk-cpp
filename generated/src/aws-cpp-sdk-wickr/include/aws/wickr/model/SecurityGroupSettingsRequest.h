/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/PermittedWickrEnterpriseNetwork.h>
#include <aws/wickr/model/WickrAwsNetworks.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains the security group configuration settings that can be specified when
 * creating or updating a security group. This is a subset of SecurityGroupSettings
 * containing only the modifiable federation and security settings.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/SecurityGroupSettingsRequest">AWS
 * API Reference</a></p>
 */
class SecurityGroupSettingsRequest {
 public:
  AWS_WICKR_API SecurityGroupSettingsRequest() = default;
  AWS_WICKR_API SecurityGroupSettingsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API SecurityGroupSettingsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of failed password attempts before a user account is locked
   * out.</p>
   */
  inline int GetLockoutThreshold() const { return m_lockoutThreshold; }
  inline bool LockoutThresholdHasBeenSet() const { return m_lockoutThresholdHasBeenSet; }
  inline void SetLockoutThreshold(int value) {
    m_lockoutThresholdHasBeenSet = true;
    m_lockoutThreshold = value;
  }
  inline SecurityGroupSettingsRequest& WithLockoutThreshold(int value) {
    SetLockoutThreshold(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of network IDs that are permitted for local federation when federation
   * mode is set to restricted.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPermittedNetworks() const { return m_permittedNetworks; }
  inline bool PermittedNetworksHasBeenSet() const { return m_permittedNetworksHasBeenSet; }
  template <typename PermittedNetworksT = Aws::Vector<Aws::String>>
  void SetPermittedNetworks(PermittedNetworksT&& value) {
    m_permittedNetworksHasBeenSet = true;
    m_permittedNetworks = std::forward<PermittedNetworksT>(value);
  }
  template <typename PermittedNetworksT = Aws::Vector<Aws::String>>
  SecurityGroupSettingsRequest& WithPermittedNetworks(PermittedNetworksT&& value) {
    SetPermittedNetworks(std::forward<PermittedNetworksT>(value));
    return *this;
  }
  template <typename PermittedNetworksT = Aws::String>
  SecurityGroupSettingsRequest& AddPermittedNetworks(PermittedNetworksT&& value) {
    m_permittedNetworksHasBeenSet = true;
    m_permittedNetworks.emplace_back(std::forward<PermittedNetworksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Guest users let you work with people outside your organization that only have
   * limited access to Wickr. Only valid when federationMode is set to Global.</p>
   */
  inline bool GetEnableGuestFederation() const { return m_enableGuestFederation; }
  inline bool EnableGuestFederationHasBeenSet() const { return m_enableGuestFederationHasBeenSet; }
  inline void SetEnableGuestFederation(bool value) {
    m_enableGuestFederationHasBeenSet = true;
    m_enableGuestFederation = value;
  }
  inline SecurityGroupSettingsRequest& WithEnableGuestFederation(bool value) {
    SetEnableGuestFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Allow users to securely federate with all Amazon Web Services Wickr networks
   * and Amazon Web Services Enterprise networks.</p>
   */
  inline bool GetGlobalFederation() const { return m_globalFederation; }
  inline bool GlobalFederationHasBeenSet() const { return m_globalFederationHasBeenSet; }
  inline void SetGlobalFederation(bool value) {
    m_globalFederationHasBeenSet = true;
    m_globalFederation = value;
  }
  inline SecurityGroupSettingsRequest& WithGlobalFederation(bool value) {
    SetGlobalFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The local federation mode. Values: 0 (none), 1 (federated - all networks), 2
   * (restricted - only permitted networks).</p>
   */
  inline int GetFederationMode() const { return m_federationMode; }
  inline bool FederationModeHasBeenSet() const { return m_federationModeHasBeenSet; }
  inline void SetFederationMode(int value) {
    m_federationModeHasBeenSet = true;
    m_federationMode = value;
  }
  inline SecurityGroupSettingsRequest& WithFederationMode(int value) {
    SetFederationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Enables restricted global federation to limit communication to specific
   * permitted networks only. Requires globalFederation to be enabled.</p>
   */
  inline bool GetEnableRestrictedGlobalFederation() const { return m_enableRestrictedGlobalFederation; }
  inline bool EnableRestrictedGlobalFederationHasBeenSet() const { return m_enableRestrictedGlobalFederationHasBeenSet; }
  inline void SetEnableRestrictedGlobalFederation(bool value) {
    m_enableRestrictedGlobalFederationHasBeenSet = true;
    m_enableRestrictedGlobalFederation = value;
  }
  inline SecurityGroupSettingsRequest& WithEnableRestrictedGlobalFederation(bool value) {
    SetEnableRestrictedGlobalFederation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of permitted Amazon Web Services Wickr networks for restricted global
   * federation.</p>
   */
  inline const Aws::Vector<WickrAwsNetworks>& GetPermittedWickrAwsNetworks() const { return m_permittedWickrAwsNetworks; }
  inline bool PermittedWickrAwsNetworksHasBeenSet() const { return m_permittedWickrAwsNetworksHasBeenSet; }
  template <typename PermittedWickrAwsNetworksT = Aws::Vector<WickrAwsNetworks>>
  void SetPermittedWickrAwsNetworks(PermittedWickrAwsNetworksT&& value) {
    m_permittedWickrAwsNetworksHasBeenSet = true;
    m_permittedWickrAwsNetworks = std::forward<PermittedWickrAwsNetworksT>(value);
  }
  template <typename PermittedWickrAwsNetworksT = Aws::Vector<WickrAwsNetworks>>
  SecurityGroupSettingsRequest& WithPermittedWickrAwsNetworks(PermittedWickrAwsNetworksT&& value) {
    SetPermittedWickrAwsNetworks(std::forward<PermittedWickrAwsNetworksT>(value));
    return *this;
  }
  template <typename PermittedWickrAwsNetworksT = WickrAwsNetworks>
  SecurityGroupSettingsRequest& AddPermittedWickrAwsNetworks(PermittedWickrAwsNetworksT&& value) {
    m_permittedWickrAwsNetworksHasBeenSet = true;
    m_permittedWickrAwsNetworks.emplace_back(std::forward<PermittedWickrAwsNetworksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of permitted Wickr Enterprise networks for restricted global
   * federation.</p>
   */
  inline const Aws::Vector<PermittedWickrEnterpriseNetwork>& GetPermittedWickrEnterpriseNetworks() const {
    return m_permittedWickrEnterpriseNetworks;
  }
  inline bool PermittedWickrEnterpriseNetworksHasBeenSet() const { return m_permittedWickrEnterpriseNetworksHasBeenSet; }
  template <typename PermittedWickrEnterpriseNetworksT = Aws::Vector<PermittedWickrEnterpriseNetwork>>
  void SetPermittedWickrEnterpriseNetworks(PermittedWickrEnterpriseNetworksT&& value) {
    m_permittedWickrEnterpriseNetworksHasBeenSet = true;
    m_permittedWickrEnterpriseNetworks = std::forward<PermittedWickrEnterpriseNetworksT>(value);
  }
  template <typename PermittedWickrEnterpriseNetworksT = Aws::Vector<PermittedWickrEnterpriseNetwork>>
  SecurityGroupSettingsRequest& WithPermittedWickrEnterpriseNetworks(PermittedWickrEnterpriseNetworksT&& value) {
    SetPermittedWickrEnterpriseNetworks(std::forward<PermittedWickrEnterpriseNetworksT>(value));
    return *this;
  }
  template <typename PermittedWickrEnterpriseNetworksT = PermittedWickrEnterpriseNetwork>
  SecurityGroupSettingsRequest& AddPermittedWickrEnterpriseNetworks(PermittedWickrEnterpriseNetworksT&& value) {
    m_permittedWickrEnterpriseNetworksHasBeenSet = true;
    m_permittedWickrEnterpriseNetworks.emplace_back(std::forward<PermittedWickrEnterpriseNetworksT>(value));
    return *this;
  }
  ///@}
 private:
  int m_lockoutThreshold{0};

  Aws::Vector<Aws::String> m_permittedNetworks;

  bool m_enableGuestFederation{false};

  bool m_globalFederation{false};

  int m_federationMode{0};

  bool m_enableRestrictedGlobalFederation{false};

  Aws::Vector<WickrAwsNetworks> m_permittedWickrAwsNetworks;

  Aws::Vector<PermittedWickrEnterpriseNetwork> m_permittedWickrEnterpriseNetworks;
  bool m_lockoutThresholdHasBeenSet = false;
  bool m_permittedNetworksHasBeenSet = false;
  bool m_enableGuestFederationHasBeenSet = false;
  bool m_globalFederationHasBeenSet = false;
  bool m_federationModeHasBeenSet = false;
  bool m_enableRestrictedGlobalFederationHasBeenSet = false;
  bool m_permittedWickrAwsNetworksHasBeenSet = false;
  bool m_permittedWickrEnterpriseNetworksHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
