/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/FindingsOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

FindingsOutput::FindingsOutput(JsonView jsonValue) { *this = jsonValue; }

FindingsOutput& FindingsOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Format")) {
    m_format = FindingsExportFormatMapper::GetFindingsExportFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filters")) {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelectedFields")) {
    Aws::Utils::Array<JsonView> selectedFieldsJsonList = jsonValue.GetArray("SelectedFields");
    for (unsigned selectedFieldsIndex = 0; selectedFieldsIndex < selectedFieldsJsonList.GetLength(); ++selectedFieldsIndex) {
      m_selectedFields.push_back(
          FindingsSelectableFieldMapper::GetFindingsSelectableFieldForName(selectedFieldsJsonList[selectedFieldsIndex].AsString()));
    }
    m_selectedFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingsOutput::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("Format", FindingsExportFormatMapper::GetNameForFindingsExportFormat(m_format));
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("Filters", m_filters.Jsonize());
  }

  if (m_selectedFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> selectedFieldsJsonList(m_selectedFields.size());
    for (unsigned selectedFieldsIndex = 0; selectedFieldsIndex < selectedFieldsJsonList.GetLength(); ++selectedFieldsIndex) {
      selectedFieldsJsonList[selectedFieldsIndex].AsString(
          FindingsSelectableFieldMapper::GetNameForFindingsSelectableField(m_selectedFields[selectedFieldsIndex]));
    }
    payload.WithArray("SelectedFields", std::move(selectedFieldsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
