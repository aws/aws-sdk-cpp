/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/FieldValidationError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

FieldValidationError::FieldValidationError(JsonView jsonValue) { *this = jsonValue; }

FieldValidationError& FieldValidationError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = FieldValidationCodeMapper::GetFieldValidationCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldValidationError::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", FieldValidationCodeMapper::GetNameForFieldValidationCode(m_code));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
