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
    AWS_PINPOINT_API MetricDimension() = default;
    AWS_PINPOINT_API MetricDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API MetricDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use when comparing metric values. Valid values are:
     * GREATER_THAN, LESS_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN_OR_EQUAL, and
     * EQUAL.</p>
     */
    inline const Aws::String& GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    template<typename ComparisonOperatorT = Aws::String>
    void SetComparisonOperator(ComparisonOperatorT&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::forward<ComparisonOperatorT>(value); }
    template<typename ComparisonOperatorT = Aws::String>
    MetricDimension& WithComparisonOperator(ComparisonOperatorT&& value) { SetComparisonOperator(std::forward<ComparisonOperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to compare.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricDimension& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
