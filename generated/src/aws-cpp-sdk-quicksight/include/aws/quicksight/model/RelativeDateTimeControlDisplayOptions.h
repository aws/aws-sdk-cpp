/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SheetControlInfoIconLabelOptions.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RelativeDateTimeControlDisplayOptions">AWS
   * API Reference</a></p>
   */
  class RelativeDateTimeControlDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API RelativeDateTimeControlDisplayOptions();
    AWS_QUICKSIGHT_API RelativeDateTimeControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RelativeDateTimeControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const{ return m_titleOptions; }
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }
    inline void SetTitleOptions(const LabelOptions& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = value; }
    inline void SetTitleOptions(LabelOptions&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::move(value); }
    inline RelativeDateTimeControlDisplayOptions& WithTitleOptions(const LabelOptions& value) { SetTitleOptions(value); return *this;}
    inline RelativeDateTimeControlDisplayOptions& WithTitleOptions(LabelOptions&& value) { SetTitleOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customize how dates are formatted in controls.</p>
     */
    inline const Aws::String& GetDateTimeFormat() const{ return m_dateTimeFormat; }
    inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }
    inline void SetDateTimeFormat(const Aws::String& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = value; }
    inline void SetDateTimeFormat(Aws::String&& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = std::move(value); }
    inline void SetDateTimeFormat(const char* value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat.assign(value); }
    inline RelativeDateTimeControlDisplayOptions& WithDateTimeFormat(const Aws::String& value) { SetDateTimeFormat(value); return *this;}
    inline RelativeDateTimeControlDisplayOptions& WithDateTimeFormat(Aws::String&& value) { SetDateTimeFormat(std::move(value)); return *this;}
    inline RelativeDateTimeControlDisplayOptions& WithDateTimeFormat(const char* value) { SetDateTimeFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of info icon label options.</p>
     */
    inline const SheetControlInfoIconLabelOptions& GetInfoIconLabelOptions() const{ return m_infoIconLabelOptions; }
    inline bool InfoIconLabelOptionsHasBeenSet() const { return m_infoIconLabelOptionsHasBeenSet; }
    inline void SetInfoIconLabelOptions(const SheetControlInfoIconLabelOptions& value) { m_infoIconLabelOptionsHasBeenSet = true; m_infoIconLabelOptions = value; }
    inline void SetInfoIconLabelOptions(SheetControlInfoIconLabelOptions&& value) { m_infoIconLabelOptionsHasBeenSet = true; m_infoIconLabelOptions = std::move(value); }
    inline RelativeDateTimeControlDisplayOptions& WithInfoIconLabelOptions(const SheetControlInfoIconLabelOptions& value) { SetInfoIconLabelOptions(value); return *this;}
    inline RelativeDateTimeControlDisplayOptions& WithInfoIconLabelOptions(SheetControlInfoIconLabelOptions&& value) { SetInfoIconLabelOptions(std::move(value)); return *this;}
    ///@}
  private:

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;

    Aws::String m_dateTimeFormat;
    bool m_dateTimeFormatHasBeenSet = false;

    SheetControlInfoIconLabelOptions m_infoIconLabelOptions;
    bool m_infoIconLabelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
