/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/NodeLifecycleScript.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

NodeLifecycleScript::NodeLifecycleScript(JsonView jsonValue) { *this = jsonValue; }

NodeLifecycleScript& NodeLifecycleScript::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scriptSource")) {
    m_scriptSource = jsonValue.GetObject("scriptSource");
    m_scriptSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arguments")) {
    Aws::Utils::Array<JsonView> argumentsJsonList = jsonValue.GetArray("arguments");
    for (unsigned argumentsIndex = 0; argumentsIndex < argumentsJsonList.GetLength(); ++argumentsIndex) {
      m_arguments.push_back(argumentsJsonList[argumentsIndex].AsString());
    }
    m_argumentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onError")) {
    m_onError = OnErrorMapper::GetOnErrorForName(jsonValue.GetString("onError"));
    m_onErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionPolicy")) {
    m_executionPolicy = ExecutionPolicyMapper::GetExecutionPolicyForName(jsonValue.GetString("executionPolicy"));
    m_executionPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeLifecycleScript::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_scriptSourceHasBeenSet) {
    payload.WithObject("scriptSource", m_scriptSource.Jsonize());
  }

  if (m_argumentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> argumentsJsonList(m_arguments.size());
    for (unsigned argumentsIndex = 0; argumentsIndex < argumentsJsonList.GetLength(); ++argumentsIndex) {
      argumentsJsonList[argumentsIndex].AsString(m_arguments[argumentsIndex]);
    }
    payload.WithArray("arguments", std::move(argumentsJsonList));
  }

  if (m_onErrorHasBeenSet) {
    payload.WithString("onError", OnErrorMapper::GetNameForOnError(m_onError));
  }

  if (m_executionPolicyHasBeenSet) {
    payload.WithString("executionPolicy", ExecutionPolicyMapper::GetNameForExecutionPolicy(m_executionPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
