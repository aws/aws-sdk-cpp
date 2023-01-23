/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>Formatting configuration for number fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumberFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class NumberFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NumberFormatConfiguration();
    AWS_QUICKSIGHT_API NumberFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumberFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the numeric format configuration.</p>
     */
    inline const NumericFormatConfiguration& GetFormatConfiguration() const{ return m_formatConfiguration; }

    /**
     * <p>The options that determine the numeric format configuration.</p>
     */
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }

    /**
     * <p>The options that determine the numeric format configuration.</p>
     */
    inline void SetFormatConfiguration(const NumericFormatConfiguration& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = value; }

    /**
     * <p>The options that determine the numeric format configuration.</p>
     */
    inline void SetFormatConfiguration(NumericFormatConfiguration&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::move(value); }

    /**
     * <p>The options that determine the numeric format configuration.</p>
     */
    inline NumberFormatConfiguration& WithFormatConfiguration(const NumericFormatConfiguration& value) { SetFormatConfiguration(value); return *this;}

    /**
     * <p>The options that determine the numeric format configuration.</p>
     */
    inline NumberFormatConfiguration& WithFormatConfiguration(NumericFormatConfiguration&& value) { SetFormatConfiguration(std::move(value)); return *this;}

  private:

    NumericFormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
