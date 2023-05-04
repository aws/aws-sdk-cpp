/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicSingularFilterConstant.h>
#include <aws/quicksight/model/NamedFilterAggType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A filter that filters topics based on the value of a numeric field. The
   * filter includes only topics whose numeric field value matches the specified
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicNumericEqualityFilter">AWS
   * API Reference</a></p>
   */
  class TopicNumericEqualityFilter
  {
  public:
    AWS_QUICKSIGHT_API TopicNumericEqualityFilter();
    AWS_QUICKSIGHT_API TopicNumericEqualityFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicNumericEqualityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The constant used in a numeric equality filter.</p>
     */
    inline const TopicSingularFilterConstant& GetConstant() const{ return m_constant; }

    /**
     * <p>The constant used in a numeric equality filter.</p>
     */
    inline bool ConstantHasBeenSet() const { return m_constantHasBeenSet; }

    /**
     * <p>The constant used in a numeric equality filter.</p>
     */
    inline void SetConstant(const TopicSingularFilterConstant& value) { m_constantHasBeenSet = true; m_constant = value; }

    /**
     * <p>The constant used in a numeric equality filter.</p>
     */
    inline void SetConstant(TopicSingularFilterConstant&& value) { m_constantHasBeenSet = true; m_constant = std::move(value); }

    /**
     * <p>The constant used in a numeric equality filter.</p>
     */
    inline TopicNumericEqualityFilter& WithConstant(const TopicSingularFilterConstant& value) { SetConstant(value); return *this;}

    /**
     * <p>The constant used in a numeric equality filter.</p>
     */
    inline TopicNumericEqualityFilter& WithConstant(TopicSingularFilterConstant&& value) { SetConstant(std::move(value)); return *this;}


    /**
     * <p>An aggregation function that specifies how to calculate the value of a
     * numeric field for a topic. Valid values for this structure are
     * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
     * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
     * <code>VAR</code>, and <code>VARP</code>.</p>
     */
    inline const NamedFilterAggType& GetAggregation() const{ return m_aggregation; }

    /**
     * <p>An aggregation function that specifies how to calculate the value of a
     * numeric field for a topic. Valid values for this structure are
     * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
     * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
     * <code>VAR</code>, and <code>VARP</code>.</p>
     */
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    /**
     * <p>An aggregation function that specifies how to calculate the value of a
     * numeric field for a topic. Valid values for this structure are
     * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
     * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
     * <code>VAR</code>, and <code>VARP</code>.</p>
     */
    inline void SetAggregation(const NamedFilterAggType& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    /**
     * <p>An aggregation function that specifies how to calculate the value of a
     * numeric field for a topic. Valid values for this structure are
     * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
     * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
     * <code>VAR</code>, and <code>VARP</code>.</p>
     */
    inline void SetAggregation(NamedFilterAggType&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    /**
     * <p>An aggregation function that specifies how to calculate the value of a
     * numeric field for a topic. Valid values for this structure are
     * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
     * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
     * <code>VAR</code>, and <code>VARP</code>.</p>
     */
    inline TopicNumericEqualityFilter& WithAggregation(const NamedFilterAggType& value) { SetAggregation(value); return *this;}

    /**
     * <p>An aggregation function that specifies how to calculate the value of a
     * numeric field for a topic. Valid values for this structure are
     * <code>NO_AGGREGATION</code>, <code>SUM</code>, <code>AVERAGE</code>,
     * <code>COUNT</code>, <code>DISTINCT_COUNT</code>, <code>MAX</code>,
     * <code>MEDIAN</code>, <code>MIN</code>, <code>STDEV</code>, <code>STDEVP</code>,
     * <code>VAR</code>, and <code>VARP</code>.</p>
     */
    inline TopicNumericEqualityFilter& WithAggregation(NamedFilterAggType&& value) { SetAggregation(std::move(value)); return *this;}

  private:

    TopicSingularFilterConstant m_constant;
    bool m_constantHasBeenSet = false;

    NamedFilterAggType m_aggregation;
    bool m_aggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
