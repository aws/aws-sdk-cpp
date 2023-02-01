/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies metric-based criteria for including or excluding endpoints from a
   * segment. These criteria derive from custom metrics that you define for
   * endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/MetricDimension">AWS
   * API Reference</a></p>
   */
  class MetricDimension
  {
  public:
    AWS_PINPOINT_API MetricDimension();
    AWS_PINPOINT_API MetricDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MetricDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline const Aws::String& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline void SetComparisonOperator(const Aws::String& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline void SetComparisonOperator(Aws::String&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline void SetComparisonOperator(const char* value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator.assign(value); }

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline MetricDimension& WithComparisonOperator(const Aws::String& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline MetricDimension& WithComparisonOperator(Aws::String&& value) { SetComparisonOperator(std::move(value)); return *this;}

    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline MetricDimension& WithComparisonOperator(const char* value) { SetComparisonOperator(value); return *this;}


    /**
     * <p>The value to compare.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value to compare.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to compare.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to compare.</p>
     */
    inline MetricDimension& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
