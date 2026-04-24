/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/MessageTemplateSourceConfigurationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

MessageTemplateSourceConfigurationSummary::MessageTemplateSourceConfigurationSummary(JsonView jsonValue) { *this = jsonValue; }

MessageTemplateSourceConfigurationSummary& MessageTemplateSourceConfigurationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("whatsApp")) {
    m_whatsApp = jsonValue.GetObject("whatsApp");
    m_whatsAppHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageTemplateSourceConfigurationSummary::Jsonize() const {
  JsonValue payload;

  if (m_whatsAppHasBeenSet) {
    payload.WithObject("whatsApp", m_whatsApp.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
