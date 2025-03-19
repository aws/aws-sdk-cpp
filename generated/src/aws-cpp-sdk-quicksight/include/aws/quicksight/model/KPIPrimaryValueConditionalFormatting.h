/**
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
   * <p>The conditional formatting for the primary value of a KPI
   * visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIPrimaryValueConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class KPIPrimaryValueConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API KPIPrimaryValueConditionalFormatting() = default;
    AWS_QUICKSIGHT_API KPIPrimaryValueConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIPrimaryValueConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting of the primary value's text color.</p>
     */
    inline const ConditionalFormattingColor& GetTextColor() const { return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    template<typename TextColorT = ConditionalFormattingColor>
    void SetTextColor(TextColorT&& value) { m_textColorHasBeenSet = true; m_textColor = std::forward<TextColorT>(value); }
    template<typename TextColorT = ConditionalFormattingColor>
    KPIPrimaryValueConditionalFormatting& WithTextColor(TextColorT&& value) { SetTextColor(std::forward<TextColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting of the primary value's icon.</p>
     */
    inline const ConditionalFormattingIcon& GetIcon() const { return m_icon; }
    inline bool IconHasBeenSet() const { return m_iconHasBeenSet; }
    template<typename IconT = ConditionalFormattingIcon>
    void SetIcon(IconT&& value) { m_iconHasBeenSet = true; m_icon = std::forward<IconT>(value); }
    template<typename IconT = ConditionalFormattingIcon>
    KPIPrimaryValueConditionalFormatting& WithIcon(IconT&& value) { SetIcon(std::forward<IconT>(value)); return *this;}
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
