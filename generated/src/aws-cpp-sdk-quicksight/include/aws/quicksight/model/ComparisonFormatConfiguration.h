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
    AWS_QUICKSIGHT_API ComparisonFormatConfiguration() = default;
    AWS_QUICKSIGHT_API ComparisonFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ComparisonFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number display format.</p>
     */
    inline const NumberDisplayFormatConfiguration& GetNumberDisplayFormatConfiguration() const { return m_numberDisplayFormatConfiguration; }
    inline bool NumberDisplayFormatConfigurationHasBeenSet() const { return m_numberDisplayFormatConfigurationHasBeenSet; }
    template<typename NumberDisplayFormatConfigurationT = NumberDisplayFormatConfiguration>
    void SetNumberDisplayFormatConfiguration(NumberDisplayFormatConfigurationT&& value) { m_numberDisplayFormatConfigurationHasBeenSet = true; m_numberDisplayFormatConfiguration = std::forward<NumberDisplayFormatConfigurationT>(value); }
    template<typename NumberDisplayFormatConfigurationT = NumberDisplayFormatConfiguration>
    ComparisonFormatConfiguration& WithNumberDisplayFormatConfiguration(NumberDisplayFormatConfigurationT&& value) { SetNumberDisplayFormatConfiguration(std::forward<NumberDisplayFormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage display format.</p>
     */
    inline const PercentageDisplayFormatConfiguration& GetPercentageDisplayFormatConfiguration() const { return m_percentageDisplayFormatConfiguration; }
    inline bool PercentageDisplayFormatConfigurationHasBeenSet() const { return m_percentageDisplayFormatConfigurationHasBeenSet; }
    template<typename PercentageDisplayFormatConfigurationT = PercentageDisplayFormatConfiguration>
    void SetPercentageDisplayFormatConfiguration(PercentageDisplayFormatConfigurationT&& value) { m_percentageDisplayFormatConfigurationHasBeenSet = true; m_percentageDisplayFormatConfiguration = std::forward<PercentageDisplayFormatConfigurationT>(value); }
    template<typename PercentageDisplayFormatConfigurationT = PercentageDisplayFormatConfiguration>
    ComparisonFormatConfiguration& WithPercentageDisplayFormatConfiguration(PercentageDisplayFormatConfigurationT&& value) { SetPercentageDisplayFormatConfiguration(std::forward<PercentageDisplayFormatConfigurationT>(value)); return *this;}
    ///@}
  private:

    NumberDisplayFormatConfiguration m_numberDisplayFormatConfiguration;
    bool m_numberDisplayFormatConfigurationHasBeenSet = false;

    PercentageDisplayFormatConfiguration m_percentageDisplayFormatConfiguration;
    bool m_percentageDisplayFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
