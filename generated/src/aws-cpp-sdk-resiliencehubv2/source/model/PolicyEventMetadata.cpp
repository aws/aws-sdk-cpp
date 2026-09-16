/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/PolicyEventMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

PolicyEventMetadata::PolicyEventMetadata(JsonView jsonValue) { *this = jsonValue; }

PolicyEventMetadata& PolicyEventMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyAttachedToService")) {
    m_policyAttachedToService = jsonValue.GetObject("policyAttachedToService");
    m_policyAttachedToServiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyDetachedFromService")) {
    m_policyDetachedFromService = jsonValue.GetObject("policyDetachedFromService");
    m_policyDetachedFromServiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policySharingRevoked")) {
    m_policySharingRevoked = jsonValue.GetObject("policySharingRevoked");
    m_policySharingRevokedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyDeleted")) {
    m_policyDeleted = jsonValue.GetObject("policyDeleted");
    m_policyDeletedHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyEventMetadata::Jsonize() const {
  JsonValue payload;

  if (m_policyAttachedToServiceHasBeenSet) {
    payload.WithObject("policyAttachedToService", m_policyAttachedToService.Jsonize());
  }

  if (m_policyDetachedFromServiceHasBeenSet) {
    payload.WithObject("policyDetachedFromService", m_policyDetachedFromService.Jsonize());
  }

  if (m_policySharingRevokedHasBeenSet) {
    payload.WithObject("policySharingRevoked", m_policySharingRevoked.Jsonize());
  }

  if (m_policyDeletedHasBeenSet) {
    payload.WithObject("policyDeleted", m_policyDeleted.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
