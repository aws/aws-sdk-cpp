/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateFindingsV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_metadataUidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataUidsJsonList(m_metadataUids.size());
   for(unsigned metadataUidsIndex = 0; metadataUidsIndex < metadataUidsJsonList.GetLength(); ++metadataUidsIndex)
   {
     metadataUidsJsonList[metadataUidsIndex].AsString(m_metadataUids[metadataUidsIndex]);
   }
   payload.WithArray("MetadataUids", std::move(metadataUidsJsonList));

  }

  if(m_findingIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> findingIdentifiersJsonList(m_findingIdentifiers.size());
   for(unsigned findingIdentifiersIndex = 0; findingIdentifiersIndex < findingIdentifiersJsonList.GetLength(); ++findingIdentifiersIndex)
   {
     findingIdentifiersJsonList[findingIdentifiersIndex].AsObject(m_findingIdentifiers[findingIdentifiersIndex].Jsonize());
   }
   payload.WithArray("FindingIdentifiers", std::move(findingIdentifiersJsonList));

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_severityIdHasBeenSet)
  {
   payload.WithInteger("SeverityId", m_severityId);

  }

  if(m_statusIdHasBeenSet)
  {
   payload.WithInteger("StatusId", m_statusId);

  }

  return payload.View().WriteReadable();
}




