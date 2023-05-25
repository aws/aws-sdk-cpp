/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateDatalakeAutoEnableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatalakeAutoEnableRequest::CreateDatalakeAutoEnableRequest() : 
    m_configurationForNewAccountsHasBeenSet(false)
{
}

Aws::String CreateDatalakeAutoEnableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationForNewAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationForNewAccountsJsonList(m_configurationForNewAccounts.size());
   for(unsigned configurationForNewAccountsIndex = 0; configurationForNewAccountsIndex < configurationForNewAccountsJsonList.GetLength(); ++configurationForNewAccountsIndex)
   {
     configurationForNewAccountsJsonList[configurationForNewAccountsIndex].AsObject(m_configurationForNewAccounts[configurationForNewAccountsIndex].Jsonize());
   }
   payload.WithArray("configurationForNewAccounts", std::move(configurationForNewAccountsJsonList));

  }

  return payload.View().WriteReadable();
}




