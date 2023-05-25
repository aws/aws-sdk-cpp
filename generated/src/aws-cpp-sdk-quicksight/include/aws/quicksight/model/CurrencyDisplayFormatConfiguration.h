/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NumericSeparatorConfiguration.h>
#include <aws/quicksight/model/DecimalPlacesConfiguration.h>
#include <aws/quicksight/model/NumberScale.h>
#include <aws/quicksight/model/NegativeValueConfiguration.h>
#include <aws/quicksight/model/NullValueFormatConfiguration.h>
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
   * <p>The options that determine the currency display format
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CurrencyDisplayFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class CurrencyDisplayFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CurrencyDisplayFormatConfiguration();
    AWS_QUICKSIGHT_API CurrencyDisplayFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CurrencyDisplayFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>Determines the prefix value of the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}

    /**
     * <p>Determines the suffix value of the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSuffix(const char* value) { SetSuffix(value); return *this;}


    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline const NumericSeparatorConfiguration& GetSeparatorConfiguration() const{ return m_separatorConfiguration; }

    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline bool SeparatorConfigurationHasBeenSet() const { return m_separatorConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline void SetSeparatorConfiguration(const NumericSeparatorConfiguration& value) { m_separatorConfigurationHasBeenSet = true; m_separatorConfiguration = value; }

    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline void SetSeparatorConfiguration(NumericSeparatorConfiguration&& value) { m_separatorConfigurationHasBeenSet = true; m_separatorConfiguration = std::move(value); }

    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSeparatorConfiguration(const NumericSeparatorConfiguration& value) { SetSeparatorConfiguration(value); return *this;}

    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSeparatorConfiguration(NumericSeparatorConfiguration&& value) { SetSeparatorConfiguration(std::move(value)); return *this;}


    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline const Aws::String& GetSymbol() const{ return m_symbol; }

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline bool SymbolHasBeenSet() const { return m_symbolHasBeenSet; }

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline void SetSymbol(const Aws::String& value) { m_symbolHasBeenSet = true; m_symbol = value; }

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline void SetSymbol(Aws::String&& value) { m_symbolHasBeenSet = true; m_symbol = std::move(value); }

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline void SetSymbol(const char* value) { m_symbolHasBeenSet = true; m_symbol.assign(value); }

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSymbol(const Aws::String& value) { SetSymbol(value); return *this;}

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSymbol(Aws::String&& value) { SetSymbol(std::move(value)); return *this;}

    /**
     * <p>Determines the symbol for the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithSymbol(const char* value) { SetSymbol(value); return *this;}


    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline const DecimalPlacesConfiguration& GetDecimalPlacesConfiguration() const{ return m_decimalPlacesConfiguration; }

    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline bool DecimalPlacesConfigurationHasBeenSet() const { return m_decimalPlacesConfigurationHasBeenSet; }

    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline void SetDecimalPlacesConfiguration(const DecimalPlacesConfiguration& value) { m_decimalPlacesConfigurationHasBeenSet = true; m_decimalPlacesConfiguration = value; }

    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline void SetDecimalPlacesConfiguration(DecimalPlacesConfiguration&& value) { m_decimalPlacesConfigurationHasBeenSet = true; m_decimalPlacesConfiguration = std::move(value); }

    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithDecimalPlacesConfiguration(const DecimalPlacesConfiguration& value) { SetDecimalPlacesConfiguration(value); return *this;}

    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithDecimalPlacesConfiguration(DecimalPlacesConfiguration&& value) { SetDecimalPlacesConfiguration(std::move(value)); return *this;}


    /**
     * <p>Determines the number scale value for the currency format.</p>
     */
    inline const NumberScale& GetNumberScale() const{ return m_numberScale; }

    /**
     * <p>Determines the number scale value for the currency format.</p>
     */
    inline bool NumberScaleHasBeenSet() const { return m_numberScaleHasBeenSet; }

    /**
     * <p>Determines the number scale value for the currency format.</p>
     */
    inline void SetNumberScale(const NumberScale& value) { m_numberScaleHasBeenSet = true; m_numberScale = value; }

    /**
     * <p>Determines the number scale value for the currency format.</p>
     */
    inline void SetNumberScale(NumberScale&& value) { m_numberScaleHasBeenSet = true; m_numberScale = std::move(value); }

    /**
     * <p>Determines the number scale value for the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithNumberScale(const NumberScale& value) { SetNumberScale(value); return *this;}

    /**
     * <p>Determines the number scale value for the currency format.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithNumberScale(NumberScale&& value) { SetNumberScale(std::move(value)); return *this;}


    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline const NegativeValueConfiguration& GetNegativeValueConfiguration() const{ return m_negativeValueConfiguration; }

    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline bool NegativeValueConfigurationHasBeenSet() const { return m_negativeValueConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline void SetNegativeValueConfiguration(const NegativeValueConfiguration& value) { m_negativeValueConfigurationHasBeenSet = true; m_negativeValueConfiguration = value; }

    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline void SetNegativeValueConfiguration(NegativeValueConfiguration&& value) { m_negativeValueConfigurationHasBeenSet = true; m_negativeValueConfiguration = std::move(value); }

    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithNegativeValueConfiguration(const NegativeValueConfiguration& value) { SetNegativeValueConfiguration(value); return *this;}

    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithNegativeValueConfiguration(NegativeValueConfiguration&& value) { SetNegativeValueConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline const NullValueFormatConfiguration& GetNullValueFormatConfiguration() const{ return m_nullValueFormatConfiguration; }

    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline bool NullValueFormatConfigurationHasBeenSet() const { return m_nullValueFormatConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline void SetNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = value; }

    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline void SetNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = std::move(value); }

    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { SetNullValueFormatConfiguration(value); return *this;}

    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline CurrencyDisplayFormatConfiguration& WithNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { SetNullValueFormatConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;

    NumericSeparatorConfiguration m_separatorConfiguration;
    bool m_separatorConfigurationHasBeenSet = false;

    Aws::String m_symbol;
    bool m_symbolHasBeenSet = false;

    DecimalPlacesConfiguration m_decimalPlacesConfiguration;
    bool m_decimalPlacesConfigurationHasBeenSet = false;

    NumberScale m_numberScale;
    bool m_numberScaleHasBeenSet = false;

    NegativeValueConfiguration m_negativeValueConfiguration;
    bool m_negativeValueConfigurationHasBeenSet = false;

    NullValueFormatConfiguration m_nullValueFormatConfiguration;
    bool m_nullValueFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
