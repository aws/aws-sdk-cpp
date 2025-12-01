/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolConfiguration::ToolConfiguration(JsonView jsonValue) { *this = jsonValue; }

ToolConfiguration& ToolConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolName")) {
    m_toolName = jsonValue.GetString("toolName");
    m_toolNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolType")) {
    m_toolType = ToolTypeMapper::GetToolTypeForName(jsonValue.GetString("toolType"));
    m_toolTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toolId")) {
    m_toolId = jsonValue.GetString("toolId");
    m_toolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instruction")) {
    m_instruction = jsonValue.GetObject("instruction");
    m_instructionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("overrideInputValues")) {
    Aws::Utils::Array<JsonView> overrideInputValuesJsonList = jsonValue.GetArray("overrideInputValues");
    for (unsigned overrideInputValuesIndex = 0; overrideInputValuesIndex < overrideInputValuesJsonList.GetLength();
         ++overrideInputValuesIndex) {
      m_overrideInputValues.push_back(overrideInputValuesJsonList[overrideInputValuesIndex].AsObject());
    }
    m_overrideInputValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputFilters")) {
    Aws::Utils::Array<JsonView> outputFiltersJsonList = jsonValue.GetArray("outputFilters");
    for (unsigned outputFiltersIndex = 0; outputFiltersIndex < outputFiltersJsonList.GetLength(); ++outputFiltersIndex) {
      m_outputFilters.push_back(outputFiltersJsonList[outputFiltersIndex].AsObject());
    }
    m_outputFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputSchema")) {
    m_inputSchema = jsonValue.GetObject("inputSchema");
    m_inputSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputSchema")) {
    m_outputSchema = jsonValue.GetObject("outputSchema");
    m_outputSchemaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("annotations")) {
    m_annotations = jsonValue.GetObject("annotations");
    m_annotationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userInteractionConfiguration")) {
    m_userInteractionConfiguration = jsonValue.GetObject("userInteractionConfiguration");
    m_userInteractionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_toolNameHasBeenSet) {
    payload.WithString("toolName", m_toolName);
  }

  if (m_toolTypeHasBeenSet) {
    payload.WithString("toolType", ToolTypeMapper::GetNameForToolType(m_toolType));
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_toolIdHasBeenSet) {
    payload.WithString("toolId", m_toolId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_instructionHasBeenSet) {
    payload.WithObject("instruction", m_instruction.Jsonize());
  }

  if (m_overrideInputValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> overrideInputValuesJsonList(m_overrideInputValues.size());
    for (unsigned overrideInputValuesIndex = 0; overrideInputValuesIndex < overrideInputValuesJsonList.GetLength();
         ++overrideInputValuesIndex) {
      overrideInputValuesJsonList[overrideInputValuesIndex].AsObject(m_overrideInputValues[overrideInputValuesIndex].Jsonize());
    }
    payload.WithArray("overrideInputValues", std::move(overrideInputValuesJsonList));
  }

  if (m_outputFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputFiltersJsonList(m_outputFilters.size());
    for (unsigned outputFiltersIndex = 0; outputFiltersIndex < outputFiltersJsonList.GetLength(); ++outputFiltersIndex) {
      outputFiltersJsonList[outputFiltersIndex].AsObject(m_outputFilters[outputFiltersIndex].Jsonize());
    }
    payload.WithArray("outputFilters", std::move(outputFiltersJsonList));
  }

  if (m_inputSchemaHasBeenSet) {
    if (!m_inputSchema.View().IsNull()) {
      payload.WithObject("inputSchema", JsonValue(m_inputSchema.View()));
    }
  }

  if (m_outputSchemaHasBeenSet) {
    if (!m_outputSchema.View().IsNull()) {
      payload.WithObject("outputSchema", JsonValue(m_outputSchema.View()));
    }
  }

  if (m_annotationsHasBeenSet) {
    payload.WithObject("annotations", m_annotations.Jsonize());
  }

  if (m_userInteractionConfigurationHasBeenSet) {
    payload.WithObject("userInteractionConfiguration", m_userInteractionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
