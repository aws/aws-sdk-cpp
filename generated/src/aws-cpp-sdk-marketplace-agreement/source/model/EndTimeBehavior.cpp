/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/EndTimeBehavior.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

EndTimeBehavior::EndTimeBehavior(JsonView jsonValue) { *this = jsonValue; }

EndTimeBehavior& EndTimeBehavior::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = EndTimeBehaviorTypeMapper::GetEndTimeBehaviorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reasonCode")) {
    m_reasonCode = EndTimeBehaviorReasonCodeMapper::GetEndTimeBehaviorReasonCodeForName(jsonValue.GetString("reasonCode"));
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("renewalSummary")) {
    m_renewalSummary = jsonValue.GetObject("renewalSummary");
    m_renewalSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue EndTimeBehavior::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", EndTimeBehaviorTypeMapper::GetNameForEndTimeBehaviorType(m_type));
  }

  if (m_reasonCodeHasBeenSet) {
    payload.WithString("reasonCode", EndTimeBehaviorReasonCodeMapper::GetNameForEndTimeBehaviorReasonCode(m_reasonCode));
  }

  if (m_renewalSummaryHasBeenSet) {
    payload.WithObject("renewalSummary", m_renewalSummary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
