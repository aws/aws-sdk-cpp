/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourcesTrendsValues.h>

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
 * <p>Contains the resource trend metrics data for a specific time point in the
 * requested time period.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesTrendsMetricsResult">AWS
 * API Reference</a></p>
 */
class ResourcesTrendsMetricsResult {
 public:
  AWS_SECURITYHUB_API ResourcesTrendsMetricsResult() = default;
  AWS_SECURITYHUB_API ResourcesTrendsMetricsResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourcesTrendsMetricsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp for this data point in the resources trend metrics.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  ResourcesTrendsMetricsResult& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource trend metric values associated with this timestamp, including
   * resource counts.</p>
   */
  inline const ResourcesTrendsValues& GetTrendsValues() const { return m_trendsValues; }
  inline bool TrendsValuesHasBeenSet() const { return m_trendsValuesHasBeenSet; }
  template <typename TrendsValuesT = ResourcesTrendsValues>
  void SetTrendsValues(TrendsValuesT&& value) {
    m_trendsValuesHasBeenSet = true;
    m_trendsValues = std::forward<TrendsValuesT>(value);
  }
  template <typename TrendsValuesT = ResourcesTrendsValues>
  ResourcesTrendsMetricsResult& WithTrendsValues(TrendsValuesT&& value) {
    SetTrendsValues(std::forward<TrendsValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  ResourcesTrendsValues m_trendsValues;
  bool m_trendsValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
