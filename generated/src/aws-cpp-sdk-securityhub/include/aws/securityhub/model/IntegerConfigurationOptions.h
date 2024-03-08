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
   * <p> The options for customizing a security control parameter that is an integer.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/IntegerConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class IntegerConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API IntegerConfigurationOptions();
    AWS_SECURITYHUB_API IntegerConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API IntegerConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Security Hub default value for a control parameter that is an integer.
     * </p>
     */
    inline int GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p> The Security Hub default value for a control parameter that is an integer.
     * </p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p> The Security Hub default value for a control parameter that is an integer.
     * </p>
     */
    inline void SetDefaultValue(int value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p> The Security Hub default value for a control parameter that is an integer.
     * </p>
     */
    inline IntegerConfigurationOptions& WithDefaultValue(int value) { SetDefaultValue(value); return *this;}


    /**
     * <p> The minimum valid value for a control parameter that is an integer. </p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p> The minimum valid value for a control parameter that is an integer. </p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p> The minimum valid value for a control parameter that is an integer. </p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p> The minimum valid value for a control parameter that is an integer. </p>
     */
    inline IntegerConfigurationOptions& WithMin(int value) { SetMin(value); return *this;}


    /**
     * <p> The maximum valid value for a control parameter that is an integer. </p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p> The maximum valid value for a control parameter that is an integer. </p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p> The maximum valid value for a control parameter that is an integer. </p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p> The maximum valid value for a control parameter that is an integer. </p>
     */
    inline IntegerConfigurationOptions& WithMax(int value) { SetMax(value); return *this;}

  private:

    int m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    int m_min;
    bool m_minHasBeenSet = false;

    int m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
