/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/PutApplicationPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutApplicationPolicyRequest::PutApplicationPolicyRequest() : 
    m_applicationIdHasBeenSet(false),
    m_statementsHasBeenSet(false)
{
}

Aws::String PutApplicationPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statementsJsonList(m_statements.size());
   for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
   {
     statementsJsonList[statementsIndex].AsObject(m_statements[statementsIndex].Jsonize());
   }
   payload.WithArray("statements", std::move(statementsJsonList));

  }

  return payload.View().WriteReadable();
}




