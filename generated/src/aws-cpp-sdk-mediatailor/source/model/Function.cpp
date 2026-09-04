/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/Function.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

Function::Function(JsonView jsonValue) { *this = jsonValue; }

Function& Function::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FunctionId")) {
    m_functionId = jsonValue.GetString("FunctionId");
    m_functionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionType")) {
    m_functionType = FunctionTypeMapper::GetFunctionTypeForName(jsonValue.GetString("FunctionType"));
    m_functionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HttpRequestConfiguration")) {
    m_httpRequestConfiguration = jsonValue.GetObject("HttpRequestConfiguration");
    m_httpRequestConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomOutputConfiguration")) {
    m_customOutputConfiguration = jsonValue.GetObject("CustomOutputConfiguration");
    m_customOutputConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConcurrentExecutorConfiguration")) {
    m_concurrentExecutorConfiguration = jsonValue.GetObject("ConcurrentExecutorConfiguration");
    m_concurrentExecutorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SequentialExecutorConfiguration")) {
    m_sequentialExecutorConfiguration = jsonValue.GetObject("SequentialExecutorConfiguration");
    m_sequentialExecutorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VastRequestConfiguration")) {
    m_vastRequestConfiguration = jsonValue.GetObject("VastRequestConfiguration");
    m_vastRequestConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue Function::Jsonize() const {
  JsonValue payload;

  if (m_functionIdHasBeenSet) {
    payload.WithString("FunctionId", m_functionId);
  }

  if (m_functionTypeHasBeenSet) {
    payload.WithString("FunctionType", FunctionTypeMapper::GetNameForFunctionType(m_functionType));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_httpRequestConfigurationHasBeenSet) {
    payload.WithObject("HttpRequestConfiguration", m_httpRequestConfiguration.Jsonize());
  }

  if (m_customOutputConfigurationHasBeenSet) {
    payload.WithObject("CustomOutputConfiguration", m_customOutputConfiguration.Jsonize());
  }

  if (m_concurrentExecutorConfigurationHasBeenSet) {
    payload.WithObject("ConcurrentExecutorConfiguration", m_concurrentExecutorConfiguration.Jsonize());
  }

  if (m_sequentialExecutorConfigurationHasBeenSet) {
    payload.WithObject("SequentialExecutorConfiguration", m_sequentialExecutorConfiguration.Jsonize());
  }

  if (m_vastRequestConfigurationHasBeenSet) {
    payload.WithObject("VastRequestConfiguration", m_vastRequestConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
