/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>Contains the event hold duration configuration, specified in either days or
 * years.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/EventHoldDuration">AWS
 * API Reference</a></p>
 */
class EventHoldDuration {
 public:
  AWS_S3_API EventHoldDuration() = default;
  AWS_S3_API EventHoldDuration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API EventHoldDuration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The number of days for the event hold duration. The minimum value is 1 and
   * the maximum value is 36,500.</p>
   */
  inline int GetDays() const { return m_days; }
  inline bool DaysHasBeenSet() const { return m_daysHasBeenSet; }
  inline void SetDays(int value) {
    m_daysHasBeenSet = true;
    m_days = value;
  }
  inline EventHoldDuration& WithDays(int value) {
    SetDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of years for the event hold duration. The minimum value is 1 and
   * the maximum value is 100.</p>
   */
  inline int GetYears() const { return m_years; }
  inline bool YearsHasBeenSet() const { return m_yearsHasBeenSet; }
  inline void SetYears(int value) {
    m_yearsHasBeenSet = true;
    m_years = value;
  }
  inline EventHoldDuration& WithYears(int value) {
    SetYears(value);
    return *this;
  }
  ///@}
 private:
  int m_days{0};

  int m_years{0};
  bool m_daysHasBeenSet = false;
  bool m_yearsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
