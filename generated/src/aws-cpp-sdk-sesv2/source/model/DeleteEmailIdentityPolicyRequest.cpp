/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DeleteEmailIdentityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEmailIdentityPolicyRequest::DeleteEmailIdentityPolicyRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

Aws::String DeleteEmailIdentityPolicyRequest::SerializePayload() const
{
  return {};
}




