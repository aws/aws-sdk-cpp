/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingColor.h>
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
   * <p>The conditional formatting of a table row.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableRowConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class TableRowConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API TableRowConditionalFormatting() = default;
    AWS_QUICKSIGHT_API TableRowConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableRowConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting color (solid, gradient) of the background for a
     * table row.</p>
     */
    inline const ConditionalFormattingColor& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = ConditionalFormattingColor>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = ConditionalFormattingColor>
    TableRowConditionalFormatting& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The conditional formatting color (solid, gradient) of the text for a table
     * row.</p>
     */
    inline const ConditionalFormattingColor& GetTextColor() const { return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    template<typename TextColorT = ConditionalFormattingColor>
    void SetTextColor(TextColorT&& value) { m_textColorHasBeenSet = true; m_textColor = std::forward<TextColorT>(value); }
    template<typename TextColorT = ConditionalFormattingColor>
    TableRowConditionalFormatting& WithTextColor(TextColorT&& value) { SetTextColor(std::forward<TextColorT>(value)); return *this;}
    ///@}
  private:

    ConditionalFormattingColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    ConditionalFormattingColor m_textColor;
    bool m_textColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
