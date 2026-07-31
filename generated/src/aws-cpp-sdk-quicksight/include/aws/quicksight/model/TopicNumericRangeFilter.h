/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NamedFilterAggType.h>
#include <aws/quicksight/model/NullFilterType.h>
#include <aws/quicksight/model/TopicRangeFilterConstant.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A filter that filters topics based on the value of a numeric field. The
 * filter includes only topics whose numeric field value falls within the specified
 * range.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicNumericRangeFilter">AWS
 * API Reference</a></p>
 */
class TopicNumericRangeFilter {
 public:
  AWS_QUICKSIGHT_API TopicNumericRangeFilter() = default;
  AWS_QUICKSIGHT_API TopicNumericRangeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicNumericRangeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A Boolean value that indicates whether the endpoints of the numeric range are
   * included in the filter. If set to true, topics whose numeric field value is
   * equal to the endpoint values will be included in the filter. If set to false,
   * topics whose numeric field value is equal to the endpoint values will be
   * excluded from the filter.</p>
   */
  inline bool GetInclusive() const { return m_inclusive; }
  inline bool InclusiveHasBeenSet() const { return m_inclusiveHasBeenSet; }
  inline void SetInclusive(bool value) {
    m_inclusiveHasBeenSet = true;
    m_inclusive = value;
  }
  inline TopicNumericRangeFilter& WithInclusive(bool value) {
    SetInclusive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constant used in a numeric range filter.</p>
   */
  inline const TopicRangeFilterConstant& GetConstant() const { return m_constant; }
  inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }
  template <typename ConstantT = TopicRangeFilterConstant>
  void SetConstant(ConstantT&& value) {
    m_constantHasBeenSet = true;
    m_constant = std::forward<ConstantT>(value);
  }
  template <typename ConstantT = TopicRangeFilterConstant>
  TopicNumericRangeFilter& WithConstant(ConstantT&& value) {
    SetConstant(std::forward<ConstantT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An aggregation function that specifies how to calculate the value of a
   * numeric field for a topic, Valid values for this structure are
   * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
   * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
   * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
   * <code>VAR</code>, and <code>VARP</code>.</p>
   */
  inline NamedFilterAggType GetAggregation() const { return m_aggregation; }
  inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
  inline void SetAggregation(NamedFilterAggType value) {
    m_aggregationHasBeenSet = true;
    m_aggregation = value;
  }
  inline TopicNumericRangeFilter& WithAggregation(NamedFilterAggType value) {
    SetAggregation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that indicates if the filter is inverse.</p>
   */
  inline bool GetInverse() const { return m_inverse; }
  inline bool InverseHasBeenSet() const { return m_inverseHasBeenSet; }
  inline void SetInverse(bool value) {
    m_inverseHasBeenSet = true;
    m_inverse = value;
  }
  inline TopicNumericRangeFilter& WithInverse(bool value) {
    SetInverse(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>null</code> filter that is applied to the numeric range filter.</p>
   */
  inline NullFilterType GetNullFilter() const { return m_nullFilter; }
  inline bool NullFilterHasBeenSet() const { return m_nullFilterHasBeenSet; }
  inline void SetNullFilter(NullFilterType value) {
    m_nullFilterHasBeenSet = true;
    m_nullFilter = value;
  }
  inline TopicNumericRangeFilter& WithNullFilter(NullFilterType value) {
    SetNullFilter(value);
    return *this;
  }
  ///@}
 private:
  bool m_inclusive{false};

  TopicRangeFilterConstant m_constant;

  NamedFilterAggType m_aggregation{NamedFilterAggType::NOT_SET};

  bool m_inverse{false};

  NullFilterType m_nullFilter{NullFilterType::NOT_SET};
  bool m_inclusiveHasBeenSet = false;
  bool m_constantHasBeenSet = false;
  bool m_aggregationHasBeenSet = false;
  bool m_inverseHasBeenSet = false;
  bool m_nullFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
