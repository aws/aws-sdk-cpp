/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TrustedAdvisor {
namespace Model {

/**
 * <p>Aggregation of Recommendation Resources</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationResourcesAggregates">AWS
 * API Reference</a></p>
 */
class RecommendationResourcesAggregates {
 public:
  AWS_TRUSTEDADVISOR_API RecommendationResourcesAggregates() = default;
  AWS_TRUSTEDADVISOR_API RecommendationResourcesAggregates(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRUSTEDADVISOR_API RecommendationResourcesAggregates& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of AWS resources that were flagged to be OK according to the
   * Trusted Advisor check</p>
   */
  inline long long GetOkCount() const { return m_okCount; }
  inline bool OkCountHasBeenSet() const { return m_okCountHasBeenSet; }
  inline void SetOkCount(long long value) {
    m_okCountHasBeenSet = true;
    m_okCount = value;
  }
  inline RecommendationResourcesAggregates& WithOkCount(long long value) {
    SetOkCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of AWS resources that were flagged to have warning according to
   * the Trusted Advisor check </p>
   */
  inline long long GetWarningCount() const { return m_warningCount; }
  inline bool WarningCountHasBeenSet() const { return m_warningCountHasBeenSet; }
  inline void SetWarningCount(long long value) {
    m_warningCountHasBeenSet = true;
    m_warningCount = value;
  }
  inline RecommendationResourcesAggregates& WithWarningCount(long long value) {
    SetWarningCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of AWS resources that were flagged to have errors according to the
   * Trusted Advisor check</p>
   */
  inline long long GetErrorCount() const { return m_errorCount; }
  inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }
  inline void SetErrorCount(long long value) {
    m_errorCountHasBeenSet = true;
    m_errorCount = value;
  }
  inline RecommendationResourcesAggregates& WithErrorCount(long long value) {
    SetErrorCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of AWS resources belonging to this Trusted Advisor check that were
   * excluded by the customer</p>
   */
  inline long long GetExcludedCount() const { return m_excludedCount; }
  inline bool ExcludedCountHasBeenSet() const { return m_excludedCountHasBeenSet; }
  inline void SetExcludedCount(long long value) {
    m_excludedCountHasBeenSet = true;
    m_excludedCount = value;
  }
  inline RecommendationResourcesAggregates& WithExcludedCount(long long value) {
    SetExcludedCount(value);
    return *this;
  }
  ///@}
 private:
  long long m_okCount{0};

  long long m_warningCount{0};

  long long m_errorCount{0};

  long long m_excludedCount{0};
  bool m_okCountHasBeenSet = false;
  bool m_warningCountHasBeenSet = false;
  bool m_errorCountHasBeenSet = false;
  bool m_excludedCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
