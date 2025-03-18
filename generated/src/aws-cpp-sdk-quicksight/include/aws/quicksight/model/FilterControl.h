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
#include <aws/quicksight/model/FilterCrossSheetControl.h>
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
    AWS_QUICKSIGHT_API FilterControl() = default;
    AWS_QUICKSIGHT_API FilterControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A control from a date filter that is used to specify date and time.</p>
     */
    inline const FilterDateTimePickerControl& GetDateTimePicker() const { return m_dateTimePicker; }
    inline bool DateTimePickerHasBeenSet() const { return m_dateTimePickerHasBeenSet; }
    template<typename DateTimePickerT = FilterDateTimePickerControl>
    void SetDateTimePicker(DateTimePickerT&& value) { m_dateTimePickerHasBeenSet = true; m_dateTimePicker = std::forward<DateTimePickerT>(value); }
    template<typename DateTimePickerT = FilterDateTimePickerControl>
    FilterControl& WithDateTimePicker(DateTimePickerT&& value) { SetDateTimePicker(std::forward<DateTimePickerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a list of buttons or boxes. This is used to select
     * either a single value or multiple values.</p>
     */
    inline const FilterListControl& GetList() const { return m_list; }
    inline bool ListHasBeenSet() const { return m_listHasBeenSet; }
    template<typename ListT = FilterListControl>
    void SetList(ListT&& value) { m_listHasBeenSet = true; m_list = std::forward<ListT>(value); }
    template<typename ListT = FilterListControl>
    FilterControl& WithList(ListT&& value) { SetList(std::forward<ListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a dropdown list with buttons that are used to select a
     * single value.</p>
     */
    inline const FilterDropDownControl& GetDropdown() const { return m_dropdown; }
    inline bool DropdownHasBeenSet() const { return m_dropdownHasBeenSet; }
    template<typename DropdownT = FilterDropDownControl>
    void SetDropdown(DropdownT&& value) { m_dropdownHasBeenSet = true; m_dropdown = std::forward<DropdownT>(value); }
    template<typename DropdownT = FilterDropDownControl>
    FilterControl& WithDropdown(DropdownT&& value) { SetDropdown(std::forward<DropdownT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a text box that is used to enter a single entry.</p>
     */
    inline const FilterTextFieldControl& GetTextField() const { return m_textField; }
    inline bool TextFieldHasBeenSet() const { return m_textFieldHasBeenSet; }
    template<typename TextFieldT = FilterTextFieldControl>
    void SetTextField(TextFieldT&& value) { m_textFieldHasBeenSet = true; m_textField = std::forward<TextFieldT>(value); }
    template<typename TextFieldT = FilterTextFieldControl>
    FilterControl& WithTextField(TextFieldT&& value) { SetTextField(std::forward<TextFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a text box that is used to enter multiple entries.</p>
     */
    inline const FilterTextAreaControl& GetTextArea() const { return m_textArea; }
    inline bool TextAreaHasBeenSet() const { return m_textAreaHasBeenSet; }
    template<typename TextAreaT = FilterTextAreaControl>
    void SetTextArea(TextAreaT&& value) { m_textAreaHasBeenSet = true; m_textArea = std::forward<TextAreaT>(value); }
    template<typename TextAreaT = FilterTextAreaControl>
    FilterControl& WithTextArea(TextAreaT&& value) { SetTextArea(std::forward<TextAreaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control to display a horizontal toggle bar. This is used to change a value
     * by sliding the toggle.</p>
     */
    inline const FilterSliderControl& GetSlider() const { return m_slider; }
    inline bool SliderHasBeenSet() const { return m_sliderHasBeenSet; }
    template<typename SliderT = FilterSliderControl>
    void SetSlider(SliderT&& value) { m_sliderHasBeenSet = true; m_slider = std::forward<SliderT>(value); }
    template<typename SliderT = FilterSliderControl>
    FilterControl& WithSlider(SliderT&& value) { SetSlider(std::forward<SliderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control from a date filter that is used to specify the relative date.</p>
     */
    inline const FilterRelativeDateTimeControl& GetRelativeDateTime() const { return m_relativeDateTime; }
    inline bool RelativeDateTimeHasBeenSet() const { return m_relativeDateTimeHasBeenSet; }
    template<typename RelativeDateTimeT = FilterRelativeDateTimeControl>
    void SetRelativeDateTime(RelativeDateTimeT&& value) { m_relativeDateTimeHasBeenSet = true; m_relativeDateTime = std::forward<RelativeDateTimeT>(value); }
    template<typename RelativeDateTimeT = FilterRelativeDateTimeControl>
    FilterControl& WithRelativeDateTime(RelativeDateTimeT&& value) { SetRelativeDateTime(std::forward<RelativeDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A control from a filter that is scoped across more than one sheet. This
     * represents your filter control on a sheet</p>
     */
    inline const FilterCrossSheetControl& GetCrossSheet() const { return m_crossSheet; }
    inline bool CrossSheetHasBeenSet() const { return m_crossSheetHasBeenSet; }
    template<typename CrossSheetT = FilterCrossSheetControl>
    void SetCrossSheet(CrossSheetT&& value) { m_crossSheetHasBeenSet = true; m_crossSheet = std::forward<CrossSheetT>(value); }
    template<typename CrossSheetT = FilterCrossSheetControl>
    FilterControl& WithCrossSheet(CrossSheetT&& value) { SetCrossSheet(std::forward<CrossSheetT>(value)); return *this;}
    ///@}
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

    FilterCrossSheetControl m_crossSheet;
    bool m_crossSheetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
