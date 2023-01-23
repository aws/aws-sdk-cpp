/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ListAppsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAppsRequest::ListAppsRequest() : 
    m_appIdsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAppsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appIdsJsonList(m_appIds.size());
   for(unsigned appIdsIndex = 0; appIdsIndex < appIdsJsonList.GetLength(); ++appIdsIndex)
   {
     appIdsJsonList[appIdsIndex].AsString(m_appIds[appIdsIndex]);
   }
   payload.WithArray("appIds", std::move(appIdsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAppsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSServerMigrationService_V2016_10_24.ListApps"));
  return headers;

}




