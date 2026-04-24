/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/WhatsAppMessageTemplateContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

WhatsAppMessageTemplateContent::WhatsAppMessageTemplateContent(JsonView jsonValue) { *this = jsonValue; }

WhatsAppMessageTemplateContent& WhatsAppMessageTemplateContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetString("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppMessageTemplateContent::Jsonize() const {
  JsonValue payload;

  if (m_dataHasBeenSet) {
    payload.WithString("data", m_data);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
