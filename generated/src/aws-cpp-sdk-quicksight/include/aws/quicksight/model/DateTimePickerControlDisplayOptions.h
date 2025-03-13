/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SheetControlInfoIconLabelOptions.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The display options of a control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimePickerControlDisplayOptions">AWS
   * API Reference</a></p>
   */
  class DateTimePickerControlDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API DateTimePickerControlDisplayOptions() = default;
    AWS_QUICKSIGHT_API DateTimePickerControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimePickerControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const { return m_titleOptions; }
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }
    template<typename TitleOptionsT = LabelOptions>
    void SetTitleOptions(TitleOptionsT&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::forward<TitleOptionsT>(value); }
    template<typename TitleOptionsT = LabelOptions>
    DateTimePickerControlDisplayOptions& WithTitleOptions(TitleOptionsT&& value) { SetTitleOptions(std::forward<TitleOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline const Aws::String& GetDateTimeFormat() const { return m_dateTimeFormat; }
    inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }
    template<typename DateTimeFormatT = Aws::String>
    void SetDateTimeFormat(DateTimeFormatT&& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = std::forward<DateTimeFormatT>(value); }
    template<typename DateTimeFormatT = Aws::String>
    DateTimePickerControlDisplayOptions& WithDateTimeFormat(DateTimeFormatT&& value) { SetDateTimeFormat(std::forward<DateTimeFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of info icon label options.</p>
     */
    inline const SheetControlInfoIconLabelOptions& GetInfoIconLabelOptions() const { return m_infoIconLabelOptions; }
    inline bool InfoIconLabelOptionsHasBeenSet() const { return m_infoIconLabelOptionsHasBeenSet; }
    template<typename InfoIconLabelOptionsT = SheetControlInfoIconLabelOptions>
    void SetInfoIconLabelOptions(InfoIconLabelOptionsT&& value) { m_infoIconLabelOptionsHasBeenSet = true; m_infoIconLabelOptions = std::forward<InfoIconLabelOptionsT>(value); }
    template<typename InfoIconLabelOptionsT = SheetControlInfoIconLabelOptions>
    DateTimePickerControlDisplayOptions& WithInfoIconLabelOptions(InfoIconLabelOptionsT&& value) { SetInfoIconLabelOptions(std::forward<InfoIconLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The helper text visibility of the
     * <code>DateTimePickerControlDisplayOptions</code>.</p>
     */
    inline Visibility GetHelperTextVisibility() const { return m_helperTextVisibility; }
    inline bool HelperTextVisibilityHasBeenSet() const { return m_helperTextVisibilityHasBeenSet; }
    inline void SetHelperTextVisibility(Visibility value) { m_helperTextVisibilityHasBeenSet = true; m_helperTextVisibility = value; }
    inline DateTimePickerControlDisplayOptions& WithHelperTextVisibility(Visibility value) { SetHelperTextVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date icon visibility of the
     * <code>DateTimePickerControlDisplayOptions</code>.</p>
     */
    inline Visibility GetDateIconVisibility() const { return m_dateIconVisibility; }
    inline bool DateIconVisibilityHasBeenSet() const { return m_dateIconVisibilityHasBeenSet; }
    inline void SetDateIconVisibility(Visibility value) { m_dateIconVisibilityHasBeenSet = true; m_dateIconVisibility = value; }
    inline DateTimePickerControlDisplayOptions& WithDateIconVisibility(Visibility value) { SetDateIconVisibility(value); return *this;}
    ///@}
  private:

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;

    Aws::String m_dateTimeFormat;
    bool m_dateTimeFormatHasBeenSet = false;

    SheetControlInfoIconLabelOptions m_infoIconLabelOptions;
    bool m_infoIconLabelOptionsHasBeenSet = false;

    Visibility m_helperTextVisibility{Visibility::NOT_SET};
    bool m_helperTextVisibilityHasBeenSet = false;

    Visibility m_dateIconVisibility{Visibility::NOT_SET};
    bool m_dateIconVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
