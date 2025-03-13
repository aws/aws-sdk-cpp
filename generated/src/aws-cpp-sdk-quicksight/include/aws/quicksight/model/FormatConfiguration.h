/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StringFormatConfiguration.h>
#include <aws/quicksight/model/NumberFormatConfiguration.h>
#include <aws/quicksight/model/DateTimeFormatConfiguration.h>
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
   * <p>The formatting configuration for all types of field.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FormatConfiguration">AWS
   * API Reference</a></p>
   */
  class FormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FormatConfiguration() = default;
    AWS_QUICKSIGHT_API FormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline const StringFormatConfiguration& GetStringFormatConfiguration() const { return m_stringFormatConfiguration; }
    inline bool StringFormatConfigurationHasBeenSet() const { return m_stringFormatConfigurationHasBeenSet; }
    template<typename StringFormatConfigurationT = StringFormatConfiguration>
    void SetStringFormatConfiguration(StringFormatConfigurationT&& value) { m_stringFormatConfigurationHasBeenSet = true; m_stringFormatConfiguration = std::forward<StringFormatConfigurationT>(value); }
    template<typename StringFormatConfigurationT = StringFormatConfiguration>
    FormatConfiguration& WithStringFormatConfiguration(StringFormatConfigurationT&& value) { SetStringFormatConfiguration(std::forward<StringFormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline const NumberFormatConfiguration& GetNumberFormatConfiguration() const { return m_numberFormatConfiguration; }
    inline bool NumberFormatConfigurationHasBeenSet() const { return m_numberFormatConfigurationHasBeenSet; }
    template<typename NumberFormatConfigurationT = NumberFormatConfiguration>
    void SetNumberFormatConfiguration(NumberFormatConfigurationT&& value) { m_numberFormatConfigurationHasBeenSet = true; m_numberFormatConfiguration = std::forward<NumberFormatConfigurationT>(value); }
    template<typename NumberFormatConfigurationT = NumberFormatConfiguration>
    FormatConfiguration& WithNumberFormatConfiguration(NumberFormatConfigurationT&& value) { SetNumberFormatConfiguration(std::forward<NumberFormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline const DateTimeFormatConfiguration& GetDateTimeFormatConfiguration() const { return m_dateTimeFormatConfiguration; }
    inline bool DateTimeFormatConfigurationHasBeenSet() const { return m_dateTimeFormatConfigurationHasBeenSet; }
    template<typename DateTimeFormatConfigurationT = DateTimeFormatConfiguration>
    void SetDateTimeFormatConfiguration(DateTimeFormatConfigurationT&& value) { m_dateTimeFormatConfigurationHasBeenSet = true; m_dateTimeFormatConfiguration = std::forward<DateTimeFormatConfigurationT>(value); }
    template<typename DateTimeFormatConfigurationT = DateTimeFormatConfiguration>
    FormatConfiguration& WithDateTimeFormatConfiguration(DateTimeFormatConfigurationT&& value) { SetDateTimeFormatConfiguration(std::forward<DateTimeFormatConfigurationT>(value)); return *this;}
    ///@}
  private:

    StringFormatConfiguration m_stringFormatConfiguration;
    bool m_stringFormatConfigurationHasBeenSet = false;

    NumberFormatConfiguration m_numberFormatConfiguration;
    bool m_numberFormatConfigurationHasBeenSet = false;

    DateTimeFormatConfiguration m_dateTimeFormatConfiguration;
    bool m_dateTimeFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
