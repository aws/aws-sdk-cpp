/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The options for customizing a security control parameter that is a double.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/DoubleConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class DoubleConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API DoubleConfigurationOptions();
    AWS_SECURITYHUB_API DoubleConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API DoubleConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Security Hub default value for a control parameter that is a double.
     * </p>
     */
    inline double GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p> The Security Hub default value for a control parameter that is a double.
     * </p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p> The Security Hub default value for a control parameter that is a double.
     * </p>
     */
    inline void SetDefaultValue(double value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p> The Security Hub default value for a control parameter that is a double.
     * </p>
     */
    inline DoubleConfigurationOptions& WithDefaultValue(double value) { SetDefaultValue(value); return *this;}


    /**
     * <p> The minimum valid value for a control parameter that is a double. </p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p> The minimum valid value for a control parameter that is a double. </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum valid value for a control parameter that is a double. </p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum valid value for a control parameter that is a double. </p>
     */
    inline DoubleConfigurationOptions& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p> The maximum valid value for a control parameter that is a double. </p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p> The maximum valid value for a control parameter that is a double. </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum valid value for a control parameter that is a double. </p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum valid value for a control parameter that is a double. </p>
     */
    inline DoubleConfigurationOptions& WithMax(double value) { SetMax(value); return *this;}

  private:

    double m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
