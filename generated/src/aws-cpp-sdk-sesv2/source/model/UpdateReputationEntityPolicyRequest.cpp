/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/UpdateReputationEntityPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateReputationEntityPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reputationEntityPolicyHasBeenSet)
  {
   payload.WithString("ReputationEntityPolicy", m_reputationEntityPolicy);

  }

  return payload.View().WriteReadable();
}




