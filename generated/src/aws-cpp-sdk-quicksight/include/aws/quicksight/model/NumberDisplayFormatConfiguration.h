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
   * <p>The options that determine the number display format
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumberDisplayFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class NumberDisplayFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NumberDisplayFormatConfiguration();
    AWS_QUICKSIGHT_API NumberDisplayFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumberDisplayFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the prefix value of the number format.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline NumberDisplayFormatConfiguration& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline NumberDisplayFormatConfiguration& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the suffix value of the number format.</p>
     */
    inline const Aws::String& GetSuffix() const{ return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    inline void SetSuffix(const Aws::String& value) { m_suffixHasBeenSet = true; m_suffix = value; }
    inline void SetSuffix(Aws::String&& value) { m_suffixHasBeenSet = true; m_suffix = std::move(value); }
    inline void SetSuffix(const char* value) { m_suffixHasBeenSet = true; m_suffix.assign(value); }
    inline NumberDisplayFormatConfiguration& WithSuffix(const Aws::String& value) { SetSuffix(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithSuffix(Aws::String&& value) { SetSuffix(std::move(value)); return *this;}
    inline NumberDisplayFormatConfiguration& WithSuffix(const char* value) { SetSuffix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline const NumericSeparatorConfiguration& GetSeparatorConfiguration() const{ return m_separatorConfiguration; }
    inline bool SeparatorConfigurationHasBeenSet() const { return m_separatorConfigurationHasBeenSet; }
    inline void SetSeparatorConfiguration(const NumericSeparatorConfiguration& value) { m_separatorConfigurationHasBeenSet = true; m_separatorConfiguration = value; }
    inline void SetSeparatorConfiguration(NumericSeparatorConfiguration&& value) { m_separatorConfigurationHasBeenSet = true; m_separatorConfiguration = std::move(value); }
    inline NumberDisplayFormatConfiguration& WithSeparatorConfiguration(const NumericSeparatorConfiguration& value) { SetSeparatorConfiguration(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithSeparatorConfiguration(NumericSeparatorConfiguration&& value) { SetSeparatorConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline const DecimalPlacesConfiguration& GetDecimalPlacesConfiguration() const{ return m_decimalPlacesConfiguration; }
    inline bool DecimalPlacesConfigurationHasBeenSet() const { return m_decimalPlacesConfigurationHasBeenSet; }
    inline void SetDecimalPlacesConfiguration(const DecimalPlacesConfiguration& value) { m_decimalPlacesConfigurationHasBeenSet = true; m_decimalPlacesConfiguration = value; }
    inline void SetDecimalPlacesConfiguration(DecimalPlacesConfiguration&& value) { m_decimalPlacesConfigurationHasBeenSet = true; m_decimalPlacesConfiguration = std::move(value); }
    inline NumberDisplayFormatConfiguration& WithDecimalPlacesConfiguration(const DecimalPlacesConfiguration& value) { SetDecimalPlacesConfiguration(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithDecimalPlacesConfiguration(DecimalPlacesConfiguration&& value) { SetDecimalPlacesConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the number scale value of the number format.</p>
     */
    inline const NumberScale& GetNumberScale() const{ return m_numberScale; }
    inline bool NumberScaleHasBeenSet() const { return m_numberScaleHasBeenSet; }
    inline void SetNumberScale(const NumberScale& value) { m_numberScaleHasBeenSet = true; m_numberScale = value; }
    inline void SetNumberScale(NumberScale&& value) { m_numberScaleHasBeenSet = true; m_numberScale = std::move(value); }
    inline NumberDisplayFormatConfiguration& WithNumberScale(const NumberScale& value) { SetNumberScale(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithNumberScale(NumberScale&& value) { SetNumberScale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline const NegativeValueConfiguration& GetNegativeValueConfiguration() const{ return m_negativeValueConfiguration; }
    inline bool NegativeValueConfigurationHasBeenSet() const { return m_negativeValueConfigurationHasBeenSet; }
    inline void SetNegativeValueConfiguration(const NegativeValueConfiguration& value) { m_negativeValueConfigurationHasBeenSet = true; m_negativeValueConfiguration = value; }
    inline void SetNegativeValueConfiguration(NegativeValueConfiguration&& value) { m_negativeValueConfigurationHasBeenSet = true; m_negativeValueConfiguration = std::move(value); }
    inline NumberDisplayFormatConfiguration& WithNegativeValueConfiguration(const NegativeValueConfiguration& value) { SetNegativeValueConfiguration(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithNegativeValueConfiguration(NegativeValueConfiguration&& value) { SetNegativeValueConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline const NullValueFormatConfiguration& GetNullValueFormatConfiguration() const{ return m_nullValueFormatConfiguration; }
    inline bool NullValueFormatConfigurationHasBeenSet() const { return m_nullValueFormatConfigurationHasBeenSet; }
    inline void SetNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = value; }
    inline void SetNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = std::move(value); }
    inline NumberDisplayFormatConfiguration& WithNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { SetNullValueFormatConfiguration(value); return *this;}
    inline NumberDisplayFormatConfiguration& WithNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { SetNullValueFormatConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_suffix;
    bool m_suffixHasBeenSet = false;

    NumericSeparatorConfiguration m_separatorConfiguration;
    bool m_separatorConfigurationHasBeenSet = false;

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
