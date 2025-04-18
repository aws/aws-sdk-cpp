﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/DescribeAttackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeAttackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attackIdHasBeenSet)
  {
   payload.WithString("AttackId", m_attackId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAttackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.DescribeAttack"));
  return headers;

}




