/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/SeverityTrendsCount.h>

#include <utility>

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
 * <p>Contains the aggregated finding values for a specific point in the findings
 * trend timeline.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TrendsValues">AWS
 * API Reference</a></p>
 */
class TrendsValues {
 public:
  AWS_SECURITYHUB_API TrendsValues() = default;
  AWS_SECURITYHUB_API TrendsValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API TrendsValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The count of findings organized by severity level for this data point in the
   * trend timeline.</p>
   */
  inline const SeverityTrendsCount& GetSeverityTrends() const { return m_severityTrends; }
  inline bool SeverityTrendsHasBeenSet() const { return m_severityTrendsHasBeenSet; }
  template <typename SeverityTrendsT = SeverityTrendsCount>
  void SetSeverityTrends(SeverityTrendsT&& value) {
    m_severityTrendsHasBeenSet = true;
    m_severityTrends = std::forward<SeverityTrendsT>(value);
  }
  template <typename SeverityTrendsT = SeverityTrendsCount>
  TrendsValues& WithSeverityTrends(SeverityTrendsT&& value) {
    SetSeverityTrends(std::forward<SeverityTrendsT>(value));
    return *this;
  }
  ///@}
 private:
  SeverityTrendsCount m_severityTrends;
  bool m_severityTrendsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
