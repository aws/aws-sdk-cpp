/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Contains counts of findings grouped by severity level for trend
 * analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SeverityTrendsCount">AWS
 * API Reference</a></p>
 */
class SeverityTrendsCount {
 public:
  AWS_SECURITYHUB_API SeverityTrendsCount() = default;
  AWS_SECURITYHUB_API SeverityTrendsCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API SeverityTrendsCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The count of findings with Unknown severity level at this point in the trend
   * timeline.</p>
   */
  inline long long GetUnknown() const { return m_unknown; }
  inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
  inline void SetUnknown(long long value) {
    m_unknownHasBeenSet = true;
    m_unknown = value;
  }
  inline SeverityTrendsCount& WithUnknown(long long value) {
    SetUnknown(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with Informational severity level at this point in the
   * trend timeline.</p>
   */
  inline long long GetInformational() const { return m_informational; }
  inline bool InformationalHasBeenSet() const { return m_informationalHasBeenSet; }
  inline void SetInformational(long long value) {
    m_informationalHasBeenSet = true;
    m_informational = value;
  }
  inline SeverityTrendsCount& WithInformational(long long value) {
    SetInformational(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with Low severity level at this point in the trend
   * timeline.</p>
   */
  inline long long GetLow() const { return m_low; }
  inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
  inline void SetLow(long long value) {
    m_lowHasBeenSet = true;
    m_low = value;
  }
  inline SeverityTrendsCount& WithLow(long long value) {
    SetLow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with Medium severity level at this point in the trend
   * timeline.</p>
   */
  inline long long GetMedium() const { return m_medium; }
  inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
  inline void SetMedium(long long value) {
    m_mediumHasBeenSet = true;
    m_medium = value;
  }
  inline SeverityTrendsCount& WithMedium(long long value) {
    SetMedium(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with High severity level at this point in the trend
   * timeline.</p>
   */
  inline long long GetHigh() const { return m_high; }
  inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
  inline void SetHigh(long long value) {
    m_highHasBeenSet = true;
    m_high = value;
  }
  inline SeverityTrendsCount& WithHigh(long long value) {
    SetHigh(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with Critical severity level at this point in the trend
   * timeline.</p>
   */
  inline long long GetCritical() const { return m_critical; }
  inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
  inline void SetCritical(long long value) {
    m_criticalHasBeenSet = true;
    m_critical = value;
  }
  inline SeverityTrendsCount& WithCritical(long long value) {
    SetCritical(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with Fatal severity level at this point in the trend
   * timeline.</p>
   */
  inline long long GetFatal() const { return m_fatal; }
  inline bool FatalHasBeenSet() const { return m_fatalHasBeenSet; }
  inline void SetFatal(long long value) {
    m_fatalHasBeenSet = true;
    m_fatal = value;
  }
  inline SeverityTrendsCount& WithFatal(long long value) {
    SetFatal(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of findings with severity levels not fitting into the standard
   * categories at this point in the trend timeline.</p>
   */
  inline long long GetOther() const { return m_other; }
  inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }
  inline void SetOther(long long value) {
    m_otherHasBeenSet = true;
    m_other = value;
  }
  inline SeverityTrendsCount& WithOther(long long value) {
    SetOther(value);
    return *this;
  }
  ///@}
 private:
  long long m_unknown{0};

  long long m_informational{0};

  long long m_low{0};

  long long m_medium{0};

  long long m_high{0};

  long long m_critical{0};

  long long m_fatal{0};

  long long m_other{0};
  bool m_unknownHasBeenSet = false;
  bool m_informationalHasBeenSet = false;
  bool m_lowHasBeenSet = false;
  bool m_mediumHasBeenSet = false;
  bool m_highHasBeenSet = false;
  bool m_criticalHasBeenSet = false;
  bool m_fatalHasBeenSet = false;
  bool m_otherHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
