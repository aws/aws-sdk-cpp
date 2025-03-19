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
    AWS_QUICKSIGHT_API NumberDisplayFormatConfiguration() = default;
    AWS_QUICKSIGHT_API NumberDisplayFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumberDisplayFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the prefix value of the number format.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    NumberDisplayFormatConfiguration& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the suffix value of the number format.</p>
     */
    inline const Aws::String& GetSuffix() const { return m_suffix; }
    inline bool SuffixHasBeenSet() const { return m_suffixHasBeenSet; }
    template<typename SuffixT = Aws::String>
    void SetSuffix(SuffixT&& value) { m_suffixHasBeenSet = true; m_suffix = std::forward<SuffixT>(value); }
    template<typename SuffixT = Aws::String>
    NumberDisplayFormatConfiguration& WithSuffix(SuffixT&& value) { SetSuffix(std::forward<SuffixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the numeric separator configuration.</p>
     */
    inline const NumericSeparatorConfiguration& GetSeparatorConfiguration() const { return m_separatorConfiguration; }
    inline bool SeparatorConfigurationHasBeenSet() const { return m_separatorConfigurationHasBeenSet; }
    template<typename SeparatorConfigurationT = NumericSeparatorConfiguration>
    void SetSeparatorConfiguration(SeparatorConfigurationT&& value) { m_separatorConfigurationHasBeenSet = true; m_separatorConfiguration = std::forward<SeparatorConfigurationT>(value); }
    template<typename SeparatorConfigurationT = NumericSeparatorConfiguration>
    NumberDisplayFormatConfiguration& WithSeparatorConfiguration(SeparatorConfigurationT&& value) { SetSeparatorConfiguration(std::forward<SeparatorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the decimal places configuration.</p>
     */
    inline const DecimalPlacesConfiguration& GetDecimalPlacesConfiguration() const { return m_decimalPlacesConfiguration; }
    inline bool DecimalPlacesConfigurationHasBeenSet() const { return m_decimalPlacesConfigurationHasBeenSet; }
    template<typename DecimalPlacesConfigurationT = DecimalPlacesConfiguration>
    void SetDecimalPlacesConfiguration(DecimalPlacesConfigurationT&& value) { m_decimalPlacesConfigurationHasBeenSet = true; m_decimalPlacesConfiguration = std::forward<DecimalPlacesConfigurationT>(value); }
    template<typename DecimalPlacesConfigurationT = DecimalPlacesConfiguration>
    NumberDisplayFormatConfiguration& WithDecimalPlacesConfiguration(DecimalPlacesConfigurationT&& value) { SetDecimalPlacesConfiguration(std::forward<DecimalPlacesConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the number scale value of the number format.</p>
     */
    inline NumberScale GetNumberScale() const { return m_numberScale; }
    inline bool NumberScaleHasBeenSet() const { return m_numberScaleHasBeenSet; }
    inline void SetNumberScale(NumberScale value) { m_numberScaleHasBeenSet = true; m_numberScale = value; }
    inline NumberDisplayFormatConfiguration& WithNumberScale(NumberScale value) { SetNumberScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the negative value configuration.</p>
     */
    inline const NegativeValueConfiguration& GetNegativeValueConfiguration() const { return m_negativeValueConfiguration; }
    inline bool NegativeValueConfigurationHasBeenSet() const { return m_negativeValueConfigurationHasBeenSet; }
    template<typename NegativeValueConfigurationT = NegativeValueConfiguration>
    void SetNegativeValueConfiguration(NegativeValueConfigurationT&& value) { m_negativeValueConfigurationHasBeenSet = true; m_negativeValueConfiguration = std::forward<NegativeValueConfigurationT>(value); }
    template<typename NegativeValueConfigurationT = NegativeValueConfiguration>
    NumberDisplayFormatConfiguration& WithNegativeValueConfiguration(NegativeValueConfigurationT&& value) { SetNegativeValueConfiguration(std::forward<NegativeValueConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline const NullValueFormatConfiguration& GetNullValueFormatConfiguration() const { return m_nullValueFormatConfiguration; }
    inline bool NullValueFormatConfigurationHasBeenSet() const { return m_nullValueFormatConfigurationHasBeenSet; }
    template<typename NullValueFormatConfigurationT = NullValueFormatConfiguration>
    void SetNullValueFormatConfiguration(NullValueFormatConfigurationT&& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = std::forward<NullValueFormatConfigurationT>(value); }
    template<typename NullValueFormatConfigurationT = NullValueFormatConfiguration>
    NumberDisplayFormatConfiguration& WithNullValueFormatConfiguration(NullValueFormatConfigurationT&& value) { SetNullValueFormatConfiguration(std::forward<NullValueFormatConfigurationT>(value)); return *this;}
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

    NumberScale m_numberScale{NumberScale::NOT_SET};
    bool m_numberScaleHasBeenSet = false;

    NegativeValueConfiguration m_negativeValueConfiguration;
    bool m_negativeValueConfigurationHasBeenSet = false;

    NullValueFormatConfiguration m_nullValueFormatConfiguration;
    bool m_nullValueFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
