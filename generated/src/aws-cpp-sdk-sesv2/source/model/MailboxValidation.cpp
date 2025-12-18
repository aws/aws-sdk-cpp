/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/MailboxValidation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

MailboxValidation::MailboxValidation(JsonView jsonValue) { *this = jsonValue; }

MailboxValidation& MailboxValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IsValid")) {
    m_isValid = jsonValue.GetObject("IsValid");
    m_isValidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Evaluations")) {
    m_evaluations = jsonValue.GetObject("Evaluations");
    m_evaluationsHasBeenSet = true;
  }
  return *this;
}

JsonValue MailboxValidation::Jsonize() const {
  JsonValue payload;

  if (m_isValidHasBeenSet) {
    payload.WithObject("IsValid", m_isValid.Jsonize());
  }

  if (m_evaluationsHasBeenSet) {
    payload.WithObject("Evaluations", m_evaluations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
