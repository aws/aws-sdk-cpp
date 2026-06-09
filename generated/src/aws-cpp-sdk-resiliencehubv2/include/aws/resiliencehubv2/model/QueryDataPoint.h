/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A data point in a dependency query range.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/QueryDataPoint">AWS
 * API Reference</a></p>
 */
class QueryDataPoint {
 public:
  AWS_RESILIENCEHUBV2_API QueryDataPoint() = default;
  AWS_RESILIENCEHUBV2_API QueryDataPoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API QueryDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp of the data point.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  QueryDataPoint& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of queries at this data point.</p>
   */
  inline long long GetQueryCount() const { return m_queryCount; }
  inline bool QueryCountHasBeenSet() const { return m_queryCountHasBeenSet; }
  inline void SetQueryCount(long long value) {
    m_queryCountHasBeenSet = true;
    m_queryCount = value;
  }
  inline QueryDataPoint& WithQueryCount(long long value) {
    SetQueryCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};

  long long m_queryCount{0};
  bool m_timestampHasBeenSet = false;
  bool m_queryCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
