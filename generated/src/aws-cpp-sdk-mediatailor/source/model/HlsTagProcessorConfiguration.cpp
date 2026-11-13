/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/HlsTagProcessorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

HlsTagProcessorConfiguration::HlsTagProcessorConfiguration(JsonView jsonValue) { *this = jsonValue; }

HlsTagProcessorConfiguration& HlsTagProcessorConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("TagFilter")) {
    Aws::Utils::Array<JsonView> tagFilterJsonList = jsonValue.GetArray("TagFilter");
    for (unsigned tagFilterIndex = 0; tagFilterIndex < tagFilterJsonList.GetLength(); ++tagFilterIndex) {
      m_tagFilter.push_back(HlsTagNameMapper::GetHlsTagNameForName(tagFilterJsonList[tagFilterIndex].AsString()));
    }
    m_tagFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunCondition")) {
    m_runCondition = jsonValue.GetString("RunCondition");
    m_runConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue HlsTagProcessorConfiguration::Jsonize() const {
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

  if (m_tagFilterHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagFilterJsonList(m_tagFilter.size());
    for (unsigned tagFilterIndex = 0; tagFilterIndex < tagFilterJsonList.GetLength(); ++tagFilterIndex) {
      tagFilterJsonList[tagFilterIndex].AsString(HlsTagNameMapper::GetNameForHlsTagName(m_tagFilter[tagFilterIndex]));
    }
    payload.WithArray("TagFilter", std::move(tagFilterJsonList));
  }

  if (m_runConditionHasBeenSet) {
    payload.WithString("RunCondition", m_runCondition);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
