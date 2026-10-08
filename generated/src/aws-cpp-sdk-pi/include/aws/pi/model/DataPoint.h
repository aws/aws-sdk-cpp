/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/pi/PI_EXPORTS.h>

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
 * <p>A timestamp, and a single numerical value, which together represent a
 * measurement at a particular point in time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DataPoint">AWS API
 * Reference</a></p>
 */
class DataPoint {
 public:
  AWS_PI_API DataPoint() = default;
  AWS_PI_API DataPoint(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PI_API DataPoint& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The time, in epoch format, associated with a particular
   * <code>Value</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  DataPoint& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual value associated with a particular <code>Timestamp</code>.</p>
   */
  inline double GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(double value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline DataPoint& WithValue(double value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};

  double m_value{0.0};
  bool m_timestampHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PI
}  // namespace Aws
