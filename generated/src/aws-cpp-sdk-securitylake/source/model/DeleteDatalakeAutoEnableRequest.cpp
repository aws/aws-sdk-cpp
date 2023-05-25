/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DeleteDatalakeAutoEnableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDatalakeAutoEnableRequest::DeleteDatalakeAutoEnableRequest() : 
    m_removeFromConfigurationForNewAccountsHasBeenSet(false)
{
}

Aws::String DeleteDatalakeAutoEnableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_removeFromConfigurationForNewAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeFromConfigurationForNewAccountsJsonList(m_removeFromConfigurationForNewAccounts.size());
   for(unsigned removeFromConfigurationForNewAccountsIndex = 0; removeFromConfigurationForNewAccountsIndex < removeFromConfigurationForNewAccountsJsonList.GetLength(); ++removeFromConfigurationForNewAccountsIndex)
   {
     removeFromConfigurationForNewAccountsJsonList[removeFromConfigurationForNewAccountsIndex].AsObject(m_removeFromConfigurationForNewAccounts[removeFromConfigurationForNewAccountsIndex].Jsonize());
   }
   payload.WithArray("removeFromConfigurationForNewAccounts", std::move(removeFromConfigurationForNewAccountsJsonList));

  }

  return payload.View().WriteReadable();
}




