/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicNumericSeparatorSymbol.h>
#include <aws/quicksight/model/NumberScale.h>
#include <aws/quicksight/model/NegativeFormat.h>
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
   * <p>A structure that represents additional options for display
   * formatting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DisplayFormatOptions">AWS
   * API Reference</a></p>
   */
  class DisplayFormatOptions
  {
  public:
    AWS_QUICKSIGHT_API DisplayFormatOptions() = default;
    AWS_QUICKSIGHT_API DisplayFormatOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DisplayFormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value that indicates whether to use blank cell format.</p>
     */
    inline bool GetUseBlankCellFormat() const { return m_useBlankCellFormat; }
    inline bool UseBlankCellFormatHasBeenSet() const { return m_useBlankCellFormatHasBeenSet; }
    inline void SetUseBlankCellFormat(bool value) { m_useBlankCellFormatHasBeenSet = true; m_useBlankCellFormat = value; }
    inline DisplayFormatOptions& WithUseBlankCellFormat(bool value) { SetUseBlankCellFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the blank cell format.</p>
     */
    inline const Aws::String& GetBlankCellFormat() const { return m_blankCellFormat; }
    inline bool BlankCellFormatHasBeenSet() const { return m_blankCellFormatHasBeenSet; }
    template<typename BlankCellFormatT = Aws::String>
    void SetBlankCellFormat(BlankCellFormatT&& value) { m_blankCellFormatHasBeenSet = true; m_blankCellFormat = std::forward<BlankCellFormatT>(value); }
    template<typename BlankCellFormatT = Aws::String>
    DisplayFormatOptions& WithBlankCellFormat(BlankCellFormatT&& value) { SetBlankCellFormat(std::forward<BlankCellFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the <code>DateTime</code> format.</p>
     */
    inline const Aws::String& GetDateFormat() const { return m_dateFormat; }
    inline bool DateFormatHasBeenSet() const { return m_dateFormatHasBeenSet; }
    template<typename DateFormatT = Aws::String>
    void SetDateFormat(DateFormatT&& value) { m_dateFormatHasBeenSet = true; m_dateFormat = std::forward<DateFormatT>(value); }
    template<typename DateFormatT = Aws::String>
    DisplayFormatOptions& WithDateFormat(DateFormatT&& value) { SetDateFormat(std::forward<DateFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the decimal separator.</p>
     */
    inline TopicNumericSeparatorSymbol GetDecimalSeparator() const { return m_decimalSeparator; }
    inline bool DecimalSeparatorHasBeenSet() const { return m_decimalSeparatorHasBeenSet; }
    inline void SetDecimalSeparator(TopicNumericSeparatorSymbol value) { m_decimalSeparatorHasBeenSet = true; m_decimalSeparator = value; }
    inline DisplayFormatOptions& WithDecimalSeparator(TopicNumericSeparatorSymbol value) { SetDecimalSeparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the grouping separator.</p>
     */
    inline const Aws::String& GetGroupingSeparator() const { return m_groupingSeparator; }
    inline bool GroupingSeparatorHasBeenSet() const { return m_groupingSeparatorHasBeenSet; }
    template<typename GroupingSeparatorT = Aws::String>
    void SetGroupingSeparator(GroupingSeparatorT&& value) { m_groupingSeparatorHasBeenSet = true; m_groupingSeparator = std::forward<GroupingSeparatorT>(value); }
    template<typename GroupingSeparatorT = Aws::String>
    DisplayFormatOptions& WithGroupingSeparator(GroupingSeparatorT&& value) { SetGroupingSeparator(std::forward<GroupingSeparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to use grouping.</p>
     */
    inline bool GetUseGrouping() const { return m_useGrouping; }
    inline bool UseGroupingHasBeenSet() const { return m_useGroupingHasBeenSet; }
    inline void SetUseGrouping(bool value) { m_useGroupingHasBeenSet = true; m_useGrouping = value; }
    inline DisplayFormatOptions& WithUseGrouping(bool value) { SetUseGrouping(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the number of fraction digits.</p>
     */
    inline int GetFractionDigits() const { return m_fractionDigits; }
    inline bool FractionDigitsHasBeenSet() const { return m_fractionDigitsHasBeenSet; }
    inline void SetFractionDigits(int value) { m_fractionDigitsHasBeenSet = true; m_fractionDigits = value; }
    inline DisplayFormatOptions& WithFractionDigits(int value) { SetFractionDigits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix value for a display format.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    DisplayFormatOptions& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suffix value for a display format.</p>
     */
    inline const Aws::String& GetSuffix() const { return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    template<typename SuffixT = Aws::String>
    void SetSuffix(SuffixT&& value) { m_suffixHasBeenSet = true; m_suffix = std::forward<SuffixT>(value); }
    template<typename SuffixT = Aws::String>
    DisplayFormatOptions& WithSuffix(SuffixT&& value) { SetSuffix(std::forward<SuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit scaler. Valid values for this structure are: <code>NONE</code>,
     * <code>AUTO</code>, <code>THOUSANDS</code>, <code>MILLIONS</code>,
     * <code>BILLIONS</code>, and <code>TRILLIONS</code>.</p>
     */
    inline NumberScale GetUnitScaler() const { return m_unitScaler; }
    inline bool UnitScalerHasBeenSet() const { return m_unitScalerHasBeenSet; }
    inline void SetUnitScaler(NumberScale value) { m_unitScalerHasBeenSet = true; m_unitScaler = value; }
    inline DisplayFormatOptions& WithUnitScaler(NumberScale value) { SetUnitScaler(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The negative format.</p>
     */
    inline const NegativeFormat& GetNegativeFormat() const { return m_negativeFormat; }
    inline bool NegativeFormatHasBeenSet() const { return m_negativeFormatHasBeenSet; }
    template<typename NegativeFormatT = NegativeFormat>
    void SetNegativeFormat(NegativeFormatT&& value) { m_negativeFormatHasBeenSet = true; m_negativeFormat = std::forward<NegativeFormatT>(value); }
    template<typename NegativeFormatT = NegativeFormat>
    DisplayFormatOptions& WithNegativeFormat(NegativeFormatT&& value) { SetNegativeFormat(std::forward<NegativeFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency symbol, such as <code>USD</code>.</p>
     */
    inline const Aws::String& GetCurrencySymbol() const { return m_currencySymbol; }
    inline bool CurrencySymbolHasBeenSet() const { return m_currencySymbolHasBeenSet; }
    template<typename CurrencySymbolT = Aws::String>
    void SetCurrencySymbol(CurrencySymbolT&& value) { m_currencySymbolHasBeenSet = true; m_currencySymbol = std::forward<CurrencySymbolT>(value); }
    template<typename CurrencySymbolT = Aws::String>
    DisplayFormatOptions& WithCurrencySymbol(CurrencySymbolT&& value) { SetCurrencySymbol(std::forward<CurrencySymbolT>(value)); return *this;}
    ///@}
  private:

    bool m_useBlankCellFormat{false};
    bool m_useBlankCellFormatHasBeenSet = false;

    Aws::String m_blankCellFormat;
    bool m_blankCellFormatHasBeenSet = false;

    Aws::String m_dateFormat;
    bool m_dateFormatHasBeenSet = false;

    TopicNumericSeparatorSymbol m_decimalSeparator{TopicNumericSeparatorSymbol::NOT_SET};
    bool m_decimalSeparatorHasBeenSet = false;

    Aws::String m_groupingSeparator;
    bool m_groupingSeparatorHasBeenSet = false;

    bool m_useGrouping{false};
    bool m_useGroupingHasBeenSet = false;

    int m_fractionDigits{0};
    bool m_fractionDigitsHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;

    NumberScale m_unitScaler{NumberScale::NOT_SET};
    bool m_unitScalerHasBeenSet = false;

    NegativeFormat m_negativeFormat;
    bool m_negativeFormatHasBeenSet = false;

    Aws::String m_currencySymbol;
    bool m_currencySymbolHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
