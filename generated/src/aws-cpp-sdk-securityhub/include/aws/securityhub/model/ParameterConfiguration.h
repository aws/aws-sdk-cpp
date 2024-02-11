/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ParameterValueType.h>
#include <aws/securityhub/model/ParameterValue.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> An object that provides the current value of a security control parameter
   * and identifies whether it has been customized. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ParameterConfiguration">AWS
   * API Reference</a></p>
   */
  class ParameterConfiguration
  {
  public:
    AWS_SECURITYHUB_API ParameterConfiguration();
    AWS_SECURITYHUB_API ParameterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ParameterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Identifies whether a control parameter uses a custom user-defined value or
     * subscribes to the default Security Hub behavior.</p> <p>When
     * <code>ValueType</code> is set equal to <code>DEFAULT</code>, the default
     * behavior can be a specific Security Hub default value, or the default behavior
     * can be to ignore a specific parameter. When <code>ValueType</code> is set equal
     * to <code>DEFAULT</code>, Security Hub ignores user-provided input for the
     * <code>Value</code> field.</p> <p>When <code>ValueType</code> is set equal to
     * <code>CUSTOM</code>, the <code>Value</code> field can't be empty.</p>
     */
    inline const ParameterValueType& GetValueType() const{ return m_valueType; }

    /**
     * <p> Identifies whether a control parameter uses a custom user-defined value or
     * subscribes to the default Security Hub behavior.</p> <p>When
     * <code>ValueType</code> is set equal to <code>DEFAULT</code>, the default
     * behavior can be a specific Security Hub default value, or the default behavior
     * can be to ignore a specific parameter. When <code>ValueType</code> is set equal
     * to <code>DEFAULT</code>, Security Hub ignores user-provided input for the
     * <code>Value</code> field.</p> <p>When <code>ValueType</code> is set equal to
     * <code>CUSTOM</code>, the <code>Value</code> field can't be empty.</p>
     */
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }

    /**
     * <p> Identifies whether a control parameter uses a custom user-defined value or
     * subscribes to the default Security Hub behavior.</p> <p>When
     * <code>ValueType</code> is set equal to <code>DEFAULT</code>, the default
     * behavior can be a specific Security Hub default value, or the default behavior
     * can be to ignore a specific parameter. When <code>ValueType</code> is set equal
     * to <code>DEFAULT</code>, Security Hub ignores user-provided input for the
     * <code>Value</code> field.</p> <p>When <code>ValueType</code> is set equal to
     * <code>CUSTOM</code>, the <code>Value</code> field can't be empty.</p>
     */
    inline void SetValueType(const ParameterValueType& value) { m_valueTypeHasBeenSet = true; m_valueType = value; }

    /**
     * <p> Identifies whether a control parameter uses a custom user-defined value or
     * subscribes to the default Security Hub behavior.</p> <p>When
     * <code>ValueType</code> is set equal to <code>DEFAULT</code>, the default
     * behavior can be a specific Security Hub default value, or the default behavior
     * can be to ignore a specific parameter. When <code>ValueType</code> is set equal
     * to <code>DEFAULT</code>, Security Hub ignores user-provided input for the
     * <code>Value</code> field.</p> <p>When <code>ValueType</code> is set equal to
     * <code>CUSTOM</code>, the <code>Value</code> field can't be empty.</p>
     */
    inline void SetValueType(ParameterValueType&& value) { m_valueTypeHasBeenSet = true; m_valueType = std::move(value); }

    /**
     * <p> Identifies whether a control parameter uses a custom user-defined value or
     * subscribes to the default Security Hub behavior.</p> <p>When
     * <code>ValueType</code> is set equal to <code>DEFAULT</code>, the default
     * behavior can be a specific Security Hub default value, or the default behavior
     * can be to ignore a specific parameter. When <code>ValueType</code> is set equal
     * to <code>DEFAULT</code>, Security Hub ignores user-provided input for the
     * <code>Value</code> field.</p> <p>When <code>ValueType</code> is set equal to
     * <code>CUSTOM</code>, the <code>Value</code> field can't be empty.</p>
     */
    inline ParameterConfiguration& WithValueType(const ParameterValueType& value) { SetValueType(value); return *this;}

    /**
     * <p> Identifies whether a control parameter uses a custom user-defined value or
     * subscribes to the default Security Hub behavior.</p> <p>When
     * <code>ValueType</code> is set equal to <code>DEFAULT</code>, the default
     * behavior can be a specific Security Hub default value, or the default behavior
     * can be to ignore a specific parameter. When <code>ValueType</code> is set equal
     * to <code>DEFAULT</code>, Security Hub ignores user-provided input for the
     * <code>Value</code> field.</p> <p>When <code>ValueType</code> is set equal to
     * <code>CUSTOM</code>, the <code>Value</code> field can't be empty.</p>
     */
    inline ParameterConfiguration& WithValueType(ParameterValueType&& value) { SetValueType(std::move(value)); return *this;}


    /**
     * <p> The current value of a control parameter. </p>
     */
    inline const ParameterValue& GetValue() const{ return m_value; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline void SetValue(const ParameterValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline void SetValue(ParameterValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline ParameterConfiguration& WithValue(const ParameterValue& value) { SetValue(value); return *this;}

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline ParameterConfiguration& WithValue(ParameterValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    ParameterValueType m_valueType;
    bool m_valueTypeHasBeenSet = false;

    ParameterValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
