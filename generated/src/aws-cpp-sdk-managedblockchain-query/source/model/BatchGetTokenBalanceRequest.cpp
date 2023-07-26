/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/BatchGetTokenBalanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetTokenBalanceRequest::BatchGetTokenBalanceRequest() : 
    m_getTokenBalanceInputsHasBeenSet(false)
{
}

Aws::String BatchGetTokenBalanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_getTokenBalanceInputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> getTokenBalanceInputsJsonList(m_getTokenBalanceInputs.size());
   for(unsigned getTokenBalanceInputsIndex = 0; getTokenBalanceInputsIndex < getTokenBalanceInputsJsonList.GetLength(); ++getTokenBalanceInputsIndex)
   {
     getTokenBalanceInputsJsonList[getTokenBalanceInputsIndex].AsObject(m_getTokenBalanceInputs[getTokenBalanceInputsIndex].Jsonize());
   }
   payload.WithArray("getTokenBalanceInputs", std::move(getTokenBalanceInputsJsonList));

  }

  return payload.View().WriteReadable();
}




