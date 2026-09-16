/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ServicePolicyDisassociatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ServicePolicyDisassociatedMetadata::ServicePolicyDisassociatedMetadata(JsonView jsonValue) { *this = jsonValue; }

ServicePolicyDisassociatedMetadata& ServicePolicyDisassociatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyName")) {
    m_policyName = jsonValue.GetString("policyName");
    m_policyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyOwnerAccountId")) {
    m_policyOwnerAccountId = jsonValue.GetString("policyOwnerAccountId");
    m_policyOwnerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policySource")) {
    m_policySource = PolicyValueSourceMapper::GetPolicyValueSourceForName(jsonValue.GetString("policySource"));
    m_policySourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = PolicyDisassociationReasonMapper::GetPolicyDisassociationReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ServicePolicyDisassociatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_policyNameHasBeenSet) {
    payload.WithString("policyName", m_policyName);
  }

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  if (m_policyOwnerAccountIdHasBeenSet) {
    payload.WithString("policyOwnerAccountId", m_policyOwnerAccountId);
  }

  if (m_policySourceHasBeenSet) {
    payload.WithString("policySource", PolicyValueSourceMapper::GetNameForPolicyValueSource(m_policySource));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", PolicyDisassociationReasonMapper::GetNameForPolicyDisassociationReason(m_reason));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
