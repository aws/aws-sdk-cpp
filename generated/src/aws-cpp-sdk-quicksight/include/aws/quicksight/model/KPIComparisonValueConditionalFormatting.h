﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingColor.h>
#include <aws/quicksight/model/ConditionalFormattingIcon.h>
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
   * <p>The conditional formatting for the comparison value of a KPI
   * visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIComparisonValueConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class KPIComparisonValueConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API KPIComparisonValueConditionalFormatting();
    AWS_QUICKSIGHT_API KPIComparisonValueConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIComparisonValueConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting of the comparison value's text color.</p>
     */
    inline const ConditionalFormattingColor& GetTextColor() const{ return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    inline void SetTextColor(const ConditionalFormattingColor& value) { m_textColorHasBeenSet = true; m_textColor = value; }
    inline void SetTextColor(ConditionalFormattingColor&& value) { m_textColorHasBeenSet = true; m_textColor = std::move(value); }
    inline KPIComparisonValueConditionalFormatting& WithTextColor(const ConditionalFormattingColor& value) { SetTextColor(value); return *this;}
    inline KPIComparisonValueConditionalFormatting& WithTextColor(ConditionalFormattingColor&& value) { SetTextColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting of the comparison value's icon.</p>
     */
    inline const ConditionalFormattingIcon& GetIcon() const{ return m_icon; }
    inline bool IconHasBeenSet() const { return m_iconHasBeenSet; }
    inline void SetIcon(const ConditionalFormattingIcon& value) { m_iconHasBeenSet = true; m_icon = value; }
    inline void SetIcon(ConditionalFormattingIcon&& value) { m_iconHasBeenSet = true; m_icon = std::move(value); }
    inline KPIComparisonValueConditionalFormatting& WithIcon(const ConditionalFormattingIcon& value) { SetIcon(value); return *this;}
    inline KPIComparisonValueConditionalFormatting& WithIcon(ConditionalFormattingIcon&& value) { SetIcon(std::move(value)); return *this;}
    ///@}
  private:

    ConditionalFormattingColor m_textColor;
    bool m_textColorHasBeenSet = false;

    ConditionalFormattingIcon m_icon;
    bool m_iconHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
