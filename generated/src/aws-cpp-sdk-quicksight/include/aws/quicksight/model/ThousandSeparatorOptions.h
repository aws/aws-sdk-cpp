﻿/**
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
    AWS_QUICKSIGHT_API ThousandSeparatorOptions();
    AWS_QUICKSIGHT_API ThousandSeparatorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThousandSeparatorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline const NumericSeparatorSymbol& GetSymbol() const{ return m_symbol; }
    inline bool SymbolHasBeenSet() const { return m_symbolHasBeenSet; }
    inline void SetSymbol(const NumericSeparatorSymbol& value) { m_symbolHasBeenSet = true; m_symbol = value; }
    inline void SetSymbol(NumericSeparatorSymbol&& value) { m_symbolHasBeenSet = true; m_symbol = std::move(value); }
    inline ThousandSeparatorOptions& WithSymbol(const NumericSeparatorSymbol& value) { SetSymbol(value); return *this;}
    inline ThousandSeparatorOptions& WithSymbol(NumericSeparatorSymbol&& value) { SetSymbol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline ThousandSeparatorOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline ThousandSeparatorOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the way numbers are styled to accommodate different readability
     * standards. The <code>DEFAULT</code> value uses the standard international
     * grouping system and groups numbers by the thousands. The <code>LAKHS</code>
     * value uses the Indian numbering system and groups numbers by lakhs and
     * crores.</p>
     */
    inline const DigitGroupingStyle& GetGroupingStyle() const{ return m_groupingStyle; }
    inline bool GroupingStyleHasBeenSet() const { return m_groupingStyleHasBeenSet; }
    inline void SetGroupingStyle(const DigitGroupingStyle& value) { m_groupingStyleHasBeenSet = true; m_groupingStyle = value; }
    inline void SetGroupingStyle(DigitGroupingStyle&& value) { m_groupingStyleHasBeenSet = true; m_groupingStyle = std::move(value); }
    inline ThousandSeparatorOptions& WithGroupingStyle(const DigitGroupingStyle& value) { SetGroupingStyle(value); return *this;}
    inline ThousandSeparatorOptions& WithGroupingStyle(DigitGroupingStyle&& value) { SetGroupingStyle(std::move(value)); return *this;}
    ///@}
  private:

    NumericSeparatorSymbol m_symbol;
    bool m_symbolHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    DigitGroupingStyle m_groupingStyle;
    bool m_groupingStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
