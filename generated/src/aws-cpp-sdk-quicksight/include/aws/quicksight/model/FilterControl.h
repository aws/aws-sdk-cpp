/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilterDateTimePickerControl.h>
#include <aws/quicksight/model/FilterListControl.h>
#include <aws/quicksight/model/FilterDropDownControl.h>
#include <aws/quicksight/model/FilterTextFieldControl.h>
#include <aws/quicksight/model/FilterTextAreaControl.h>
#include <aws/quicksight/model/FilterSliderControl.h>
#include <aws/quicksight/model/FilterRelativeDateTimeControl.h>
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
   * <p>The control of a filter that is used to interact with a dashboard or an
   * analysis.</p> <p>This is a union type structure. For this structure to be valid,
   * only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterControl">AWS
   * API Reference</a></p>
   */
  class FilterControl
  {
  public:
    AWS_QUICKSIGHT_API FilterControl();
    AWS_QUICKSIGHT_API FilterControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline const FilterDateTimePickerControl& GetDateTimePicker() const{ return m_dateTimePicker; }

    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline bool DateTimePickerHasBeenSet() const { return m_dateTimePickerHasBeenSet; }

    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline void SetDateTimePicker(const FilterDateTimePickerControl& value) { m_dateTimePickerHasBeenSet = true; m_dateTimePicker = value; }

    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline void SetDateTimePicker(FilterDateTimePickerControl&& value) { m_dateTimePickerHasBeenSet = true; m_dateTimePicker = std::move(value); }

    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline FilterControl& WithDateTimePicker(const FilterDateTimePickerControl& value) { SetDateTimePicker(value); return *this;}

    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline FilterControl& WithDateTimePicker(FilterDateTimePickerControl&& value) { SetDateTimePicker(std::move(value)); return *this;}


    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline const FilterListControl& GetList() const{ return m_list; }

    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }

    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline void SetList(const FilterListControl& value) { m_listHasBeenSet = true; m_list = value; }

    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline void SetList(FilterListControl&& value) { m_listHasBeenSet = true; m_list = std::move(value); }

    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline FilterControl& WithList(const FilterListControl& value) { SetList(value); return *this;}

    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline FilterControl& WithList(FilterListControl&& value) { SetList(std::move(value)); return *this;}


    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline const FilterDropDownControl& GetDropdown() const{ return m_dropdown; }

    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline bool DropdownHasBeenSet() const { return m_dropdownHasBeenSet; }

    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline void SetDropdown(const FilterDropDownControl& value) { m_dropdownHasBeenSet = true; m_dropdown = value; }

    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline void SetDropdown(FilterDropDownControl&& value) { m_dropdownHasBeenSet = true; m_dropdown = std::move(value); }

    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline FilterControl& WithDropdown(const FilterDropDownControl& value) { SetDropdown(value); return *this;}

    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline FilterControl& WithDropdown(FilterDropDownControl&& value) { SetDropdown(std::move(value)); return *this;}


    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline const FilterTextFieldControl& GetTextField() const{ return m_textField; }

    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }

    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline void SetTextField(const FilterTextFieldControl& value) { m_textFieldHasBeenSet = true; m_textField = value; }

    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline void SetTextField(FilterTextFieldControl&& value) { m_textFieldHasBeenSet = true; m_textField = std::move(value); }

    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline FilterControl& WithTextField(const FilterTextFieldControl& value) { SetTextField(value); return *this;}

    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline FilterControl& WithTextField(FilterTextFieldControl&& value) { SetTextField(std::move(value)); return *this;}


    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline const FilterTextAreaControl& GetTextArea() const{ return m_textArea; }

    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline bool TextAreaHasBeenSet() const { return m_textAreaHasBeenSet; }

    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline void SetTextArea(const FilterTextAreaControl& value) { m_textAreaHasBeenSet = true; m_textArea = value; }

    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline void SetTextArea(FilterTextAreaControl&& value) { m_textAreaHasBeenSet = true; m_textArea = std::move(value); }

    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline FilterControl& WithTextArea(const FilterTextAreaControl& value) { SetTextArea(value); return *this;}

    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline FilterControl& WithTextArea(FilterTextAreaControl&& value) { SetTextArea(std::move(value)); return *this;}


    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline const FilterSliderControl& GetSlider() const{ return m_slider; }

    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline bool SliderHasBeenSet() const { return m_sliderHasBeenSet; }

    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline void SetSlider(const FilterSliderControl& value) { m_sliderHasBeenSet = true; m_slider = value; }

    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline void SetSlider(FilterSliderControl&& value) { m_sliderHasBeenSet = true; m_slider = std::move(value); }

    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline FilterControl& WithSlider(const FilterSliderControl& value) { SetSlider(value); return *this;}

    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline FilterControl& WithSlider(FilterSliderControl&& value) { SetSlider(std::move(value)); return *this;}


    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline const FilterRelativeDateTimeControl& GetRelativeDateTime() const{ return m_relativeDateTime; }

    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline bool RelativeDateTimeHasBeenSet() const { return m_relativeDateTimeHasBeenSet; }

    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline void SetRelativeDateTime(const FilterRelativeDateTimeControl& value) { m_relativeDateTimeHasBeenSet = true; m_relativeDateTime = value; }

    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline void SetRelativeDateTime(FilterRelativeDateTimeControl&& value) { m_relativeDateTimeHasBeenSet = true; m_relativeDateTime = std::move(value); }

    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline FilterControl& WithRelativeDateTime(const FilterRelativeDateTimeControl& value) { SetRelativeDateTime(value); return *this;}

    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline FilterControl& WithRelativeDateTime(FilterRelativeDateTimeControl&& value) { SetRelativeDateTime(std::move(value)); return *this;}

  private:

    FilterDateTimePickerControl m_dateTimePicker;
    bool m_dateTimePickerHasBeenSet = false;

    FilterListControl m_list;
    bool m_listHasBeenSet = false;

    FilterDropDownControl m_dropdown;
    bool m_dropdownHasBeenSet = false;

    FilterTextFieldControl m_textField;
    bool m_textFieldHasBeenSet = false;

    FilterTextAreaControl m_textArea;
    bool m_textAreaHasBeenSet = false;

    FilterSliderControl m_slider;
    bool m_sliderHasBeenSet = false;

    FilterRelativeDateTimeControl m_relativeDateTime;
    bool m_relativeDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
