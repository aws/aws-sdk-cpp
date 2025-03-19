/**
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
    AWS_QUICKSIGHT_API DateTimeFormatConfiguration() = default;
    AWS_QUICKSIGHT_API DateTimeFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the <code>DateTime</code> format.</p>
     */
    inline const Aws::String& GetDateTimeFormat() const { return m_dateTimeFormat; }
    inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }
    template<typename DateTimeFormatT = Aws::String>
    void SetDateTimeFormat(DateTimeFormatT&& value) { m_dateTimeFormatHasBeenSet = true; m_dateTimeFormat = std::forward<DateTimeFormatT>(value); }
    template<typename DateTimeFormatT = Aws::String>
    DateTimeFormatConfiguration& WithDateTimeFormat(DateTimeFormatT&& value) { SetDateTimeFormat(std::forward<DateTimeFormatT>(value)); return *this;}
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
    DateTimeFormatConfiguration& WithNullValueFormatConfiguration(NullValueFormatConfigurationT&& value) { SetNullValueFormatConfiguration(std::forward<NullValueFormatConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The formatting configuration for numeric <code>DateTime</code> fields.</p>
     */
    inline const NumericFormatConfiguration& GetNumericFormatConfiguration() const { return m_numericFormatConfiguration; }
    inline bool NumericFormatConfigurationHasBeenSet() const { return m_numericFormatConfigurationHasBeenSet; }
    template<typename NumericFormatConfigurationT = NumericFormatConfiguration>
    void SetNumericFormatConfiguration(NumericFormatConfigurationT&& value) { m_numericFormatConfigurationHasBeenSet = true; m_numericFormatConfiguration = std::forward<NumericFormatConfigurationT>(value); }
    template<typename NumericFormatConfigurationT = NumericFormatConfiguration>
    DateTimeFormatConfiguration& WithNumericFormatConfiguration(NumericFormatConfigurationT&& value) { SetNumericFormatConfiguration(std::forward<NumericFormatConfigurationT>(value)); return *this;}
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
