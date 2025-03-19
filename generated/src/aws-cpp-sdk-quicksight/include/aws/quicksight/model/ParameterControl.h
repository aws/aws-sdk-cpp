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
    AWS_QUICKSIGHT_API ParameterControl() = default;
    AWS_QUICKSIGHT_API ParameterControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ParameterControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A control from a date parameter that specifies date and time.</p>
     */
    inline const ParameterDateTimePickerControl& GetDateTimePicker() const { return m_dateTimePicker; }
    inline bool DateTimePickerHasBeenSet() const { return m_dateTimePickerHasBeenSet; }
    template<typename DateTimePickerT = ParameterDateTimePickerControl>
    void SetDateTimePicker(DateTimePickerT&& value) { m_dateTimePickerHasBeenSet = true; m_dateTimePicker = std::forward<DateTimePickerT>(value); }
    template<typename DateTimePickerT = ParameterDateTimePickerControl>
    ParameterControl& WithDateTimePicker(DateTimePickerT&& value) { SetDateTimePicker(std::forward<DateTimePickerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a list with buttons or boxes that are used to select
     * either a single value or multiple values.</p>
     */
    inline const ParameterListControl& GetList() const { return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    template<typename ListT = ParameterListControl>
    void SetList(ListT&& value) { m_listHasBeenSet = true; m_list = std::forward<ListT>(value); }
    template<typename ListT = ParameterListControl>
    ParameterControl& WithList(ListT&& value) { SetList(std::forward<ListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline const ParameterDropDownControl& GetDropdown() const { return m_dropdown; }
    inline bool DropdownHasBeenSet() const { return m_dropdownHasBeenSet; }
    template<typename DropdownT = ParameterDropDownControl>
    void SetDropdown(DropdownT&& value) { m_dropdownHasBeenSet = true; m_dropdown = std::forward<DropdownT>(value); }
    template<typename DropdownT = ParameterDropDownControl>
    ParameterControl& WithDropdown(DropdownT&& value) { SetDropdown(std::forward<DropdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline const ParameterTextFieldControl& GetTextField() const { return m_textField; }
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }
    template<typename TextFieldT = ParameterTextFieldControl>
    void SetTextField(TextFieldT&& value) { m_textFieldHasBeenSet = true; m_textField = std::forward<TextFieldT>(value); }
    template<typename TextFieldT = ParameterTextFieldControl>
    ParameterControl& WithTextField(TextFieldT&& value) { SetTextField(std::forward<TextFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline const ParameterTextAreaControl& GetTextArea() const { return m_textArea; }
    inline bool TextAreaHasBeenSet() const { return m_textAreaHasBeenSet; }
    template<typename TextAreaT = ParameterTextAreaControl>
    void SetTextArea(TextAreaT&& value) { m_textAreaHasBeenSet = true; m_textArea = std::forward<TextAreaT>(value); }
    template<typename TextAreaT = ParameterTextAreaControl>
    ParameterControl& WithTextArea(TextAreaT&& value) { SetTextArea(std::forward<TextAreaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline const ParameterSliderControl& GetSlider() const { return m_slider; }
    inline bool SliderHasBeenSet() const { return m_sliderHasBeenSet; }
    template<typename SliderT = ParameterSliderControl>
    void SetSlider(SliderT&& value) { m_sliderHasBeenSet = true; m_slider = std::forward<SliderT>(value); }
    template<typename SliderT = ParameterSliderControl>
    ParameterControl& WithSlider(SliderT&& value) { SetSlider(std::forward<SliderT>(value)); return *this;}
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
