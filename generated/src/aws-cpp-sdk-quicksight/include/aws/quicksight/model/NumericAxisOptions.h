/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisScale.h>
#include <aws/quicksight/model/AxisDisplayRange.h>
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
   * <p>The options for an axis with a numeric field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericAxisOptions">AWS
   * API Reference</a></p>
   */
  class NumericAxisOptions
  {
  public:
    AWS_QUICKSIGHT_API NumericAxisOptions();
    AWS_QUICKSIGHT_API NumericAxisOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericAxisOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scale setup of a numeric axis.</p>
     */
    inline const AxisScale& GetScale() const{ return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(const AxisScale& value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline void SetScale(AxisScale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }
    inline NumericAxisOptions& WithScale(const AxisScale& value) { SetScale(value); return *this;}
    inline NumericAxisOptions& WithScale(AxisScale&& value) { SetScale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range setup of a numeric axis.</p>
     */
    inline const AxisDisplayRange& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const AxisDisplayRange& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(AxisDisplayRange&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline NumericAxisOptions& WithRange(const AxisDisplayRange& value) { SetRange(value); return *this;}
    inline NumericAxisOptions& WithRange(AxisDisplayRange&& value) { SetRange(std::move(value)); return *this;}
    ///@}
  private:

    AxisScale m_scale;
    bool m_scaleHasBeenSet = false;

    AxisDisplayRange m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
