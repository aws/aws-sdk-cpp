/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SliderControlDisplayOptions.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterSliderControl">AWS
   * API Reference</a></p>
   */
  class ParameterSliderControl
  {
  public:
    AWS_QUICKSIGHT_API ParameterSliderControl() = default;
    AWS_QUICKSIGHT_API ParameterSliderControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterSliderControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterSliderControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const { return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    template<typename ParameterControlIdT = Aws::String>
    void SetParameterControlId(ParameterControlIdT&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::forward<ParameterControlIdT>(value); }
    template<typename ParameterControlIdT = Aws::String>
    ParameterSliderControl& WithParameterControlId(ParameterControlIdT&& value) { SetParameterControlId(std::forward<ParameterControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterSliderControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ParameterSliderControl& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterSliderControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const { return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    template<typename SourceParameterNameT = Aws::String>
    void SetSourceParameterName(SourceParameterNameT&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::forward<SourceParameterNameT>(value); }
    template<typename SourceParameterNameT = Aws::String>
    ParameterSliderControl& WithSourceParameterName(SourceParameterNameT&& value) { SetSourceParameterName(std::forward<SourceParameterNameT>(value)); return *this;}
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
    ParameterSliderControl& WithDisplayOptions(DisplayOptionsT&& value) { SetDisplayOptions(std::forward<DisplayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline double GetMaximumValue() const { return m_maximumValue; }
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }
    inline void SetMaximumValue(double value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }
    inline ParameterSliderControl& WithMaximumValue(double value) { SetMaximumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline double GetMinimumValue() const { return m_minimumValue; }
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }
    inline void SetMinimumValue(double value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }
    inline ParameterSliderControl& WithMinimumValue(double value) { SetMinimumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline double GetStepSize() const { return m_stepSize; }
    inline bool StepSizeHasBeenSet() const { return m_stepSizeHasBeenSet; }
    inline void SetStepSize(double value) { m_stepSizeHasBeenSet = true; m_stepSize = value; }
    inline ParameterSliderControl& WithStepSize(double value) { SetStepSize(value); return *this;}
    ///@}
  private:

    Aws::String m_parameterControlId;
    bool m_parameterControlIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_sourceParameterName;
    bool m_sourceParameterNameHasBeenSet = false;

    SliderControlDisplayOptions m_displayOptions;
    bool m_displayOptionsHasBeenSet = false;

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
