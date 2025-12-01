/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/ErrorDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

ErrorDetail::ErrorDetail(JsonView jsonValue) { *this = jsonValue; }

ErrorDetail& ErrorDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Locale")) {
    m_locale = jsonValue.GetString("Locale");
    m_localeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = ProfileValidationErrorReasonMapper::GetProfileValidationErrorReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorDetail::Jsonize() const {
  JsonValue payload;

  if (m_localeHasBeenSet) {
    payload.WithString("Locale", m_locale);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", ProfileValidationErrorReasonMapper::GetNameForProfileValidationErrorReason(m_reason));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
