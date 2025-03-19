/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SliderControlDisplayOptions.h>
#include <aws/quicksight/model/SheetControlSliderType.h>
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
   * <p>A control to display a horizontal toggle bar. This is used to change a value
   * by sliding the toggle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterSliderControl">AWS
   * API Reference</a></p>
   */
  class FilterSliderControl
  {
  public:
    AWS_QUICKSIGHT_API FilterSliderControl() = default;
    AWS_QUICKSIGHT_API FilterSliderControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterSliderControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>FilterSliderControl</code>.</p>
     */
    inline const Aws::String& GetFilterControlId() const { return m_filterControlId; }
    inline bool FilterControlIdHasBeenSet() const { return m_filterControlIdHasBeenSet; }
    template<typename FilterControlIdT = Aws::String>
    void SetFilterControlId(FilterControlIdT&& value) { m_filterControlIdHasBeenSet = true; m_filterControlId = std::forward<FilterControlIdT>(value); }
    template<typename FilterControlIdT = Aws::String>
    FilterSliderControl& WithFilterControlId(FilterControlIdT&& value) { SetFilterControlId(std::forward<FilterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>FilterSliderControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    FilterSliderControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source filter ID of the <code>FilterSliderControl</code>.</p>
     */
    inline const Aws::String& GetSourceFilterId() const { return m_sourceFilterId; }
    inline bool SourceFilterIdHasBeenSet() const { return m_sourceFilterIdHasBeenSet; }
    template<typename SourceFilterIdT = Aws::String>
    void SetSourceFilterId(SourceFilterIdT&& value) { m_sourceFilterIdHasBeenSet = true; m_sourceFilterId = std::forward<SourceFilterIdT>(value); }
    template<typename SourceFilterIdT = Aws::String>
    FilterSliderControl& WithSourceFilterId(SourceFilterIdT&& value) { SetSourceFilterId(std::forward<SourceFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const SliderControlDisplayOptions& GetDisplayOptions() const { return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    template<typename DisplayOptionsT = SliderControlDisplayOptions>
    void SetDisplayOptions(DisplayOptionsT&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::forward<DisplayOptionsT>(value); }
    template<typename DisplayOptionsT = SliderControlDisplayOptions>
    FilterSliderControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the <code>FilterSliderControl</code>. Choose one of the following
     * options:</p> <ul> <li> <p> <code>SINGLE_POINT</code>: Filter against(equals) a
     * single data point.</p> </li> <li> <p> <code>RANGE</code>: Filter data that is in
     * a specified range.</p> </li> </ul>
     */
    inline SheetControlSliderType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SheetControlSliderType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FilterSliderControl& WithType(SheetControlSliderType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline double GetMaximumValue() const { return m_maximumValue; }
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }
    inline void SetMaximumValue(double value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }
    inline FilterSliderControl& WithMaximumValue(double value) { SetMaximumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline double GetMinimumValue() const { return m_minimumValue; }
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }
    inline void SetMinimumValue(double value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }
    inline FilterSliderControl& WithMinimumValue(double value) { SetMinimumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline double GetStepSize() const { return m_stepSize; }
    inline bool StepSizeHasBeenSet() const { return m_stepSizeHasBeenSet; }
    inline void SetStepSize(double value) { m_stepSizeHasBeenSet = true; m_stepSize = value; }
    inline FilterSliderControl& WithStepSize(double value) { SetStepSize(value); return *this;}
    ///@}
  private:

    Aws::String m_filterControlId;
    bool m_filterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceFilterId;
    bool m_sourceFilterIdHasBeenSet = false;

    SliderControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

    SheetControlSliderType m_type{SheetControlSliderType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_maximumValue{0.0};
    bool m_maximumValueHasBeenSet = false;

    double m_minimumValue{0.0};
    bool m_minimumValueHasBeenSet = false;

    double m_stepSize{0.0};
    bool m_stepSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
