/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Sustainability {
namespace Model {

/**
 * <p> Contains configuration for the fiscal year granularities (e.g.,
 * <code>YEARLY_FISCAL</code>, <code>QUARTERLY_FISCAL</code>. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/GranularityConfiguration">AWS
 * API Reference</a></p>
 */
class GranularityConfiguration {
 public:
  AWS_SUSTAINABILITY_API GranularityConfiguration() = default;
  AWS_SUSTAINABILITY_API GranularityConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API GranularityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The month (1-12) when the fiscal year begins. Used for
   * <code>YEARLY_FISCAL</code> and <code>QUARTERLY_FISCAL</code> granularity.
   * Defaults to 1 (January). </p>
   */
  inline int GetFiscalYearStartMonth() const { return m_fiscalYearStartMonth; }
  inline bool FiscalYearStartMonthHasBeenSet() const { return m_fiscalYearStartMonthHasBeenSet; }
  inline void SetFiscalYearStartMonth(int value) {
    m_fiscalYearStartMonthHasBeenSet = true;
    m_fiscalYearStartMonth = value;
  }
  inline GranularityConfiguration& WithFiscalYearStartMonth(int value) {
    SetFiscalYearStartMonth(value);
    return *this;
  }
  ///@}
 private:
  int m_fiscalYearStartMonth{0};
  bool m_fiscalYearStartMonthHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
