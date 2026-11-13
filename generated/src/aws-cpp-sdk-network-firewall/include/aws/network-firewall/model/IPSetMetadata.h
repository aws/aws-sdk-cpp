/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>General information about the IP set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IPSetMetadata">AWS
 * API Reference</a></p>
 */
class IPSetMetadata {
 public:
  AWS_NETWORKFIREWALL_API IPSetMetadata() = default;
  AWS_NETWORKFIREWALL_API IPSetMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API IPSetMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Describes the total number of CIDR blocks currently in use by the IP set
   * references in a firewall. To determine how many CIDR blocks are available for
   * you to use in a firewall, you can call <code>AvailableCIDRCount</code>.</p>
   */
  inline int64_t GetResolvedCIDRCount() const { return m_resolvedCIDRCount; }
  inline bool ResolvedCIDRCountHasBeenSet() const { return m_resolvedCIDRCountHasBeenSet; }
  inline void SetResolvedCIDRCount(int64_t value) {
    m_resolvedCIDRCountHasBeenSet = true;
    m_resolvedCIDRCount = value;
  }
  inline IPSetMetadata& WithResolvedCIDRCount(int64_t value) {
    SetResolvedCIDRCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_resolvedCIDRCount{0};
  bool m_resolvedCIDRCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
