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
    AWS_QUICKSIGHT_API ParameterSliderControl();
    AWS_QUICKSIGHT_API ParameterSliderControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterSliderControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the <code>ParameterSliderControl</code>.</p>
     */
    inline const Aws::String& GetParameterControlId() const{ return m_parameterControlId; }
    inline bool ParameterControlIdHasBeenSet() const { return m_parameterControlIdHasBeenSet; }
    inline void SetParameterControlId(const Aws::String& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = value; }
    inline void SetParameterControlId(Aws::String&& value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId = std::move(value); }
    inline void SetParameterControlId(const char* value) { m_parameterControlIdHasBeenSet = true; m_parameterControlId.assign(value); }
    inline ParameterSliderControl& WithParameterControlId(const Aws::String& value) { SetParameterControlId(value); return *this;}
    inline ParameterSliderControl& WithParameterControlId(Aws::String&& value) { SetParameterControlId(std::move(value)); return *this;}
    inline ParameterSliderControl& WithParameterControlId(const char* value) { SetParameterControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the <code>ParameterSliderControl</code>.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ParameterSliderControl& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ParameterSliderControl& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ParameterSliderControl& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source parameter name of the <code>ParameterSliderControl</code>.</p>
     */
    inline const Aws::String& GetSourceParameterName() const{ return m_sourceParameterName; }
    inline bool SourceParameterNameHasBeenSet() const { return m_sourceParameterNameHasBeenSet; }
    inline void SetSourceParameterName(const Aws::String& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = value; }
    inline void SetSourceParameterName(Aws::String&& value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName = std::move(value); }
    inline void SetSourceParameterName(const char* value) { m_sourceParameterNameHasBeenSet = true; m_sourceParameterName.assign(value); }
    inline ParameterSliderControl& WithSourceParameterName(const Aws::String& value) { SetSourceParameterName(value); return *this;}
    inline ParameterSliderControl& WithSourceParameterName(Aws::String&& value) { SetSourceParameterName(std::move(value)); return *this;}
    inline ParameterSliderControl& WithSourceParameterName(const char* value) { SetSourceParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display options of a control.</p>
     */
    inline const SliderControlDisplayOptions& GetDisplayOptions() const{ return m_displayOptions; }
    inline bool DisplayOptionsHasBeenSet() const { return m_displayOptionsHasBeenSet; }
    inline void SetDisplayOptions(const SliderControlDisplayOptions& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = value; }
    inline void SetDisplayOptions(SliderControlDisplayOptions&& value) { m_displayOptionsHasBeenSet = true; m_displayOptions = std::move(value); }
    inline ParameterSliderControl& WithDisplayOptions(const SliderControlDisplayOptions& value) { SetDisplayOptions(value); return *this;}
    inline ParameterSliderControl& WithDisplayOptions(SliderControlDisplayOptions&& value) { SetDisplayOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The larger value that is displayed at the right of the slider.</p>
     */
    inline double GetMaximumValue() const{ return m_maximumValue; }
    inline bool MaximumValueHasBeenSet() const { return m_maximumValueHasBeenSet; }
    inline void SetMaximumValue(double value) { m_maximumValueHasBeenSet = true; m_maximumValue = value; }
    inline ParameterSliderControl& WithMaximumValue(double value) { SetMaximumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The smaller value that is displayed at the left of the slider.</p>
     */
    inline double GetMinimumValue() const{ return m_minimumValue; }
    inline bool MinimumValueHasBeenSet() const { return m_minimumValueHasBeenSet; }
    inline void SetMinimumValue(double value) { m_minimumValueHasBeenSet = true; m_minimumValue = value; }
    inline ParameterSliderControl& WithMinimumValue(double value) { SetMinimumValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of increments that the slider bar is divided into.</p>
     */
    inline double GetStepSize() const{ return m_stepSize; }
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

    double m_maximumValue;
    bool m_maximumValueHasBeenSet = false;

    double m_minimumValue;
    bool m_minimumValueHasBeenSet = false;

    double m_stepSize;
    bool m_stepSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
