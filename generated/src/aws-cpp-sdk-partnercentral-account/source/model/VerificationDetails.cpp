/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/VerificationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

VerificationDetails::VerificationDetails(JsonView jsonValue) { *this = jsonValue; }

VerificationDetails& VerificationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BusinessVerificationDetails")) {
    m_businessVerificationDetails = jsonValue.GetObject("BusinessVerificationDetails");
    m_businessVerificationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegistrantVerificationDetails")) {
    m_registrantVerificationDetails = jsonValue.GetObject("RegistrantVerificationDetails");
    m_registrantVerificationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue VerificationDetails::Jsonize() const {
  JsonValue payload;

  if (m_businessVerificationDetailsHasBeenSet) {
    payload.WithObject("BusinessVerificationDetails", m_businessVerificationDetails.Jsonize());
  }

  if (m_registrantVerificationDetailsHasBeenSet) {
    payload.WithObject("RegistrantVerificationDetails", m_registrantVerificationDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
