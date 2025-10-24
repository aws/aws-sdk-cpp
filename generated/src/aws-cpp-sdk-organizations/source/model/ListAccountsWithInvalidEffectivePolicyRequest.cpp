﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/organizations/model/ListAccountsWithInvalidEffectivePolicyRequest.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListAccountsWithInvalidEffectivePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyTypeHasBeenSet) {
    payload.WithString("PolicyType", EffectivePolicyTypeMapper::GetNameForEffectivePolicyType(m_policyType));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAccountsWithInvalidEffectivePolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.ListAccountsWithInvalidEffectivePolicy"));
  return headers;
}
