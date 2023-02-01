/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumberDisplayFormatConfiguration.h>
#include <aws/quicksight/model/CurrencyDisplayFormatConfiguration.h>
#include <aws/quicksight/model/PercentageDisplayFormatConfiguration.h>
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
   * <p>The options that determine the numeric format configuration.</p> <p>This is a
   * union type structure. For this structure to be valid, only one of the attributes
   * can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class NumericFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NumericFormatConfiguration();
    AWS_QUICKSIGHT_API NumericFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the number display format configuration.</p>
     */
    inline const NumberDisplayFormatConfiguration& GetNumberDisplayFormatConfiguration() const{ return m_numberDisplayFormatConfiguration; }

    /**
     * <p>The options that determine the number display format configuration.</p>
     */
    inline bool NumberDisplayFormatConfigurationHasBeenSet() const { return m_numberDisplayFormatConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the number display format configuration.</p>
     */
    inline void SetNumberDisplayFormatConfiguration(const NumberDisplayFormatConfiguration& value) { m_numberDisplayFormatConfigurationHasBeenSet = true; m_numberDisplayFormatConfiguration = value; }

    /**
     * <p>The options that determine the number display format configuration.</p>
     */
    inline void SetNumberDisplayFormatConfiguration(NumberDisplayFormatConfiguration&& value) { m_numberDisplayFormatConfigurationHasBeenSet = true; m_numberDisplayFormatConfiguration = std::move(value); }

    /**
     * <p>The options that determine the number display format configuration.</p>
     */
    inline NumericFormatConfiguration& WithNumberDisplayFormatConfiguration(const NumberDisplayFormatConfiguration& value) { SetNumberDisplayFormatConfiguration(value); return *this;}

    /**
     * <p>The options that determine the number display format configuration.</p>
     */
    inline NumericFormatConfiguration& WithNumberDisplayFormatConfiguration(NumberDisplayFormatConfiguration&& value) { SetNumberDisplayFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the currency display format configuration.</p>
     */
    inline const CurrencyDisplayFormatConfiguration& GetCurrencyDisplayFormatConfiguration() const{ return m_currencyDisplayFormatConfiguration; }

    /**
     * <p>The options that determine the currency display format configuration.</p>
     */
    inline bool CurrencyDisplayFormatConfigurationHasBeenSet() const { return m_currencyDisplayFormatConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the currency display format configuration.</p>
     */
    inline void SetCurrencyDisplayFormatConfiguration(const CurrencyDisplayFormatConfiguration& value) { m_currencyDisplayFormatConfigurationHasBeenSet = true; m_currencyDisplayFormatConfiguration = value; }

    /**
     * <p>The options that determine the currency display format configuration.</p>
     */
    inline void SetCurrencyDisplayFormatConfiguration(CurrencyDisplayFormatConfiguration&& value) { m_currencyDisplayFormatConfigurationHasBeenSet = true; m_currencyDisplayFormatConfiguration = std::move(value); }

    /**
     * <p>The options that determine the currency display format configuration.</p>
     */
    inline NumericFormatConfiguration& WithCurrencyDisplayFormatConfiguration(const CurrencyDisplayFormatConfiguration& value) { SetCurrencyDisplayFormatConfiguration(value); return *this;}

    /**
     * <p>The options that determine the currency display format configuration.</p>
     */
    inline NumericFormatConfiguration& WithCurrencyDisplayFormatConfiguration(CurrencyDisplayFormatConfiguration&& value) { SetCurrencyDisplayFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>The options that determine the percentage display format configuration.</p>
     */
    inline const PercentageDisplayFormatConfiguration& GetPercentageDisplayFormatConfiguration() const{ return m_percentageDisplayFormatConfiguration; }

    /**
     * <p>The options that determine the percentage display format configuration.</p>
     */
    inline bool PercentageDisplayFormatConfigurationHasBeenSet() const { return m_percentageDisplayFormatConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the percentage display format configuration.</p>
     */
    inline void SetPercentageDisplayFormatConfiguration(const PercentageDisplayFormatConfiguration& value) { m_percentageDisplayFormatConfigurationHasBeenSet = true; m_percentageDisplayFormatConfiguration = value; }

    /**
     * <p>The options that determine the percentage display format configuration.</p>
     */
    inline void SetPercentageDisplayFormatConfiguration(PercentageDisplayFormatConfiguration&& value) { m_percentageDisplayFormatConfigurationHasBeenSet = true; m_percentageDisplayFormatConfiguration = std::move(value); }

    /**
     * <p>The options that determine the percentage display format configuration.</p>
     */
    inline NumericFormatConfiguration& WithPercentageDisplayFormatConfiguration(const PercentageDisplayFormatConfiguration& value) { SetPercentageDisplayFormatConfiguration(value); return *this;}

    /**
     * <p>The options that determine the percentage display format configuration.</p>
     */
    inline NumericFormatConfiguration& WithPercentageDisplayFormatConfiguration(PercentageDisplayFormatConfiguration&& value) { SetPercentageDisplayFormatConfiguration(std::move(value)); return *this;}

  private:

    NumberDisplayFormatConfiguration m_numberDisplayFormatConfiguration;
    bool m_numberDisplayFormatConfigurationHasBeenSet = false;

    CurrencyDisplayFormatConfiguration m_currencyDisplayFormatConfiguration;
    bool m_currencyDisplayFormatConfigurationHasBeenSet = false;

    PercentageDisplayFormatConfiguration m_percentageDisplayFormatConfiguration;
    bool m_percentageDisplayFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
