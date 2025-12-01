/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/ValidationError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

ValidationError::ValidationError(JsonView jsonValue) { *this = jsonValue; }

ValidationError& ValidationError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldValidationError")) {
    m_fieldValidationError = jsonValue.GetObject("FieldValidationError");
    m_fieldValidationErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BusinessValidationError")) {
    m_businessValidationError = jsonValue.GetObject("BusinessValidationError");
    m_businessValidationErrorHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationError::Jsonize() const {
  JsonValue payload;

  if (m_fieldValidationErrorHasBeenSet) {
    payload.WithObject("FieldValidationError", m_fieldValidationError.Jsonize());
  }

  if (m_businessValidationErrorHasBeenSet) {
    payload.WithObject("BusinessValidationError", m_businessValidationError.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
