/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetServersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetServersRequest::GetServersRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_vmServerAddressListHasBeenSet(false)
{
}

Aws::String GetServersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_vmServerAddressListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vmServerAddressListJsonList(m_vmServerAddressList.size());
   for(unsigned vmServerAddressListIndex = 0; vmServerAddressListIndex < vmServerAddressListJsonList.GetLength(); ++vmServerAddressListIndex)
   {
     vmServerAddressListJsonList[vmServerAddressListIndex].AsObject(m_vmServerAddressList[vmServerAddressListIndex].Jsonize());
   }
   payload.WithArray("vmServerAddressList", std::move(vmServerAddressListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetServersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.GetServers"));
  return headers;

}




