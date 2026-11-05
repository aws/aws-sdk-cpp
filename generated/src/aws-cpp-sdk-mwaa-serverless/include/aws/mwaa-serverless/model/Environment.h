/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Contains the environment variables that tasks in a workflow use during
 * execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/Environment">AWS
 * API Reference</a></p>
 */
class Environment {
 public:
  AWS_MWAASERVERLESS_API Environment() = default;
  AWS_MWAASERVERLESS_API Environment(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of environment variable names to values. Your workflow tasks use these
   * variables while they run. You can specify up to 50 environment variables. Each
   * name must be between 1 and 128 characters, start with a letter, and contain only
   * letters, numbers, and underscores. Each value can be up to 255 characters.</p>
   * <p>Names that start with <code>AWS_</code> or <code>AIRFLOW__</code> are
   * reserved. You can use the following Apache Airflow secrets backend settings,
   * which are exceptions:</p> <ul> <li> <p>
   * <code>AIRFLOW__WORKERS__SECRETS_BACKEND</code> – The secrets backend class that
   * workers use.</p> </li> <li> <p>
   * <code>AIRFLOW__WORKERS__SECRETS_BACKEND_KWARGS</code> – The keyword arguments
   * for the secrets backend, as a JSON string.</p> </li> <li> <p>
   * <code>AIRFLOW__WORKERS__SECRETS_BACKEND_KWARG__*</code> – Names with this
   * prefix, for additional secrets backend configuration.</p> </li> </ul> <p>If you
   * set <code>EncryptionConfiguration</code> to use a customer managed AWS KMS key,
   * we encrypt the environment variables with that key. Otherwise, we store them
   * with default encryption at rest.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const { return m_variables; }
  inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
  template <typename VariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetVariables(VariablesT&& value) {
    m_variablesHasBeenSet = true;
    m_variables = std::forward<VariablesT>(value);
  }
  template <typename VariablesT = Aws::Map<Aws::String, Aws::String>>
  Environment& WithVariables(VariablesT&& value) {
    SetVariables(std::forward<VariablesT>(value));
    return *this;
  }
  template <typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
  Environment& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
    m_variablesHasBeenSet = true;
    m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_variables;
  bool m_variablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
