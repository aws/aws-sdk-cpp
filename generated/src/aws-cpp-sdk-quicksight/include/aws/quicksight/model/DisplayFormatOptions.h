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
    AWS_QUICKSIGHT_API DisplayFormatOptions();
    AWS_QUICKSIGHT_API DisplayFormatOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DisplayFormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A Boolean value that indicates whether to use blank cell format.</p>
     */
    inline bool GetUseBlankCellFormat() const{ return m_useBlankCellFormat; }
    inline bool UseBlankCellFormatHasBeenSet() const { return m_useBlankCellFormatHasBeenSet; }
    inline void SetUseBlankCellFormat(bool value) { m_useBlankCellFormatHasBeenSet = true; m_useBlankCellFormat = value; }
    inline DisplayFormatOptions& WithUseBlankCellFormat(bool value) { SetUseBlankCellFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the blank cell format.</p>
     */
    inline const Aws::String& GetBlankCellFormat() const{ return m_blankCellFormat; }
    inline bool BlankCellFormatHasBeenSet() const { return m_blankCellFormatHasBeenSet; }
    inline void SetBlankCellFormat(const Aws::String& value) { m_blankCellFormatHasBeenSet = true; m_blankCellFormat = value; }
    inline void SetBlankCellFormat(Aws::String&& value) { m_blankCellFormatHasBeenSet = true; m_blankCellFormat = std::move(value); }
    inline void SetBlankCellFormat(const char* value) { m_blankCellFormatHasBeenSet = true; m_blankCellFormat.assign(value); }
    inline DisplayFormatOptions& WithBlankCellFormat(const Aws::String& value) { SetBlankCellFormat(value); return *this;}
    inline DisplayFormatOptions& WithBlankCellFormat(Aws::String&& value) { SetBlankCellFormat(std::move(value)); return *this;}
    inline DisplayFormatOptions& WithBlankCellFormat(const char* value) { SetBlankCellFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the <code>DateTime</code> format.</p>
     */
    inline const Aws::String& GetDateFormat() const{ return m_dateFormat; }
    inline bool DateFormatHasBeenSet() const { return m_dateFormatHasBeenSet; }
    inline void SetDateFormat(const Aws::String& value) { m_dateFormatHasBeenSet = true; m_dateFormat = value; }
    inline void SetDateFormat(Aws::String&& value) { m_dateFormatHasBeenSet = true; m_dateFormat = std::move(value); }
    inline void SetDateFormat(const char* value) { m_dateFormatHasBeenSet = true; m_dateFormat.assign(value); }
    inline DisplayFormatOptions& WithDateFormat(const Aws::String& value) { SetDateFormat(value); return *this;}
    inline DisplayFormatOptions& WithDateFormat(Aws::String&& value) { SetDateFormat(std::move(value)); return *this;}
    inline DisplayFormatOptions& WithDateFormat(const char* value) { SetDateFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the decimal separator.</p>
     */
    inline const TopicNumericSeparatorSymbol& GetDecimalSeparator() const{ return m_decimalSeparator; }
    inline bool DecimalSeparatorHasBeenSet() const { return m_decimalSeparatorHasBeenSet; }
    inline void SetDecimalSeparator(const TopicNumericSeparatorSymbol& value) { m_decimalSeparatorHasBeenSet = true; m_decimalSeparator = value; }
    inline void SetDecimalSeparator(TopicNumericSeparatorSymbol&& value) { m_decimalSeparatorHasBeenSet = true; m_decimalSeparator = std::move(value); }
    inline DisplayFormatOptions& WithDecimalSeparator(const TopicNumericSeparatorSymbol& value) { SetDecimalSeparator(value); return *this;}
    inline DisplayFormatOptions& WithDecimalSeparator(TopicNumericSeparatorSymbol&& value) { SetDecimalSeparator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the grouping separator.</p>
     */
    inline const Aws::String& GetGroupingSeparator() const{ return m_groupingSeparator; }
    inline bool GroupingSeparatorHasBeenSet() const { return m_groupingSeparatorHasBeenSet; }
    inline void SetGroupingSeparator(const Aws::String& value) { m_groupingSeparatorHasBeenSet = true; m_groupingSeparator = value; }
    inline void SetGroupingSeparator(Aws::String&& value) { m_groupingSeparatorHasBeenSet = true; m_groupingSeparator = std::move(value); }
    inline void SetGroupingSeparator(const char* value) { m_groupingSeparatorHasBeenSet = true; m_groupingSeparator.assign(value); }
    inline DisplayFormatOptions& WithGroupingSeparator(const Aws::String& value) { SetGroupingSeparator(value); return *this;}
    inline DisplayFormatOptions& WithGroupingSeparator(Aws::String&& value) { SetGroupingSeparator(std::move(value)); return *this;}
    inline DisplayFormatOptions& WithGroupingSeparator(const char* value) { SetGroupingSeparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether to use grouping.</p>
     */
    inline bool GetUseGrouping() const{ return m_useGrouping; }
    inline bool UseGroupingHasBeenSet() const { return m_useGroupingHasBeenSet; }
    inline void SetUseGrouping(bool value) { m_useGroupingHasBeenSet = true; m_useGrouping = value; }
    inline DisplayFormatOptions& WithUseGrouping(bool value) { SetUseGrouping(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the number of fraction digits.</p>
     */
    inline int GetFractionDigits() const{ return m_fractionDigits; }
    inline bool FractionDigitsHasBeenSet() const { return m_fractionDigitsHasBeenSet; }
    inline void SetFractionDigits(int value) { m_fractionDigitsHasBeenSet = true; m_fractionDigits = value; }
    inline DisplayFormatOptions& WithFractionDigits(int value) { SetFractionDigits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix value for a display format.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline DisplayFormatOptions& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline DisplayFormatOptions& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline DisplayFormatOptions& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suffix value for a display format.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }
    inline DisplayFormatOptions& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}
    inline DisplayFormatOptions& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}
    inline DisplayFormatOptions& WithSuffix(const char* value) { SetSuffix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit scaler. Valid values for this structure are: <code>NONE</code>,
     * <code>AUTO</code>, <code>THOUSANDS</code>, <code>MILLIONS</code>,
     * <code>BILLIONS</code>, and <code>TRILLIONS</code>.</p>
     */
    inline const NumberScale& GetUnitScaler() const{ return m_unitScaler; }
    inline bool UnitScalerHasBeenSet() const { return m_unitScalerHasBeenSet; }
    inline void SetUnitScaler(const NumberScale& value) { m_unitScalerHasBeenSet = true; m_unitScaler = value; }
    inline void SetUnitScaler(NumberScale&& value) { m_unitScalerHasBeenSet = true; m_unitScaler = std::move(value); }
    inline DisplayFormatOptions& WithUnitScaler(const NumberScale& value) { SetUnitScaler(value); return *this;}
    inline DisplayFormatOptions& WithUnitScaler(NumberScale&& value) { SetUnitScaler(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The negative format.</p>
     */
    inline const NegativeFormat& GetNegativeFormat() const{ return m_negativeFormat; }
    inline bool NegativeFormatHasBeenSet() const { return m_negativeFormatHasBeenSet; }
    inline void SetNegativeFormat(const NegativeFormat& value) { m_negativeFormatHasBeenSet = true; m_negativeFormat = value; }
    inline void SetNegativeFormat(NegativeFormat&& value) { m_negativeFormatHasBeenSet = true; m_negativeFormat = std::move(value); }
    inline DisplayFormatOptions& WithNegativeFormat(const NegativeFormat& value) { SetNegativeFormat(value); return *this;}
    inline DisplayFormatOptions& WithNegativeFormat(NegativeFormat&& value) { SetNegativeFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency symbol, such as <code>USD</code>.</p>
     */
    inline const Aws::String& GetCurrencySymbol() const{ return m_currencySymbol; }
    inline bool CurrencySymbolHasBeenSet() const { return m_currencySymbolHasBeenSet; }
    inline void SetCurrencySymbol(const Aws::String& value) { m_currencySymbolHasBeenSet = true; m_currencySymbol = value; }
    inline void SetCurrencySymbol(Aws::String&& value) { m_currencySymbolHasBeenSet = true; m_currencySymbol = std::move(value); }
    inline void SetCurrencySymbol(const char* value) { m_currencySymbolHasBeenSet = true; m_currencySymbol.assign(value); }
    inline DisplayFormatOptions& WithCurrencySymbol(const Aws::String& value) { SetCurrencySymbol(value); return *this;}
    inline DisplayFormatOptions& WithCurrencySymbol(Aws::String&& value) { SetCurrencySymbol(std::move(value)); return *this;}
    inline DisplayFormatOptions& WithCurrencySymbol(const char* value) { SetCurrencySymbol(value); return *this;}
    ///@}
  private:

    bool m_useBlankCellFormat;
    bool m_useBlankCellFormatHasBeenSet = false;

    Aws::String m_blankCellFormat;
    bool m_blankCellFormatHasBeenSet = false;

    Aws::String m_dateFormat;
    bool m_dateFormatHasBeenSet = false;

    TopicNumericSeparatorSymbol m_decimalSeparator;
    bool m_decimalSeparatorHasBeenSet = false;

    Aws::String m_groupingSeparator;
    bool m_groupingSeparatorHasBeenSet = false;

    bool m_useGrouping;
    bool m_useGroupingHasBeenSet = false;

    int m_fractionDigits;
    bool m_fractionDigitsHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;

    NumberScale m_unitScaler;
    bool m_unitScalerHasBeenSet = false;

    NegativeFormat m_negativeFormat;
    bool m_negativeFormatHasBeenSet = false;

    Aws::String m_currencySymbol;
    bool m_currencySymbolHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
