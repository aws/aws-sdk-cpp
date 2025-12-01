/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/AIGuardrailAssessment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

AIGuardrailAssessment::AIGuardrailAssessment(JsonView jsonValue) { *this = jsonValue; }

AIGuardrailAssessment& AIGuardrailAssessment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("blocked")) {
    m_blocked = jsonValue.GetBool("blocked");
    m_blockedHasBeenSet = true;
  }
  return *this;
}

JsonValue AIGuardrailAssessment::Jsonize() const {
  JsonValue payload;

  if (m_blockedHasBeenSet) {
    payload.WithBool("blocked", m_blocked);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
