/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultDateTimePickerControlOptions.h>
#include <aws/quicksight/model/DefaultFilterListControlOptions.h>
#include <aws/quicksight/model/DefaultFilterDropDownControlOptions.h>
#include <aws/quicksight/model/DefaultTextFieldControlOptions.h>
#include <aws/quicksight/model/DefaultTextAreaControlOptions.h>
#include <aws/quicksight/model/DefaultSliderControlOptions.h>
#include <aws/quicksight/model/DefaultRelativeDateTimeControlOptions.h>
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
   * <p>The option that corresponds to the control type of the filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultFilterControlOptions">AWS
   * API Reference</a></p>
   */
  class DefaultFilterControlOptions
  {
  public:
    AWS_QUICKSIGHT_API DefaultFilterControlOptions();
    AWS_QUICKSIGHT_API DefaultFilterControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline const DefaultDateTimePickerControlOptions& GetDefaultDateTimePickerOptions() const{ return m_defaultDateTimePickerOptions; }

    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline bool DefaultDateTimePickerOptionsHasBeenSet() const { return m_defaultDateTimePickerOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline void SetDefaultDateTimePickerOptions(const DefaultDateTimePickerControlOptions& value) { m_defaultDateTimePickerOptionsHasBeenSet = true; m_defaultDateTimePickerOptions = value; }

    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline void SetDefaultDateTimePickerOptions(DefaultDateTimePickerControlOptions&& value) { m_defaultDateTimePickerOptionsHasBeenSet = true; m_defaultDateTimePickerOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultDateTimePickerOptions(const DefaultDateTimePickerControlOptions& value) { SetDefaultDateTimePickerOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultDateTimePickerOptions(DefaultDateTimePickerControlOptions&& value) { SetDefaultDateTimePickerOptions(std::move(value)); return *this;}


    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline const DefaultFilterListControlOptions& GetDefaultListOptions() const{ return m_defaultListOptions; }

    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline bool DefaultListOptionsHasBeenSet() const { return m_defaultListOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline void SetDefaultListOptions(const DefaultFilterListControlOptions& value) { m_defaultListOptionsHasBeenSet = true; m_defaultListOptions = value; }

    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline void SetDefaultListOptions(DefaultFilterListControlOptions&& value) { m_defaultListOptionsHasBeenSet = true; m_defaultListOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultListOptions(const DefaultFilterListControlOptions& value) { SetDefaultListOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultListOptions(DefaultFilterListControlOptions&& value) { SetDefaultListOptions(std::move(value)); return *this;}


    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline const DefaultFilterDropDownControlOptions& GetDefaultDropdownOptions() const{ return m_defaultDropdownOptions; }

    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline bool DefaultDropdownOptionsHasBeenSet() const { return m_defaultDropdownOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline void SetDefaultDropdownOptions(const DefaultFilterDropDownControlOptions& value) { m_defaultDropdownOptionsHasBeenSet = true; m_defaultDropdownOptions = value; }

    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline void SetDefaultDropdownOptions(DefaultFilterDropDownControlOptions&& value) { m_defaultDropdownOptionsHasBeenSet = true; m_defaultDropdownOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultDropdownOptions(const DefaultFilterDropDownControlOptions& value) { SetDefaultDropdownOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultDropdownOptions(DefaultFilterDropDownControlOptions&& value) { SetDefaultDropdownOptions(std::move(value)); return *this;}


    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline const DefaultTextFieldControlOptions& GetDefaultTextFieldOptions() const{ return m_defaultTextFieldOptions; }

    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline bool DefaultTextFieldOptionsHasBeenSet() const { return m_defaultTextFieldOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline void SetDefaultTextFieldOptions(const DefaultTextFieldControlOptions& value) { m_defaultTextFieldOptionsHasBeenSet = true; m_defaultTextFieldOptions = value; }

    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline void SetDefaultTextFieldOptions(DefaultTextFieldControlOptions&& value) { m_defaultTextFieldOptionsHasBeenSet = true; m_defaultTextFieldOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultTextFieldOptions(const DefaultTextFieldControlOptions& value) { SetDefaultTextFieldOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultTextFieldOptions(DefaultTextFieldControlOptions&& value) { SetDefaultTextFieldOptions(std::move(value)); return *this;}


    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline const DefaultTextAreaControlOptions& GetDefaultTextAreaOptions() const{ return m_defaultTextAreaOptions; }

    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline bool DefaultTextAreaOptionsHasBeenSet() const { return m_defaultTextAreaOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline void SetDefaultTextAreaOptions(const DefaultTextAreaControlOptions& value) { m_defaultTextAreaOptionsHasBeenSet = true; m_defaultTextAreaOptions = value; }

    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline void SetDefaultTextAreaOptions(DefaultTextAreaControlOptions&& value) { m_defaultTextAreaOptionsHasBeenSet = true; m_defaultTextAreaOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultTextAreaOptions(const DefaultTextAreaControlOptions& value) { SetDefaultTextAreaOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultTextAreaOptions(DefaultTextAreaControlOptions&& value) { SetDefaultTextAreaOptions(std::move(value)); return *this;}


    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline const DefaultSliderControlOptions& GetDefaultSliderOptions() const{ return m_defaultSliderOptions; }

    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline bool DefaultSliderOptionsHasBeenSet() const { return m_defaultSliderOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline void SetDefaultSliderOptions(const DefaultSliderControlOptions& value) { m_defaultSliderOptionsHasBeenSet = true; m_defaultSliderOptions = value; }

    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline void SetDefaultSliderOptions(DefaultSliderControlOptions&& value) { m_defaultSliderOptionsHasBeenSet = true; m_defaultSliderOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultSliderOptions(const DefaultSliderControlOptions& value) { SetDefaultSliderOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultSliderOptions(DefaultSliderControlOptions&& value) { SetDefaultSliderOptions(std::move(value)); return *this;}


    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline const DefaultRelativeDateTimeControlOptions& GetDefaultRelativeDateTimeOptions() const{ return m_defaultRelativeDateTimeOptions; }

    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline bool DefaultRelativeDateTimeOptionsHasBeenSet() const { return m_defaultRelativeDateTimeOptionsHasBeenSet; }

    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline void SetDefaultRelativeDateTimeOptions(const DefaultRelativeDateTimeControlOptions& value) { m_defaultRelativeDateTimeOptionsHasBeenSet = true; m_defaultRelativeDateTimeOptions = value; }

    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline void SetDefaultRelativeDateTimeOptions(DefaultRelativeDateTimeControlOptions&& value) { m_defaultRelativeDateTimeOptionsHasBeenSet = true; m_defaultRelativeDateTimeOptions = std::move(value); }

    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultRelativeDateTimeOptions(const DefaultRelativeDateTimeControlOptions& value) { SetDefaultRelativeDateTimeOptions(value); return *this;}

    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline DefaultFilterControlOptions& WithDefaultRelativeDateTimeOptions(DefaultRelativeDateTimeControlOptions&& value) { SetDefaultRelativeDateTimeOptions(std::move(value)); return *this;}

  private:

    DefaultDateTimePickerControlOptions m_defaultDateTimePickerOptions;
    bool m_defaultDateTimePickerOptionsHasBeenSet = false;

    DefaultFilterListControlOptions m_defaultListOptions;
    bool m_defaultListOptionsHasBeenSet = false;

    DefaultFilterDropDownControlOptions m_defaultDropdownOptions;
    bool m_defaultDropdownOptionsHasBeenSet = false;

    DefaultTextFieldControlOptions m_defaultTextFieldOptions;
    bool m_defaultTextFieldOptionsHasBeenSet = false;

    DefaultTextAreaControlOptions m_defaultTextAreaOptions;
    bool m_defaultTextAreaOptionsHasBeenSet = false;

    DefaultSliderControlOptions m_defaultSliderOptions;
    bool m_defaultSliderOptionsHasBeenSet = false;

    DefaultRelativeDateTimeControlOptions m_defaultRelativeDateTimeOptions;
    bool m_defaultRelativeDateTimeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
