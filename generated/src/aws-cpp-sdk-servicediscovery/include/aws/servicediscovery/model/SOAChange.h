/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ServiceDiscovery {
namespace Model {

/**
 * <p>Updated Start of Authority (SOA) properties for a public or private DNS
 * namespace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/SOAChange">AWS
 * API Reference</a></p>
 */
class SOAChange {
 public:
  AWS_SERVICEDISCOVERY_API SOAChange() = default;
  AWS_SERVICEDISCOVERY_API SOAChange(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API SOAChange& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The updated time to live (TTL) for purposes of negative caching.</p>
   */
  inline long long GetTTL() const { return m_tTL; }
  inline bool TTLHasBeenSet() const { return m_tTLHasBeenSet; }
  inline void SetTTL(long long value) {
    m_tTLHasBeenSet = true;
    m_tTL = value;
  }
  inline SOAChange& WithTTL(long long value) {
    SetTTL(value);
    return *this;
  }
  ///@}
 private:
  long long m_tTL{0};
  bool m_tTLHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
