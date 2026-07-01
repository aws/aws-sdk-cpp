/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/Condition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

Condition::Condition(JsonView jsonValue) { *this = jsonValue; }

Condition& Condition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowAfter")) {
    m_allowAfter = jsonValue.GetDouble("allowAfter");
    m_allowAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowBefore")) {
    m_allowBefore = jsonValue.GetDouble("allowBefore");
    m_allowBeforeHasBeenSet = true;
  }
  return *this;
}

JsonValue Condition::Jsonize() const {
  JsonValue payload;

  if (m_allowAfterHasBeenSet) {
    payload.WithDouble("allowAfter", m_allowAfter.SecondsWithMSPrecision());
  }

  if (m_allowBeforeHasBeenSet) {
    payload.WithDouble("allowBefore", m_allowBefore.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
