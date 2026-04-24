/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/RegistrantVerificationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

RegistrantVerificationResponse::RegistrantVerificationResponse(JsonView jsonValue) { *this = jsonValue; }

RegistrantVerificationResponse& RegistrantVerificationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CompletionUrl")) {
    m_completionUrl = jsonValue.GetString("CompletionUrl");
    m_completionUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CompletionUrlExpiresAt")) {
    m_completionUrlExpiresAt = jsonValue.GetString("CompletionUrlExpiresAt");
    m_completionUrlExpiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistrantVerificationResponse::Jsonize() const {
  JsonValue payload;

  if (m_completionUrlHasBeenSet) {
    payload.WithString("CompletionUrl", m_completionUrl);
  }

  if (m_completionUrlExpiresAtHasBeenSet) {
    payload.WithString("CompletionUrlExpiresAt", m_completionUrlExpiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
