/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsLambdaFunctionEnvironmentError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A function's environment variable settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionEnvironment">AWS
   * API Reference</a></p>
   */
  class AwsLambdaFunctionEnvironment
  {
  public:
    AWS_SECURITYHUB_API AwsLambdaFunctionEnvironment() = default;
    AWS_SECURITYHUB_API AwsLambdaFunctionEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Environment variable key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    AwsLambdaFunctionEnvironment& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
    AwsLambdaFunctionEnvironment& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An <code>AwsLambdaFunctionEnvironmentError</code> object.</p>
     */
    inline const AwsLambdaFunctionEnvironmentError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = AwsLambdaFunctionEnvironmentError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = AwsLambdaFunctionEnvironmentError>
    AwsLambdaFunctionEnvironment& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;

    AwsLambdaFunctionEnvironmentError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
