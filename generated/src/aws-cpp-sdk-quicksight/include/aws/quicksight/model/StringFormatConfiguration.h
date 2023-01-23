/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>Formatting configuration for string fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StringFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class StringFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API StringFormatConfiguration();
    AWS_QUICKSIGHT_API StringFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StringFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline StringFormatConfiguration& WithNullValueFormatConfiguration(const NullValueFormatConfiguration& value) { SetNullValueFormatConfiguration(value); return *this;}

    /**
     * <p>The options that determine the null value format configuration.</p>
     */
    inline StringFormatConfiguration& WithNullValueFormatConfiguration(NullValueFormatConfiguration&& value) { SetNullValueFormatConfiguration(std::move(value)); return *this;}


    /**
     * <p>The formatting configuration for numeric strings.</p>
     */
    inline const NumericFormatConfiguration& GetNumericFormatConfiguration() const{ return m_numericFormatConfiguration; }

    /**
     * <p>The formatting configuration for numeric strings.</p>
     */
    inline bool NumericFormatConfigurationHasBeenSet() const { return m_numericFormatConfigurationHasBeenSet; }

    /**
     * <p>The formatting configuration for numeric strings.</p>
     */
    inline void SetNumericFormatConfiguration(const NumericFormatConfiguration& value) { m_numericFormatConfigurationHasBeenSet = true; m_numericFormatConfiguration = value; }

    /**
     * <p>The formatting configuration for numeric strings.</p>
     */
    inline void SetNumericFormatConfiguration(NumericFormatConfiguration&& value) { m_numericFormatConfigurationHasBeenSet = true; m_numericFormatConfiguration = std::move(value); }

    /**
     * <p>The formatting configuration for numeric strings.</p>
     */
    inline StringFormatConfiguration& WithNumericFormatConfiguration(const NumericFormatConfiguration& value) { SetNumericFormatConfiguration(value); return *this;}

    /**
     * <p>The formatting configuration for numeric strings.</p>
     */
    inline StringFormatConfiguration& WithNumericFormatConfiguration(NumericFormatConfiguration&& value) { SetNumericFormatConfiguration(std::move(value)); return *this;}

  private:

    NullValueFormatConfiguration m_nullValueFormatConfiguration;
    bool m_nullValueFormatConfigurationHasBeenSet = false;

    NumericFormatConfiguration m_numericFormatConfiguration;
    bool m_numericFormatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
