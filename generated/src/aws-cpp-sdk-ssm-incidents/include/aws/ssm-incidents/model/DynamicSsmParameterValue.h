/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/model/VariableType.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The dynamic SSM parameter value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DynamicSsmParameterValue">AWS
   * API Reference</a></p>
   */
  class DynamicSsmParameterValue
  {
  public:
    AWS_SSMINCIDENTS_API DynamicSsmParameterValue() = default;
    AWS_SSMINCIDENTS_API DynamicSsmParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API DynamicSsmParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Variable dynamic parameters. A parameter value is determined when an incident
     * is created.</p>
     */
    inline VariableType GetVariable() const { return m_variable; }
    inline bool VariableHasBeenSet() const { return m_variableHasBeenSet; }
    inline void SetVariable(VariableType value) { m_variableHasBeenSet = true; m_variable = value; }
    inline DynamicSsmParameterValue& WithVariable(VariableType value) { SetVariable(value); return *this;}
    ///@}
  private:

    VariableType m_variable{VariableType::NOT_SET};
    bool m_variableHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
