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
 * <p>A unique source IP address that connected to a domain.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UniqueSources">AWS
 * API Reference</a></p>
 */
class UniqueSources {
 public:
  AWS_NETWORKFIREWALL_API UniqueSources() = default;
  AWS_NETWORKFIREWALL_API UniqueSources(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API UniqueSources& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of unique source IP addresses that connected to a domain.</p>
   */
  inline int64_t GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int64_t value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline UniqueSources& WithCount(int64_t value) {
    SetCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_count{0};
  bool m_countHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
