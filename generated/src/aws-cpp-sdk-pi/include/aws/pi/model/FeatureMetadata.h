/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/FeatureStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PI {
namespace Model {

/**
 * <p>The metadata for a feature. For example, the metadata might indicate that a
 * feature is turned on or off on a specific DB instance.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/FeatureMetadata">AWS
 * API Reference</a></p>
 */
class FeatureMetadata {
 public:
  AWS_PI_API FeatureMetadata() = default;
  AWS_PI_API FeatureMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PI_API FeatureMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The status of the feature on the DB instance. Possible values include the
   * following:</p> <ul> <li> <p> <code>ENABLED</code> - The feature is enabled on
   * the instance.</p> </li> <li> <p> <code>DISABLED</code> - The feature is disabled
   * on the instance.</p> </li> <li> <p> <code>UNSUPPORTED</code> - The feature isn't
   * supported on the instance.</p> </li> <li> <p>
   * <code>ENABLED_PENDING_REBOOT</code> - The feature is enabled on the instance but
   * requires a reboot to take effect.</p> </li> <li> <p>
   * <code>DISABLED_PENDING_REBOOT</code> - The feature is disabled on the instance
   * but requires a reboot to take effect.</p> </li> <li> <p> <code>UNKNOWN</code> -
   * The feature status couldn't be determined.</p> </li> </ul>
   */
  inline FeatureStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FeatureStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FeatureMetadata& WithStatus(FeatureStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  FeatureStatus m_status{FeatureStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PI
}  // namespace Aws
