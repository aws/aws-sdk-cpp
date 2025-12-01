/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ValidityTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ValidityTerm::ValidityTerm(JsonView jsonValue) { *this = jsonValue; }

ValidityTerm& ValidityTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementDuration")) {
    m_agreementDuration = jsonValue.GetString("agreementDuration");
    m_agreementDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementStartDate")) {
    m_agreementStartDate = jsonValue.GetDouble("agreementStartDate");
    m_agreementStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementEndDate")) {
    m_agreementEndDate = jsonValue.GetDouble("agreementEndDate");
    m_agreementEndDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidityTerm::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_agreementDurationHasBeenSet) {
    payload.WithString("agreementDuration", m_agreementDuration);
  }

  if (m_agreementStartDateHasBeenSet) {
    payload.WithDouble("agreementStartDate", m_agreementStartDate.SecondsWithMSPrecision());
  }

  if (m_agreementEndDateHasBeenSet) {
    payload.WithDouble("agreementEndDate", m_agreementEndDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
