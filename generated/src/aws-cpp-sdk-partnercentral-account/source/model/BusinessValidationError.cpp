/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/BusinessValidationError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

BusinessValidationError::BusinessValidationError(JsonView jsonValue) { *this = jsonValue; }

BusinessValidationError& BusinessValidationError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = BusinessValidationCodeMapper::GetBusinessValidationCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessValidationError::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", BusinessValidationCodeMapper::GetNameForBusinessValidationCode(m_code));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
