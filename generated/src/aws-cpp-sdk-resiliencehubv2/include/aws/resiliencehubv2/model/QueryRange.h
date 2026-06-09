/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/QueryDataPoint.h>
#include <aws/resiliencehubv2/model/QueryGranularity.h>

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
 * <p>Defines a time range for dependency query data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/QueryRange">AWS
 * API Reference</a></p>
 */
class QueryRange {
 public:
  AWS_RESILIENCEHUBV2_API QueryRange() = default;
  AWS_RESILIENCEHUBV2_API QueryRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API QueryRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start time of the query range.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  QueryRange& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the query range.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  QueryRange& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The granularity of the query range data points.</p>
   */
  inline QueryGranularity GetGranularity() const { return m_granularity; }
  inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
  inline void SetGranularity(QueryGranularity value) {
    m_granularityHasBeenSet = true;
    m_granularity = value;
  }
  inline QueryRange& WithGranularity(QueryGranularity value) {
    SetGranularity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data points within the query range.</p>
   */
  inline const Aws::Vector<QueryDataPoint>& GetDataPoints() const { return m_dataPoints; }
  inline bool DataPointsHasBeenSet() const { return m_dataPointsHasBeenSet; }
  template <typename DataPointsT = Aws::Vector<QueryDataPoint>>
  void SetDataPoints(DataPointsT&& value) {
    m_dataPointsHasBeenSet = true;
    m_dataPoints = std::forward<DataPointsT>(value);
  }
  template <typename DataPointsT = Aws::Vector<QueryDataPoint>>
  QueryRange& WithDataPoints(DataPointsT&& value) {
    SetDataPoints(std::forward<DataPointsT>(value));
    return *this;
  }
  template <typename DataPointsT = QueryDataPoint>
  QueryRange& AddDataPoints(DataPointsT&& value) {
    m_dataPointsHasBeenSet = true;
    m_dataPoints.emplace_back(std::forward<DataPointsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  QueryGranularity m_granularity{QueryGranularity::NOT_SET};

  Aws::Vector<QueryDataPoint> m_dataPoints;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_granularityHasBeenSet = false;
  bool m_dataPointsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
