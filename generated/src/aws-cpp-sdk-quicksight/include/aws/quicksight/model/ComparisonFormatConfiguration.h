/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumberDisplayFormatConfiguration.h>
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
   * <p>The format of the comparison.</p> <p>This is a union type structure. For this
   * structure to be valid, only one of the attributes can be defined.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComparisonFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class ComparisonFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ComparisonFormatConfiguration();
    AWS_QUICKSIGHT_API ComparisonFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComparisonFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number display format.</p>
     */
    inline const NumberDisplayFormatConfiguration& GetNumberDisplayFormatConfiguration() const{ return m_numberDisplayFormatConfiguration; }

    /**
     * <p>The number display format.</p>
     */
    inline bool NumberDisplayFormatConfigurationHasBeenSet() const { return m_numberDisplayFormatConfigurationHasBeenSet; }

    /**
     * <p>The number display format.</p>
     */
    inline void SetNumberDisplayFormatConfiguration(const NumberDisplayFormatConfiguration& value) { m_numberDisplayFormatConfigurationHasBeenSet = true; m_numberDisplayFormatConfiguration = value; }

    /**
     * <p>The number display format.</p>
     */
    inline void SetNumberDisplayFormatConfiguration(NumberDisplayFormatConfiguration&& value) { m_numberDisplayFormatConfigurationHasBeenSet = true; m_numberDisplayFormatConfiguration = std::move(value); }

    /**
     * <p>The number display format.</p>
     */
    inline ComparisonFormatConfiguration& WithNumberDisplayFormatConfiguration(const NumberDisplayFormatConfiguration& value) { SetNumberDisplayFormatConfiguration(value); return *this;}

    /**
     * <p>The number display format.</p>
     */
    inline ComparisonFormatConfiguration& WithNumberDisplayFormatConfiguration(NumberDisplayFormatConfiguration&& value) { SetNumberDisplayFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>The percentage display format.</p>
     */
    inline const PercentageDisplayFormatConfiguration& GetPercentageDisplayFormatConfiguration() const{ return m_percentageDisplayFormatConfiguration; }

    /**
     * <p>The percentage display format.</p>
     */
    inline bool PercentageDisplayFormatConfigurationHasBeenSet() const { return m_percentageDisplayFormatConfigurationHasBeenSet; }

    /**
     * <p>The percentage display format.</p>
     */
    inline void SetPercentageDisplayFormatConfiguration(const PercentageDisplayFormatConfiguration& value) { m_percentageDisplayFormatConfigurationHasBeenSet = true; m_percentageDisplayFormatConfiguration = value; }

    /**
     * <p>The percentage display format.</p>
     */
    inline void SetPercentageDisplayFormatConfiguration(PercentageDisplayFormatConfiguration&& value) { m_percentageDisplayFormatConfigurationHasBeenSet = true; m_percentageDisplayFormatConfiguration = std::move(value); }

    /**
     * <p>The percentage display format.</p>
     */
    inline ComparisonFormatConfiguration& WithPercentageDisplayFormatConfiguration(const PercentageDisplayFormatConfiguration& value) { SetPercentageDisplayFormatConfiguration(value); return *this;}

    /**
     * <p>The percentage display format.</p>
     */
    inline ComparisonFormatConfiguration& WithPercentageDisplayFormatConfiguration(PercentageDisplayFormatConfiguration&& value) { SetPercentageDisplayFormatConfiguration(std::move(value)); return *this;}

  private:

    NumberDisplayFormatConfiguration m_numberDisplayFormatConfiguration;
    bool m_numberDisplayFormatConfigurationHasBeenSet = false;

    PercentageDisplayFormatConfiguration m_percentageDisplayFormatConfiguration;
    bool m_percentageDisplayFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
