/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowWhatsAppBusinessAccountInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowWhatsAppBusinessAccountInfo::MetaFlowWhatsAppBusinessAccountInfo(JsonView jsonValue) { *this = jsonValue; }

MetaFlowWhatsAppBusinessAccountInfo& MetaFlowWhatsAppBusinessAccountInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = jsonValue.GetString("currency");
    m_currencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timezoneId")) {
    m_timezoneId = jsonValue.GetString("timezoneId");
    m_timezoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messageTemplateNamespace")) {
    m_messageTemplateNamespace = jsonValue.GetString("messageTemplateNamespace");
    m_messageTemplateNamespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowWhatsAppBusinessAccountInfo::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", m_currency);
  }

  if (m_timezoneIdHasBeenSet) {
    payload.WithString("timezoneId", m_timezoneId);
  }

  if (m_messageTemplateNamespaceHasBeenSet) {
    payload.WithString("messageTemplateNamespace", m_messageTemplateNamespace);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
