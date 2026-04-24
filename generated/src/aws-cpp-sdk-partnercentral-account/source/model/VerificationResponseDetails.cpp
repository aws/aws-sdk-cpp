/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/VerificationResponseDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

VerificationResponseDetails::VerificationResponseDetails(JsonView jsonValue) { *this = jsonValue; }

VerificationResponseDetails& VerificationResponseDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BusinessVerificationResponse")) {
    m_businessVerificationResponse = jsonValue.GetObject("BusinessVerificationResponse");
    m_businessVerificationResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegistrantVerificationResponse")) {
    m_registrantVerificationResponse = jsonValue.GetObject("RegistrantVerificationResponse");
    m_registrantVerificationResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue VerificationResponseDetails::Jsonize() const {
  JsonValue payload;

  if (m_businessVerificationResponseHasBeenSet) {
    payload.WithObject("BusinessVerificationResponse", m_businessVerificationResponse.Jsonize());
  }

  if (m_registrantVerificationResponseHasBeenSet) {
    payload.WithObject("RegistrantVerificationResponse", m_registrantVerificationResponse.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
