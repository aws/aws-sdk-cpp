/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/BusinessVerificationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

BusinessVerificationResponse::BusinessVerificationResponse(JsonView jsonValue) { *this = jsonValue; }

BusinessVerificationResponse& BusinessVerificationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BusinessVerificationDetails")) {
    m_businessVerificationDetails = jsonValue.GetObject("BusinessVerificationDetails");
    m_businessVerificationDetailsHasBeenSet = true;
  }
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

JsonValue BusinessVerificationResponse::Jsonize() const {
  JsonValue payload;

  if (m_businessVerificationDetailsHasBeenSet) {
    payload.WithObject("BusinessVerificationDetails", m_businessVerificationDetails.Jsonize());
  }

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
