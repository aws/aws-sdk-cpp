/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The minimum and maximum setup for an axis display range.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisDisplayMinMaxRange">AWS
   * API Reference</a></p>
   */
  class AxisDisplayMinMaxRange
  {
  public:
    AWS_QUICKSIGHT_API AxisDisplayMinMaxRange();
    AWS_QUICKSIGHT_API AxisDisplayMinMaxRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDisplayMinMaxRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum setup for an axis display range.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }

    /**
     * <p>The minimum setup for an axis display range.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>The minimum setup for an axis display range.</p>
     */
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>The minimum setup for an axis display range.</p>
     */
    inline AxisDisplayMinMaxRange& WithMinimum(double value) { SetMinimum(value); return *this;}


    /**
     * <p>The maximum setup for an axis display range.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }

    /**
     * <p>The maximum setup for an axis display range.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>The maximum setup for an axis display range.</p>
     */
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>The maximum setup for an axis display range.</p>
     */
    inline AxisDisplayMinMaxRange& WithMaximum(double value) { SetMaximum(value); return *this;}

  private:

    double m_minimum;
    bool m_minimumHasBeenSet = false;

    double m_maximum;
    bool m_maximumHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
