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
    AWS_SECURITYHUB_API ParameterConfiguration() = default;
    AWS_SECURITYHUB_API ParameterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ParameterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline ParameterValueType GetValueType() const { return m_valueType; }
    inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
    inline void SetValueType(ParameterValueType value) { m_valueTypeHasBeenSet = true; m_valueType = value; }
    inline ParameterConfiguration& WithValueType(ParameterValueType value) { SetValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current value of a control parameter. </p>
     */
    inline const ParameterValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = ParameterValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = ParameterValue>
    ParameterConfiguration& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ParameterValueType m_valueType{ParameterValueType::NOT_SET};
    bool m_valueTypeHasBeenSet = false;

    ParameterValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
