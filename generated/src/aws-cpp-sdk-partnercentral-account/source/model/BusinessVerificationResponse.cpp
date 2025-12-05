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
  return *this;
}

JsonValue BusinessVerificationResponse::Jsonize() const {
  JsonValue payload;

  if (m_businessVerificationDetailsHasBeenSet) {
    payload.WithObject("BusinessVerificationDetails", m_businessVerificationDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
