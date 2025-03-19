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
   * <p>The conditional formatting for the progress bar of a KPI
   * visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIProgressBarConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class KPIProgressBarConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API KPIProgressBarConditionalFormatting() = default;
    AWS_QUICKSIGHT_API KPIProgressBarConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIProgressBarConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting of the progress bar's foreground color.</p>
     */
    inline const ConditionalFormattingColor& GetForegroundColor() const { return m_foregroundColor; }
    inline bool ForegroundColorHasBeenSet() const { return m_foregroundColorHasBeenSet; }
    template<typename ForegroundColorT = ConditionalFormattingColor>
    void SetForegroundColor(ForegroundColorT&& value) { m_foregroundColorHasBeenSet = true; m_foregroundColor = std::forward<ForegroundColorT>(value); }
    template<typename ForegroundColorT = ConditionalFormattingColor>
    KPIProgressBarConditionalFormatting& WithForegroundColor(ForegroundColorT&& value) { SetForegroundColor(std::forward<ForegroundColorT>(value)); return *this;}
    ///@}
  private:

    ConditionalFormattingColor m_foregroundColor;
    bool m_foregroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
