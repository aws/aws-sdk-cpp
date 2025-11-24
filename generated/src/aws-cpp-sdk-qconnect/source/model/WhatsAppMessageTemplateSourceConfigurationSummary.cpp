/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/WhatsAppMessageTemplateSourceConfigurationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

WhatsAppMessageTemplateSourceConfigurationSummary::WhatsAppMessageTemplateSourceConfigurationSummary(JsonView jsonValue) {
  *this = jsonValue;
}

WhatsAppMessageTemplateSourceConfigurationSummary& WhatsAppMessageTemplateSourceConfigurationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("businessAccountId")) {
    m_businessAccountId = jsonValue.GetString("businessAccountId");
    m_businessAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateId")) {
    m_templateId = jsonValue.GetString("templateId");
    m_templateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("language")) {
    m_language = jsonValue.GetString("language");
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("components")) {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("components");
    for (unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex) {
      m_components.push_back(componentsJsonList[componentsIndex].AsString());
    }
    m_componentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = WhatsAppSourceConfigurationStatusMapper::GetWhatsAppSourceConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppMessageTemplateSourceConfigurationSummary::Jsonize() const {
  JsonValue payload;

  if (m_businessAccountIdHasBeenSet) {
    payload.WithString("businessAccountId", m_businessAccountId);
  }

  if (m_templateIdHasBeenSet) {
    payload.WithString("templateId", m_templateId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_languageHasBeenSet) {
    payload.WithString("language", m_language);
  }

  if (m_componentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
    for (unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex) {
      componentsJsonList[componentsIndex].AsString(m_components[componentsIndex]);
    }
    payload.WithArray("components", std::move(componentsJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", WhatsAppSourceConfigurationStatusMapper::GetNameForWhatsAppSourceConfigurationStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
