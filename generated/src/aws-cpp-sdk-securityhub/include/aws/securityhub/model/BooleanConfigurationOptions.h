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
   * <p> The options for customizing a security control parameter with a boolean. For
   * a boolean parameter, the options are <code>true</code> and <code>false</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BooleanConfigurationOptions">AWS
   * API Reference</a></p>
   */
  class BooleanConfigurationOptions
  {
  public:
    AWS_SECURITYHUB_API BooleanConfigurationOptions();
    AWS_SECURITYHUB_API BooleanConfigurationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API BooleanConfigurationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Security Hub default value for a boolean parameter. </p>
     */
    inline bool GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p> The Security Hub default value for a boolean parameter. </p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p> The Security Hub default value for a boolean parameter. </p>
     */
    inline void SetDefaultValue(bool value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p> The Security Hub default value for a boolean parameter. </p>
     */
    inline BooleanConfigurationOptions& WithDefaultValue(bool value) { SetDefaultValue(value); return *this;}

  private:

    bool m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
