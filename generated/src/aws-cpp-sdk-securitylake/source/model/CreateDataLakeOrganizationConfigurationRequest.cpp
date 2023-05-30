/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/CreateDataLakeOrganizationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataLakeOrganizationConfigurationRequest::CreateDataLakeOrganizationConfigurationRequest() : 
    m_autoEnableNewAccountHasBeenSet(false)
{
}

Aws::String CreateDataLakeOrganizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoEnableNewAccountHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoEnableNewAccountJsonList(m_autoEnableNewAccount.size());
   for(unsigned autoEnableNewAccountIndex = 0; autoEnableNewAccountIndex < autoEnableNewAccountJsonList.GetLength(); ++autoEnableNewAccountIndex)
   {
     autoEnableNewAccountJsonList[autoEnableNewAccountIndex].AsObject(m_autoEnableNewAccount[autoEnableNewAccountIndex].Jsonize());
   }
   payload.WithArray("autoEnableNewAccount", std::move(autoEnableNewAccountJsonList));

  }

  return payload.View().WriteReadable();
}




