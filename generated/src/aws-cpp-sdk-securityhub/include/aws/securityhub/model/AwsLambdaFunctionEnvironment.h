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
    AWS_SECURITYHUB_API AwsLambdaFunctionEnvironment();
    AWS_SECURITYHUB_API AwsLambdaFunctionEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Environment variable key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline AwsLambdaFunctionEnvironment& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}
    inline AwsLambdaFunctionEnvironment& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}
    inline AwsLambdaFunctionEnvironment& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    inline AwsLambdaFunctionEnvironment& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline AwsLambdaFunctionEnvironment& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline AwsLambdaFunctionEnvironment& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsLambdaFunctionEnvironment& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline AwsLambdaFunctionEnvironment& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline AwsLambdaFunctionEnvironment& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An <code>AwsLambdaFunctionEnvironmentError</code> object.</p>
     */
    inline const AwsLambdaFunctionEnvironmentError& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const AwsLambdaFunctionEnvironmentError& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(AwsLambdaFunctionEnvironmentError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline AwsLambdaFunctionEnvironment& WithError(const AwsLambdaFunctionEnvironmentError& value) { SetError(value); return *this;}
    inline AwsLambdaFunctionEnvironment& WithError(AwsLambdaFunctionEnvironmentError&& value) { SetError(std::move(value)); return *this;}
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
