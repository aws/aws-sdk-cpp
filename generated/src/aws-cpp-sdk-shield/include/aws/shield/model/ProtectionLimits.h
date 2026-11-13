/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/Limit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Shield {
namespace Model {

/**
 * <p>Limits settings on protections for your subscription. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/ProtectionLimits">AWS
 * API Reference</a></p>
 */
class ProtectionLimits {
 public:
  AWS_SHIELD_API ProtectionLimits() = default;
  AWS_SHIELD_API ProtectionLimits(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API ProtectionLimits& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The maximum number of resource types that you can specify in a
   * protection.</p>
   */
  inline const Aws::Vector<Limit>& GetProtectedResourceTypeLimits() const { return m_protectedResourceTypeLimits; }
  inline bool ProtectedResourceTypeLimitsHasBeenSet() const { return m_protectedResourceTypeLimitsHasBeenSet; }
  template <typename ProtectedResourceTypeLimitsT = Aws::Vector<Limit>>
  void SetProtectedResourceTypeLimits(ProtectedResourceTypeLimitsT&& value) {
    m_protectedResourceTypeLimitsHasBeenSet = true;
    m_protectedResourceTypeLimits = std::forward<ProtectedResourceTypeLimitsT>(value);
  }
  template <typename ProtectedResourceTypeLimitsT = Aws::Vector<Limit>>
  ProtectionLimits& WithProtectedResourceTypeLimits(ProtectedResourceTypeLimitsT&& value) {
    SetProtectedResourceTypeLimits(std::forward<ProtectedResourceTypeLimitsT>(value));
    return *this;
  }
  template <typename ProtectedResourceTypeLimitsT = Limit>
  ProtectionLimits& AddProtectedResourceTypeLimits(ProtectedResourceTypeLimitsT&& value) {
    m_protectedResourceTypeLimitsHasBeenSet = true;
    m_protectedResourceTypeLimits.emplace_back(std::forward<ProtectedResourceTypeLimitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Limit> m_protectedResourceTypeLimits;
  bool m_protectedResourceTypeLimitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Shield
}  // namespace Aws
