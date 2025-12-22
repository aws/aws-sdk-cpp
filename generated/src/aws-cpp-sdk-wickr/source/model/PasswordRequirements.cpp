/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/PasswordRequirements.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

PasswordRequirements::PasswordRequirements(JsonView jsonValue) { *this = jsonValue; }

PasswordRequirements& PasswordRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lowercase")) {
    m_lowercase = jsonValue.GetInteger("lowercase");
    m_lowercaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minLength")) {
    m_minLength = jsonValue.GetInteger("minLength");
    m_minLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numbers")) {
    m_numbers = jsonValue.GetInteger("numbers");
    m_numbersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("symbols")) {
    m_symbols = jsonValue.GetInteger("symbols");
    m_symbolsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uppercase")) {
    m_uppercase = jsonValue.GetInteger("uppercase");
    m_uppercaseHasBeenSet = true;
  }
  return *this;
}

JsonValue PasswordRequirements::Jsonize() const {
  JsonValue payload;

  if (m_lowercaseHasBeenSet) {
    payload.WithInteger("lowercase", m_lowercase);
  }

  if (m_minLengthHasBeenSet) {
    payload.WithInteger("minLength", m_minLength);
  }

  if (m_numbersHasBeenSet) {
    payload.WithInteger("numbers", m_numbers);
  }

  if (m_symbolsHasBeenSet) {
    payload.WithInteger("symbols", m_symbols);
  }

  if (m_uppercaseHasBeenSet) {
    payload.WithInteger("uppercase", m_uppercase);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
