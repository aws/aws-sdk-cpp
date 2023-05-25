/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeResiliencyPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeResiliencyPolicyRequest::DescribeResiliencyPolicyRequest() : 
    m_policyArnHasBeenSet(false)
{
}

Aws::String DescribeResiliencyPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  return payload.View().WriteReadable();
}




