/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/ConcurrentExecutorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

ConcurrentExecutorConfiguration::ConcurrentExecutorConfiguration(JsonView jsonValue) { *this = jsonValue; }

ConcurrentExecutorConfiguration& ConcurrentExecutorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Runtime")) {
    m_runtime = RuntimeTypeMapper::GetRuntimeTypeForName(jsonValue.GetString("Runtime"));
    m_runtimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Output")) {
    Aws::Map<Aws::String, JsonView> outputJsonMap = jsonValue.GetObject("Output").GetAllObjects();
    for (auto& outputItem : outputJsonMap) {
      m_output[outputItem.first] = outputItem.second.AsString();
    }
    m_outputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionList")) {
    Aws::Utils::Array<JsonView> functionListJsonList = jsonValue.GetArray("FunctionList");
    for (unsigned functionListIndex = 0; functionListIndex < functionListJsonList.GetLength(); ++functionListIndex) {
      m_functionList.push_back(functionListJsonList[functionListIndex].AsObject());
    }
    m_functionListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TimeoutMilliseconds")) {
    m_timeoutMilliseconds = jsonValue.GetInteger("TimeoutMilliseconds");
    m_timeoutMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxConcurrency")) {
    m_maxConcurrency = jsonValue.GetInteger("MaxConcurrency");
    m_maxConcurrencyHasBeenSet = true;
  }
  return *this;
}

JsonValue ConcurrentExecutorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_runtimeHasBeenSet) {
    payload.WithString("Runtime", RuntimeTypeMapper::GetNameForRuntimeType(m_runtime));
  }

  if (m_outputHasBeenSet) {
    JsonValue outputJsonMap;
    for (auto& outputItem : m_output) {
      outputJsonMap.WithString(outputItem.first, outputItem.second);
    }
    payload.WithObject("Output", std::move(outputJsonMap));
  }

  if (m_functionListHasBeenSet) {
    Aws::Utils::Array<JsonValue> functionListJsonList(m_functionList.size());
    for (unsigned functionListIndex = 0; functionListIndex < functionListJsonList.GetLength(); ++functionListIndex) {
      functionListJsonList[functionListIndex].AsObject(m_functionList[functionListIndex].Jsonize());
    }
    payload.WithArray("FunctionList", std::move(functionListJsonList));
  }

  if (m_timeoutMillisecondsHasBeenSet) {
    payload.WithInteger("TimeoutMilliseconds", m_timeoutMilliseconds);
  }

  if (m_maxConcurrencyHasBeenSet) {
    payload.WithInteger("MaxConcurrency", m_maxConcurrency);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
