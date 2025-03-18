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
    AWS_QUICKSIGHT_API DefaultFilterControlOptions() = default;
    AWS_QUICKSIGHT_API DefaultFilterControlOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFilterControlOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default options that correspond to the filter control type of a
     * <code>DateTimePicker</code>.</p>
     */
    inline const DefaultDateTimePickerControlOptions& GetDefaultDateTimePickerOptions() const { return m_defaultDateTimePickerOptions; }
    inline bool DefaultDateTimePickerOptionsHasBeenSet() const { return m_defaultDateTimePickerOptionsHasBeenSet; }
    template<typename DefaultDateTimePickerOptionsT = DefaultDateTimePickerControlOptions>
    void SetDefaultDateTimePickerOptions(DefaultDateTimePickerOptionsT&& value) { m_defaultDateTimePickerOptionsHasBeenSet = true; m_defaultDateTimePickerOptions = std::forward<DefaultDateTimePickerOptionsT>(value); }
    template<typename DefaultDateTimePickerOptionsT = DefaultDateTimePickerControlOptions>
    DefaultFilterControlOptions& WithDefaultDateTimePickerOptions(DefaultDateTimePickerOptionsT&& value) { SetDefaultDateTimePickerOptions(std::forward<DefaultDateTimePickerOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default options that correspond to the <code>List</code> filter control
     * type.</p>
     */
    inline const DefaultFilterListControlOptions& GetDefaultListOptions() const { return m_defaultListOptions; }
    inline bool DefaultListOptionsHasBeenSet() const { return m_defaultListOptionsHasBeenSet; }
    template<typename DefaultListOptionsT = DefaultFilterListControlOptions>
    void SetDefaultListOptions(DefaultListOptionsT&& value) { m_defaultListOptionsHasBeenSet = true; m_defaultListOptions = std::forward<DefaultListOptionsT>(value); }
    template<typename DefaultListOptionsT = DefaultFilterListControlOptions>
    DefaultFilterControlOptions& WithDefaultListOptions(DefaultListOptionsT&& value) { SetDefaultListOptions(std::forward<DefaultListOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default options that correspond to the <code>Dropdown</code> filter
     * control type.</p>
     */
    inline const DefaultFilterDropDownControlOptions& GetDefaultDropdownOptions() const { return m_defaultDropdownOptions; }
    inline bool DefaultDropdownOptionsHasBeenSet() const { return m_defaultDropdownOptionsHasBeenSet; }
    template<typename DefaultDropdownOptionsT = DefaultFilterDropDownControlOptions>
    void SetDefaultDropdownOptions(DefaultDropdownOptionsT&& value) { m_defaultDropdownOptionsHasBeenSet = true; m_defaultDropdownOptions = std::forward<DefaultDropdownOptionsT>(value); }
    template<typename DefaultDropdownOptionsT = DefaultFilterDropDownControlOptions>
    DefaultFilterControlOptions& WithDefaultDropdownOptions(DefaultDropdownOptionsT&& value) { SetDefaultDropdownOptions(std::forward<DefaultDropdownOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default options that correspond to the <code>TextField</code> filter
     * control type.</p>
     */
    inline const DefaultTextFieldControlOptions& GetDefaultTextFieldOptions() const { return m_defaultTextFieldOptions; }
    inline bool DefaultTextFieldOptionsHasBeenSet() const { return m_defaultTextFieldOptionsHasBeenSet; }
    template<typename DefaultTextFieldOptionsT = DefaultTextFieldControlOptions>
    void SetDefaultTextFieldOptions(DefaultTextFieldOptionsT&& value) { m_defaultTextFieldOptionsHasBeenSet = true; m_defaultTextFieldOptions = std::forward<DefaultTextFieldOptionsT>(value); }
    template<typename DefaultTextFieldOptionsT = DefaultTextFieldControlOptions>
    DefaultFilterControlOptions& WithDefaultTextFieldOptions(DefaultTextFieldOptionsT&& value) { SetDefaultTextFieldOptions(std::forward<DefaultTextFieldOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default options that correspond to the <code>TextArea</code> filter
     * control type.</p>
     */
    inline const DefaultTextAreaControlOptions& GetDefaultTextAreaOptions() const { return m_defaultTextAreaOptions; }
    inline bool DefaultTextAreaOptionsHasBeenSet() const { return m_defaultTextAreaOptionsHasBeenSet; }
    template<typename DefaultTextAreaOptionsT = DefaultTextAreaControlOptions>
    void SetDefaultTextAreaOptions(DefaultTextAreaOptionsT&& value) { m_defaultTextAreaOptionsHasBeenSet = true; m_defaultTextAreaOptions = std::forward<DefaultTextAreaOptionsT>(value); }
    template<typename DefaultTextAreaOptionsT = DefaultTextAreaControlOptions>
    DefaultFilterControlOptions& WithDefaultTextAreaOptions(DefaultTextAreaOptionsT&& value) { SetDefaultTextAreaOptions(std::forward<DefaultTextAreaOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default options that correspond to the <code>Slider</code> filter control
     * type.</p>
     */
    inline const DefaultSliderControlOptions& GetDefaultSliderOptions() const { return m_defaultSliderOptions; }
    inline bool DefaultSliderOptionsHasBeenSet() const { return m_defaultSliderOptionsHasBeenSet; }
    template<typename DefaultSliderOptionsT = DefaultSliderControlOptions>
    void SetDefaultSliderOptions(DefaultSliderOptionsT&& value) { m_defaultSliderOptionsHasBeenSet = true; m_defaultSliderOptions = std::forward<DefaultSliderOptionsT>(value); }
    template<typename DefaultSliderOptionsT = DefaultSliderControlOptions>
    DefaultFilterControlOptions& WithDefaultSliderOptions(DefaultSliderOptionsT&& value) { SetDefaultSliderOptions(std::forward<DefaultSliderOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default options that correspond to the <code>RelativeDateTime</code>
     * filter control type.</p>
     */
    inline const DefaultRelativeDateTimeControlOptions& GetDefaultRelativeDateTimeOptions() const { return m_defaultRelativeDateTimeOptions; }
    inline bool DefaultRelativeDateTimeOptionsHasBeenSet() const { return m_defaultRelativeDateTimeOptionsHasBeenSet; }
    template<typename DefaultRelativeDateTimeOptionsT = DefaultRelativeDateTimeControlOptions>
    void SetDefaultRelativeDateTimeOptions(DefaultRelativeDateTimeOptionsT&& value) { m_defaultRelativeDateTimeOptionsHasBeenSet = true; m_defaultRelativeDateTimeOptions = std::forward<DefaultRelativeDateTimeOptionsT>(value); }
    template<typename DefaultRelativeDateTimeOptionsT = DefaultRelativeDateTimeControlOptions>
    DefaultFilterControlOptions& WithDefaultRelativeDateTimeOptions(DefaultRelativeDateTimeOptionsT&& value) { SetDefaultRelativeDateTimeOptions(std::forward<DefaultRelativeDateTimeOptionsT>(value)); return *this;}
    ///@}
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
