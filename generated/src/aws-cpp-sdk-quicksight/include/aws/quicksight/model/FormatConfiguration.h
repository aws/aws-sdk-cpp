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
    AWS_QUICKSIGHT_API FormatConfiguration();
    AWS_QUICKSIGHT_API FormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline const StringFormatConfiguration& GetStringFormatConfiguration() const{ return m_stringFormatConfiguration; }

    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline bool StringFormatConfigurationHasBeenSet() const { return m_stringFormatConfigurationHasBeenSet; }

    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline void SetStringFormatConfiguration(const StringFormatConfiguration& value) { m_stringFormatConfigurationHasBeenSet = true; m_stringFormatConfiguration = value; }

    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline void SetStringFormatConfiguration(StringFormatConfiguration&& value) { m_stringFormatConfigurationHasBeenSet = true; m_stringFormatConfiguration = std::move(value); }

    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline FormatConfiguration& WithStringFormatConfiguration(const StringFormatConfiguration& value) { SetStringFormatConfiguration(value); return *this;}

    /**
     * <p>Formatting configuration for string fields.</p>
     */
    inline FormatConfiguration& WithStringFormatConfiguration(StringFormatConfiguration&& value) { SetStringFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline const NumberFormatConfiguration& GetNumberFormatConfiguration() const{ return m_numberFormatConfiguration; }

    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline bool NumberFormatConfigurationHasBeenSet() const { return m_numberFormatConfigurationHasBeenSet; }

    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline void SetNumberFormatConfiguration(const NumberFormatConfiguration& value) { m_numberFormatConfigurationHasBeenSet = true; m_numberFormatConfiguration = value; }

    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline void SetNumberFormatConfiguration(NumberFormatConfiguration&& value) { m_numberFormatConfigurationHasBeenSet = true; m_numberFormatConfiguration = std::move(value); }

    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline FormatConfiguration& WithNumberFormatConfiguration(const NumberFormatConfiguration& value) { SetNumberFormatConfiguration(value); return *this;}

    /**
     * <p>Formatting configuration for number fields.</p>
     */
    inline FormatConfiguration& WithNumberFormatConfiguration(NumberFormatConfiguration&& value) { SetNumberFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline const DateTimeFormatConfiguration& GetDateTimeFormatConfiguration() const{ return m_dateTimeFormatConfiguration; }

    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline bool DateTimeFormatConfigurationHasBeenSet() const { return m_dateTimeFormatConfigurationHasBeenSet; }

    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline void SetDateTimeFormatConfiguration(const DateTimeFormatConfiguration& value) { m_dateTimeFormatConfigurationHasBeenSet = true; m_dateTimeFormatConfiguration = value; }

    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline void SetDateTimeFormatConfiguration(DateTimeFormatConfiguration&& value) { m_dateTimeFormatConfigurationHasBeenSet = true; m_dateTimeFormatConfiguration = std::move(value); }

    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline FormatConfiguration& WithDateTimeFormatConfiguration(const DateTimeFormatConfiguration& value) { SetDateTimeFormatConfiguration(value); return *this;}

    /**
     * <p>Formatting configuration for <code>DateTime</code> fields.</p>
     */
    inline FormatConfiguration& WithDateTimeFormatConfiguration(DateTimeFormatConfiguration&& value) { SetDateTimeFormatConfiguration(std::move(value)); return *this;}

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
