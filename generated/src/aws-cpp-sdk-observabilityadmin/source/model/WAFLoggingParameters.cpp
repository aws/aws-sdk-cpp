/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/WAFLoggingParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

WAFLoggingParameters::WAFLoggingParameters(JsonView jsonValue) { *this = jsonValue; }

WAFLoggingParameters& WAFLoggingParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RedactedFields")) {
    Aws::Utils::Array<JsonView> redactedFieldsJsonList = jsonValue.GetArray("RedactedFields");
    for (unsigned redactedFieldsIndex = 0; redactedFieldsIndex < redactedFieldsJsonList.GetLength(); ++redactedFieldsIndex) {
      m_redactedFields.push_back(redactedFieldsJsonList[redactedFieldsIndex].AsObject());
    }
    m_redactedFieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LoggingFilter")) {
    m_loggingFilter = jsonValue.GetObject("LoggingFilter");
    m_loggingFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogType")) {
    m_logType = WAFLogTypeMapper::GetWAFLogTypeForName(jsonValue.GetString("LogType"));
    m_logTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue WAFLoggingParameters::Jsonize() const {
  JsonValue payload;

  if (m_redactedFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> redactedFieldsJsonList(m_redactedFields.size());
    for (unsigned redactedFieldsIndex = 0; redactedFieldsIndex < redactedFieldsJsonList.GetLength(); ++redactedFieldsIndex) {
      redactedFieldsJsonList[redactedFieldsIndex].AsObject(m_redactedFields[redactedFieldsIndex].Jsonize());
    }
    payload.WithArray("RedactedFields", std::move(redactedFieldsJsonList));
  }

  if (m_loggingFilterHasBeenSet) {
    payload.WithObject("LoggingFilter", m_loggingFilter.Jsonize());
  }

  if (m_logTypeHasBeenSet) {
    payload.WithString("LogType", WAFLogTypeMapper::GetNameForWAFLogType(m_logType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
