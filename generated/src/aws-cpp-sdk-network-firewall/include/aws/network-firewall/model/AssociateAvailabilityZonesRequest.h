﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/AvailabilityZoneMapping.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class AssociateAvailabilityZonesRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API AssociateAvailabilityZonesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateAvailabilityZones"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An optional token that you can use for optimistic locking. Network Firewall
   * returns a token to your requests that access the firewall. The token marks the
   * state of the firewall resource at the time of the request. </p> <p>To make an
   * unconditional change to the firewall, omit the token in your update request.
   * Without the token, Network Firewall performs your updates regardless of whether
   * the firewall has changed since you last retrieved it.</p> <p>To make a
   * conditional change to the firewall, provide the token in your update request.
   * Network Firewall uses the token to ensure that the firewall hasn't changed since
   * you last retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the firewall again
   * to get a current copy of it with a new token. Reapply your changes as needed,
   * then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  AssociateAvailabilityZonesRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the firewall.</p> <p>You must specify the
   * ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
  inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
  template <typename FirewallArnT = Aws::String>
  void SetFirewallArn(FirewallArnT&& value) {
    m_firewallArnHasBeenSet = true;
    m_firewallArn = std::forward<FirewallArnT>(value);
  }
  template <typename FirewallArnT = Aws::String>
  AssociateAvailabilityZonesRequest& WithFirewallArn(FirewallArnT&& value) {
    SetFirewallArn(std::forward<FirewallArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the firewall. You can't change the name of a firewall
   * after you create it.</p> <p>You must specify the ARN or the name, and you can
   * specify both. </p>
   */
  inline const Aws::String& GetFirewallName() const { return m_firewallName; }
  inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }
  template <typename FirewallNameT = Aws::String>
  void SetFirewallName(FirewallNameT&& value) {
    m_firewallNameHasBeenSet = true;
    m_firewallName = std::forward<FirewallNameT>(value);
  }
  template <typename FirewallNameT = Aws::String>
  AssociateAvailabilityZonesRequest& WithFirewallName(FirewallNameT&& value) {
    SetFirewallName(std::forward<FirewallNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Required. The Availability Zones where you want to create firewall endpoints.
   * You must specify at least one Availability Zone.</p>
   */
  inline const Aws::Vector<AvailabilityZoneMapping>& GetAvailabilityZoneMappings() const { return m_availabilityZoneMappings; }
  inline bool AvailabilityZoneMappingsHasBeenSet() const { return m_availabilityZoneMappingsHasBeenSet; }
  template <typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
  void SetAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) {
    m_availabilityZoneMappingsHasBeenSet = true;
    m_availabilityZoneMappings = std::forward<AvailabilityZoneMappingsT>(value);
  }
  template <typename AvailabilityZoneMappingsT = Aws::Vector<AvailabilityZoneMapping>>
  AssociateAvailabilityZonesRequest& WithAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) {
    SetAvailabilityZoneMappings(std::forward<AvailabilityZoneMappingsT>(value));
    return *this;
  }
  template <typename AvailabilityZoneMappingsT = AvailabilityZoneMapping>
  AssociateAvailabilityZonesRequest& AddAvailabilityZoneMappings(AvailabilityZoneMappingsT&& value) {
    m_availabilityZoneMappingsHasBeenSet = true;
    m_availabilityZoneMappings.emplace_back(std::forward<AvailabilityZoneMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;

  Aws::String m_firewallArn;
  bool m_firewallArnHasBeenSet = false;

  Aws::String m_firewallName;
  bool m_firewallNameHasBeenSet = false;

  Aws::Vector<AvailabilityZoneMapping> m_availabilityZoneMappings;
  bool m_availabilityZoneMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
