/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/TrendsValues.h>

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
 * <p>Contains the findings trend metrics data for a specific time point in the
 * requested time period.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/TrendsMetricsResult">AWS
 * API Reference</a></p>
 */
class TrendsMetricsResult {
 public:
  AWS_SECURITYHUB_API TrendsMetricsResult() = default;
  AWS_SECURITYHUB_API TrendsMetricsResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API TrendsMetricsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp for this data point in the findings trend metrics.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  TrendsMetricsResult& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finding trend metric values associated with this timestamp, including
   * severity counts.</p>
   */
  inline const TrendsValues& GetTrendsValues() const { return m_trendsValues; }
  inline bool TrendsValuesHasBeenSet() const { return m_trendsValuesHasBeenSet; }
  template <typename TrendsValuesT = TrendsValues>
  void SetTrendsValues(TrendsValuesT&& value) {
    m_trendsValuesHasBeenSet = true;
    m_trendsValues = std::forward<TrendsValuesT>(value);
  }
  template <typename TrendsValuesT = TrendsValues>
  TrendsMetricsResult& WithTrendsValues(TrendsValuesT&& value) {
    SetTrendsValues(std::forward<TrendsValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};

  TrendsValues m_trendsValues;
  bool m_timestampHasBeenSet = false;
  bool m_trendsValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
