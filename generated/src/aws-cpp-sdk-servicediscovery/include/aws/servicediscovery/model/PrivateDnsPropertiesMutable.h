/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/SOA.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ServiceDiscovery {
namespace Model {

/**
 * <p>DNS properties for the private DNS namespace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PrivateDnsPropertiesMutable">AWS
 * API Reference</a></p>
 */
class PrivateDnsPropertiesMutable {
 public:
  AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutable() = default;
  AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutable(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API PrivateDnsPropertiesMutable& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Fields for the Start of Authority (SOA) record for the hosted zone for the
   * private DNS namespace.</p>
   */
  inline const SOA& GetSOA() const { return m_sOA; }
  inline bool SOAHasBeenSet() const { return m_sOAHasBeenSet; }
  template <typename SOAT = SOA>
  void SetSOA(SOAT&& value) {
    m_sOAHasBeenSet = true;
    m_sOA = std::forward<SOAT>(value);
  }
  template <typename SOAT = SOA>
  PrivateDnsPropertiesMutable& WithSOA(SOAT&& value) {
    SetSOA(std::forward<SOAT>(value));
    return *this;
  }
  ///@}
 private:
  SOA m_sOA;
  bool m_sOAHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
