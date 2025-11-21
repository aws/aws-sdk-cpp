/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/WhatsAppMessageTemplateSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

WhatsAppMessageTemplateSourceConfiguration::WhatsAppMessageTemplateSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

WhatsAppMessageTemplateSourceConfiguration& WhatsAppMessageTemplateSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("businessAccountId")) {
    m_businessAccountId = jsonValue.GetString("businessAccountId");
    m_businessAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateId")) {
    m_templateId = jsonValue.GetString("templateId");
    m_templateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("components")) {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("components");
    for (unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex) {
      m_components.push_back(componentsJsonList[componentsIndex].AsString());
    }
    m_componentsHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppMessageTemplateSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_businessAccountIdHasBeenSet) {
    payload.WithString("businessAccountId", m_businessAccountId);
  }

  if (m_templateIdHasBeenSet) {
    payload.WithString("templateId", m_templateId);
  }

  if (m_componentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
    for (unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex) {
      componentsJsonList[componentsIndex].AsString(m_components[componentsIndex]);
    }
    payload.WithArray("components", std::move(componentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
