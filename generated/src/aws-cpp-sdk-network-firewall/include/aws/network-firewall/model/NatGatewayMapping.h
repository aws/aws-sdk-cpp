/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
 * <p>A NAT gateway that a proxy mode firewall uses to proxy traffic. This is used
 * in <code>CreateFirewall</code> when <code>NoSourcePreservation</code> is
 * <code>TRUE</code>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/NatGatewayMapping">AWS
 * API Reference</a></p>
 */
class NatGatewayMapping {
 public:
  AWS_NETWORKFIREWALL_API NatGatewayMapping() = default;
  AWS_NETWORKFIREWALL_API NatGatewayMapping(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API NatGatewayMapping& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A unique identifier for the NAT gateway to use with proxy resources.</p>
   */
  inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
  inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
  template <typename NatGatewayIdT = Aws::String>
  void SetNatGatewayId(NatGatewayIdT&& value) {
    m_natGatewayIdHasBeenSet = true;
    m_natGatewayId = std::forward<NatGatewayIdT>(value);
  }
  template <typename NatGatewayIdT = Aws::String>
  NatGatewayMapping& WithNatGatewayId(NatGatewayIdT&& value) {
    SetNatGatewayId(std::forward<NatGatewayIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_natGatewayId;
  bool m_natGatewayIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
