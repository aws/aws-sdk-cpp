/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeStateMachineAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStateMachineAliasRequest::DescribeStateMachineAliasRequest() : 
    m_stateMachineAliasArnHasBeenSet(false)
{
}

Aws::String DescribeStateMachineAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stateMachineAliasArnHasBeenSet)
  {
   payload.WithString("stateMachineAliasArn", m_stateMachineAliasArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeStateMachineAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.DescribeStateMachineAlias"));
  return headers;

}




