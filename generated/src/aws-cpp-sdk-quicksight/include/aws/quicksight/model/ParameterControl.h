/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ParameterDateTimePickerControl.h>
#include <aws/quicksight/model/ParameterListControl.h>
#include <aws/quicksight/model/ParameterDropDownControl.h>
#include <aws/quicksight/model/ParameterTextFieldControl.h>
#include <aws/quicksight/model/ParameterTextAreaControl.h>
#include <aws/quicksight/model/ParameterSliderControl.h>
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
   * <p>The control of a parameter that users can interact with in a dashboard or an
   * analysis.</p> <p>This is a union type structure. For this structure to be valid,
   * only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParameterControl">AWS
   * API Reference</a></p>
   */
  class ParameterControl
  {
  public:
    AWS_QUICKSIGHT_API ParameterControl();
    AWS_QUICKSIGHT_API ParameterControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A control from a date parameter that specifies date and time.</p>
     */
    inline const ParameterDateTimePickerControl& GetDateTimePicker() const{ return m_dateTimePicker; }
    inline bool DateTimePickerHasBeenSet() const { return m_dateTimePickerHasBeenSet; }
    inline void SetDateTimePicker(const ParameterDateTimePickerControl& value) { m_dateTimePickerHasBeenSet = true; m_dateTimePicker = value; }
    inline void SetDateTimePicker(ParameterDateTimePickerControl&& value) { m_dateTimePickerHasBeenSet = true; m_dateTimePicker = std::move(value); }
    inline ParameterControl& WithDateTimePicker(const ParameterDateTimePickerControl& value) { SetDateTimePicker(value); return *this;}
    inline ParameterControl& WithDateTimePicker(ParameterDateTimePickerControl&& value) { SetDateTimePicker(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a list with buttons or boxes that are used to select
     * either a single value or multiple values.</p>
     */
    inline const ParameterListControl& GetList() const{ return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    inline void SetList(const ParameterListControl& value) { m_listHasBeenSet = true; m_list = value; }
    inline void SetList(ParameterListControl&& value) { m_listHasBeenSet = true; m_list = std::move(value); }
    inline ParameterControl& WithList(const ParameterListControl& value) { SetList(value); return *this;}
    inline ParameterControl& WithList(ParameterListControl&& value) { SetList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline const ParameterDropDownControl& GetDropdown() const{ return m_dropdown; }
    inline bool DropdownHasBeenSet() const { return m_dropdownHasBeenSet; }
    inline void SetDropdown(const ParameterDropDownControl& value) { m_dropdownHasBeenSet = true; m_dropdown = value; }
    inline void SetDropdown(ParameterDropDownControl&& value) { m_dropdownHasBeenSet = true; m_dropdown = std::move(value); }
    inline ParameterControl& WithDropdown(const ParameterDropDownControl& value) { SetDropdown(value); return *this;}
    inline ParameterControl& WithDropdown(ParameterDropDownControl&& value) { SetDropdown(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline const ParameterTextFieldControl& GetTextField() const{ return m_textField; }
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }
    inline void SetTextField(const ParameterTextFieldControl& value) { m_textFieldHasBeenSet = true; m_textField = value; }
    inline void SetTextField(ParameterTextFieldControl&& value) { m_textFieldHasBeenSet = true; m_textField = std::move(value); }
    inline ParameterControl& WithTextField(const ParameterTextFieldControl& value) { SetTextField(value); return *this;}
    inline ParameterControl& WithTextField(ParameterTextFieldControl&& value) { SetTextField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline const ParameterTextAreaControl& GetTextArea() const{ return m_textArea; }
    inline bool TextAreaHasBeenSet() const { return m_textAreaHasBeenSet; }
    inline void SetTextArea(const ParameterTextAreaControl& value) { m_textAreaHasBeenSet = true; m_textArea = value; }
    inline void SetTextArea(ParameterTextAreaControl&& value) { m_textAreaHasBeenSet = true; m_textArea = std::move(value); }
    inline ParameterControl& WithTextArea(const ParameterTextAreaControl& value) { SetTextArea(value); return *this;}
    inline ParameterControl& WithTextArea(ParameterTextAreaControl&& value) { SetTextArea(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline const ParameterSliderControl& GetSlider() const{ return m_slider; }
    inline bool SliderHasBeenSet() const { return m_sliderHasBeenSet; }
    inline void SetSlider(const ParameterSliderControl& value) { m_sliderHasBeenSet = true; m_slider = value; }
    inline void SetSlider(ParameterSliderControl&& value) { m_sliderHasBeenSet = true; m_slider = std::move(value); }
    inline ParameterControl& WithSlider(const ParameterSliderControl& value) { SetSlider(value); return *this;}
    inline ParameterControl& WithSlider(ParameterSliderControl&& value) { SetSlider(std::move(value)); return *this;}
    ///@}
  private:

    ParameterDateTimePickerControl m_dateTimePicker;
    bool m_dateTimePickerHasBeenSet = false;

    ParameterListControl m_list;
    bool m_listHasBeenSet = false;

    ParameterDropDownControl m_dropdown;
    bool m_dropdownHasBeenSet = false;

    ParameterTextFieldControl m_textField;
    bool m_textFieldHasBeenSet = false;

    ParameterTextAreaControl m_textArea;
    bool m_textAreaHasBeenSet = false;

    ParameterSliderControl m_slider;
    bool m_sliderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
