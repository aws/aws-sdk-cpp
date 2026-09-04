/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/VastRequestConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

VastRequestConfiguration::VastRequestConfiguration(JsonView jsonValue) { *this = jsonValue; }

VastRequestConfiguration& VastRequestConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("MethodType")) {
    m_methodType = MethodTypeMapper::GetMethodTypeForName(jsonValue.GetString("MethodType"));
    m_methodTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequestTimeoutMilliseconds")) {
    m_requestTimeoutMilliseconds = jsonValue.GetInteger("RequestTimeoutMilliseconds");
    m_requestTimeoutMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Body")) {
    m_body = jsonValue.GetString("Body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Headers")) {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("Headers").GetAllObjects();
    for (auto& headersItem : headersJsonMap) {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
  }
  return *this;
}

JsonValue VastRequestConfiguration::Jsonize() const {
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

  if (m_methodTypeHasBeenSet) {
    payload.WithString("MethodType", MethodTypeMapper::GetNameForMethodType(m_methodType));
  }

  if (m_requestTimeoutMillisecondsHasBeenSet) {
    payload.WithInteger("RequestTimeoutMilliseconds", m_requestTimeoutMilliseconds);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  if (m_bodyHasBeenSet) {
    payload.WithString("Body", m_body);
  }

  if (m_headersHasBeenSet) {
    JsonValue headersJsonMap;
    for (auto& headersItem : m_headers) {
      headersJsonMap.WithString(headersItem.first, headersItem.second);
    }
    payload.WithObject("Headers", std::move(headersJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
