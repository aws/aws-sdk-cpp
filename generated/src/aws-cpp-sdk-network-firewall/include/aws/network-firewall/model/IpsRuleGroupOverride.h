/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/OverrideAction.h>

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
 * <p>The setting that allows the policy owner to change the behavior of an IPS
 * engine rule group within a Next Generation policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IpsRuleGroupOverride">AWS
 * API Reference</a></p>
 */
class IpsRuleGroupOverride {
 public:
  AWS_NETWORKFIREWALL_API IpsRuleGroupOverride() = default;
  AWS_NETWORKFIREWALL_API IpsRuleGroupOverride(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API IpsRuleGroupOverride& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The action that changes the rule group from <code>DROP</code> to
   * <code>ALERT</code>. This only applies to managed rule groups.</p>
   */
  inline OverrideAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(OverrideAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline IpsRuleGroupOverride& WithAction(OverrideAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  OverrideAction m_action{OverrideAction::NOT_SET};
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
