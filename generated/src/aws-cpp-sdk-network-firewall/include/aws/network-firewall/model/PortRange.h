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
 * <p>A single port range specification. This is used for source and destination
 * port ranges in the stateless rule <a>MatchAttributes</a>,
 * <code>SourcePorts</code>, and <code>DestinationPorts</code> settings.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PortRange">AWS
 * API Reference</a></p>
 */
class PortRange {
 public:
  AWS_NETWORKFIREWALL_API PortRange() = default;
  AWS_NETWORKFIREWALL_API PortRange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API PortRange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The lower limit of the port range. This must be less than or equal to the
   * <code>ToPort</code> specification. </p>
   */
  inline int64_t GetFromPort() const { return m_fromPort; }
  inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
  inline void SetFromPort(int64_t value) {
    m_fromPortHasBeenSet = true;
    m_fromPort = value;
  }
  inline PortRange& WithFromPort(int64_t value) {
    SetFromPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper limit of the port range. This must be greater than or equal to the
   * <code>FromPort</code> specification. </p>
   */
  inline int64_t GetToPort() const { return m_toPort; }
  inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
  inline void SetToPort(int64_t value) {
    m_toPortHasBeenSet = true;
    m_toPort = value;
  }
  inline PortRange& WithToPort(int64_t value) {
    SetToPort(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_fromPort{0};

  int64_t m_toPort{0};
  bool m_fromPortHasBeenSet = false;
  bool m_toPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
