/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/Shield_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Shield {
namespace Model {

/**
 * <p>Statistics objects for the various data types in <a>AttackVolume</a>.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackVolumeStatistics">AWS
 * API Reference</a></p>
 */
class AttackVolumeStatistics {
 public:
  AWS_SHIELD_API AttackVolumeStatistics() = default;
  AWS_SHIELD_API AttackVolumeStatistics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API AttackVolumeStatistics& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The maximum attack volume observed for the given unit.</p>
   */
  inline double GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(double value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline AttackVolumeStatistics& WithMax(double value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  double m_max{0.0};
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace Shield
}  // namespace Aws
