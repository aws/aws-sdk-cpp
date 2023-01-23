/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QUICKSIGHT_API DateTimePickerControlDisplayOptions();
    AWS_QUICKSIGHT_API DateTimePickerControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimePickerControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const{ return m_titleOptions; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(const LabelOptions& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = value; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(LabelOptions&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::move(value); }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline DateTimePickerControlDisplayOptions& WithTitleOptions(const LabelOptions& value) { SetTitleOptions(value); return *this;}

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline DateTimePickerControlDisplayOptions& WithTitleOptions(LabelOptions&& value) { SetTitleOptions(std::move(value)); return *this;}


    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline const Aws::String& GetDateTimeFormat() const{ return m_dateTimeFormat; }

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline void SetDateTimeFormat(const Aws::String& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = value; }

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline void SetDateTimeFormat(Aws::String&& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = std::move(value); }

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline void SetDateTimeFormat(const char* value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat.assign(value); }

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline DateTimePickerControlDisplayOptions& WithDateTimeFormat(const Aws::String& value) { SetDateTimeFormat(value); return *this;}

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline DateTimePickerControlDisplayOptions& WithDateTimeFormat(Aws::String&& value) { SetDateTimeFormat(std::move(value)); return *this;}

    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline DateTimePickerControlDisplayOptions& WithDateTimeFormat(const char* value) { SetDateTimeFormat(value); return *this;}

  private:

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;

    Aws::String m_dateTimeFormat;
    bool m_dateTimeFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
