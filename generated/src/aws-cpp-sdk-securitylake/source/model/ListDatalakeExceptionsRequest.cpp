/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/ListDatalakeExceptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDatalakeExceptionsRequest::ListDatalakeExceptionsRequest() : 
    m_maxFailures(0),
    m_maxFailuresHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_regionSetHasBeenSet(false)
{
}

Aws::String ListDatalakeExceptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxFailuresHasBeenSet)
  {
   payload.WithInteger("maxFailures", m_maxFailures);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_regionSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionSetJsonList(m_regionSet.size());
   for(unsigned regionSetIndex = 0; regionSetIndex < regionSetJsonList.GetLength(); ++regionSetIndex)
   {
     regionSetJsonList[regionSetIndex].AsString(RegionMapper::GetNameForRegion(m_regionSet[regionSetIndex]));
   }
   payload.WithArray("regionSet", std::move(regionSetJsonList));

  }

  return payload.View().WriteReadable();
}




