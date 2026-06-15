/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Revenue statistics for a single content path, including the path, revenue
 * amount, and request count.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RevenuePathStatistics">AWS
 * API Reference</a></p>
 */
class RevenuePathStatistics {
 public:
  AWS_WAFV2_API RevenuePathStatistics() = default;
  AWS_WAFV2_API RevenuePathStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API RevenuePathStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URI path.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  RevenuePathStatistics& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of total revenue from this path.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline RevenuePathStatistics& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total revenue amount from this path in the specified currency.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  RevenuePathStatistics& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of monetized requests to this path.</p>
   */
  inline long long GetRequestCount() const { return m_requestCount; }
  inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
  inline void SetRequestCount(long long value) {
    m_requestCountHasBeenSet = true;
    m_requestCount = value;
  }
  inline RevenuePathStatistics& WithRequestCount(long long value) {
    SetRequestCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  double m_percentage{0.0};

  Aws::String m_amount;

  long long m_requestCount{0};
  bool m_pathHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_requestCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
