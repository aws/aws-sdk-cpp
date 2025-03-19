/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisDisplayMinMaxRange.h>
#include <aws/quicksight/model/AxisDisplayDataDrivenRange.h>
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
   * <p>The range setup of a numeric axis display range.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisDisplayRange">AWS
   * API Reference</a></p>
   */
  class AxisDisplayRange
  {
  public:
    AWS_QUICKSIGHT_API AxisDisplayRange() = default;
    AWS_QUICKSIGHT_API AxisDisplayRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDisplayRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum and maximum setup of an axis display range.</p>
     */
    inline const AxisDisplayMinMaxRange& GetMinMax() const { return m_minMax; }
    inline bool MinMaxHasBeenSet() const { return m_minMaxHasBeenSet; }
    template<typename MinMaxT = AxisDisplayMinMaxRange>
    void SetMinMax(MinMaxT&& value) { m_minMaxHasBeenSet = true; m_minMax = std::forward<MinMaxT>(value); }
    template<typename MinMaxT = AxisDisplayMinMaxRange>
    AxisDisplayRange& WithMinMax(MinMaxT&& value) { SetMinMax(std::forward<MinMaxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data-driven setup of an axis display range.</p>
     */
    inline const AxisDisplayDataDrivenRange& GetDataDriven() const { return m_dataDriven; }
    inline bool DataDrivenHasBeenSet() const { return m_dataDrivenHasBeenSet; }
    template<typename DataDrivenT = AxisDisplayDataDrivenRange>
    void SetDataDriven(DataDrivenT&& value) { m_dataDrivenHasBeenSet = true; m_dataDriven = std::forward<DataDrivenT>(value); }
    template<typename DataDrivenT = AxisDisplayDataDrivenRange>
    AxisDisplayRange& WithDataDriven(DataDrivenT&& value) { SetDataDriven(std::forward<DataDrivenT>(value)); return *this;}
    ///@}
  private:

    AxisDisplayMinMaxRange m_minMax;
    bool m_minMaxHasBeenSet = false;

    AxisDisplayDataDrivenRange m_dataDriven;
    bool m_dataDrivenHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
