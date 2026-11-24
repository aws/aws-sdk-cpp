/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/EnforcementMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Contains the settings that configure an internet gateway firewall. An
 * internet gateway firewall inspects all traffic between your VPC and its internet
 * gateway, without changes to your subnets or route tables. You can describe and
 * list internet gateway firewalls in Network Firewall, but you can't create,
 * modify, or delete them directly, because Amazon Web Services Network Security
 * Manager creates and manages them on your behalf.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IgwFirewallConfiguration">AWS
 * API Reference</a></p>
 */
class IgwFirewallConfiguration {
 public:
  AWS_NETWORKFIREWALL_API IgwFirewallConfiguration() = default;
  AWS_NETWORKFIREWALL_API IgwFirewallConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API IgwFirewallConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>How the internet gateway firewall enforces its rules. The only supported
   * value is <code>POLICY_CONTROLLED</code>, which means that the enforcement mode
   * is set by the firewall policy that Amazon Web Services Network Security Manager
   * associates with the firewall.</p>
   */
  inline EnforcementMode GetEnforcementMode() const { return m_enforcementMode; }
  inline bool EnforcementModeHasBeenSet() const { return m_enforcementModeHasBeenSet; }
  inline void SetEnforcementMode(EnforcementMode value) {
    m_enforcementModeHasBeenSet = true;
    m_enforcementMode = value;
  }
  inline IgwFirewallConfiguration& WithEnforcementMode(EnforcementMode value) {
    SetEnforcementMode(value);
    return *this;
  }
  ///@}
 private:
  EnforcementMode m_enforcementMode{EnforcementMode::NOT_SET};
  bool m_enforcementModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
