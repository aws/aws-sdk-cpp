/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericSeparatorSymbol.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/DigitGroupingStyle.h>
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
   * <p>The options that determine the thousands separator
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThousandSeparatorOptions">AWS
   * API Reference</a></p>
   */
  class ThousandSeparatorOptions
  {
  public:
    AWS_QUICKSIGHT_API ThousandSeparatorOptions() = default;
    AWS_QUICKSIGHT_API ThousandSeparatorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThousandSeparatorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline NumericSeparatorSymbol GetSymbol() const { return m_symbol; }
    inline bool SymbolHasBeenSet() const { return m_symbolHasBeenSet; }
    inline void SetSymbol(NumericSeparatorSymbol value) { m_symbolHasBeenSet = true; m_symbol = value; }
    inline ThousandSeparatorOptions& WithSymbol(NumericSeparatorSymbol value) { SetSymbol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline ThousandSeparatorOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the way numbers are styled to accommodate different readability
     * standards. The <code>DEFAULT</code> value uses the standard international
     * grouping system and groups numbers by the thousands. The <code>LAKHS</code>
     * value uses the Indian numbering system and groups numbers by lakhs and
     * crores.</p>
     */
    inline DigitGroupingStyle GetGroupingStyle() const { return m_groupingStyle; }
    inline bool GroupingStyleHasBeenSet() const { return m_groupingStyleHasBeenSet; }
    inline void SetGroupingStyle(DigitGroupingStyle value) { m_groupingStyleHasBeenSet = true; m_groupingStyle = value; }
    inline ThousandSeparatorOptions& WithGroupingStyle(DigitGroupingStyle value) { SetGroupingStyle(value); return *this;}
    ///@}
  private:

    NumericSeparatorSymbol m_symbol{NumericSeparatorSymbol::NOT_SET};
    bool m_symbolHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    DigitGroupingStyle m_groupingStyle{DigitGroupingStyle::NOT_SET};
    bool m_groupingStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
