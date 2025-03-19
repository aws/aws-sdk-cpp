/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataPathValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
   * <p>The color map that determines the color options for a particular
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPathColor">AWS
   * API Reference</a></p>
   */
  class DataPathColor
  {
  public:
    AWS_QUICKSIGHT_API DataPathColor() = default;
    AWS_QUICKSIGHT_API DataPathColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The element that the color needs to be applied to.</p>
     */
    inline const DataPathValue& GetElement() const { return m_element; }
    inline bool ElementHasBeenSet() const { return m_elementHasBeenSet; }
    template<typename ElementT = DataPathValue>
    void SetElement(ElementT&& value) { m_elementHasBeenSet = true; m_element = std::forward<ElementT>(value); }
    template<typename ElementT = DataPathValue>
    DataPathColor& WithElement(ElementT&& value) { SetElement(std::forward<ElementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color that needs to be applied to the element.</p>
     */
    inline const Aws::String& GetColor() const { return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    template<typename ColorT = Aws::String>
    void SetColor(ColorT&& value) { m_colorHasBeenSet = true; m_color = std::forward<ColorT>(value); }
    template<typename ColorT = Aws::String>
    DataPathColor& WithColor(ColorT&& value) { SetColor(std::forward<ColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity of the field that the color needs to be applied to.</p>
     */
    inline TimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline DataPathColor& WithTimeGranularity(TimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}
  private:

    DataPathValue m_element;
    bool m_elementHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    TimeGranularity m_timeGranularity{TimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
