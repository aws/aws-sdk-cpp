﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/NullValueFormatConfiguration.h>
#include <aws/quicksight/model/NumericFormatConfiguration.h>
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
   * <p>Formatting configuration for <code>DateTime</code> fields.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class DateTimeFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DateTimeFormatConfiguration();
    AWS_QUICKSIGHT_API DateTimeFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the <code>DateTime</code> format.</p>
     */
    inline const Aws::String& GetDateTimeFormat() const{ return m_dateTimeFormat; }
    inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }
    inline void SetDateTimeFormat(const Aws::String& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = value; }
    inline void SetDateTimeFormat(Aws::String&& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = std::move(value); }
    inline void SetDateTimeFormat(const char* value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat.assign(value); }
    inline DateTimeFormatConfiguration& WithDateTimeFormat(const Aws::String& value) { SetDateTimeFormat(value); return *this;}
    inline DateTimeFormatConfiguration& WithDateTimeFormat(Aws::String&& value) { SetDateTimeFormat(std::move(value)); return *this;}
    inline DateTimeFormatConfiguration& WithDateTimeFormat(const char* value) { SetDateTimeFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline const NullValueFormatConfiguration& GetNullValueFormatConfiguration() const{ return m_nullValueFormatConfiguration; }
    inline bool NullValueFormatConfigurationHasBeenSet() const { return m_nullValueFormatConfigurationHasBeenSet; }
    inline void SetNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = value; }
    inline void SetNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { m_nullValueFormatConfigurationHasBeenSet = true; m_nullValueFormatConfiguration = std::move(value); }
    inline DateTimeFormatConfiguration& WithNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { SetNullValueFormatConfiguration(value); return *this;}
    inline DateTimeFormatConfiguration& WithNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { SetNullValueFormatConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The formatting configuration for numeric <code>DateTime</code> fields.</p>
     */
    inline const NumericFormatConfiguration& GetNumericFormatConfiguration() const{ return m_numericFormatConfiguration; }
    inline bool NumericFormatConfigurationHasBeenSet() const { return m_numericFormatConfigurationHasBeenSet; }
    inline void SetNumericFormatConfiguration(const NumericFormatConfiguration& value) { m_numericFormatConfigurationHasBeenSet = true; m_numericFormatConfiguration = value; }
    inline void SetNumericFormatConfiguration(NumericFormatConfiguration&& value) { m_numericFormatConfigurationHasBeenSet = true; m_numericFormatConfiguration = std::move(value); }
    inline DateTimeFormatConfiguration& WithNumericFormatConfiguration(const NumericFormatConfiguration& value) { SetNumericFormatConfiguration(value); return *this;}
    inline DateTimeFormatConfiguration& WithNumericFormatConfiguration(NumericFormatConfiguration&& value) { SetNumericFormatConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dateTimeFormat;
    bool m_dateTimeFormatHasBeenSet = false;

    NullValueFormatConfiguration m_nullValueFormatConfiguration;
    bool m_nullValueFormatConfigurationHasBeenSet = false;

    NumericFormatConfiguration m_numericFormatConfiguration;
    bool m_numericFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
