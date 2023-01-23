/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/StreamJournalToKinesisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StreamJournalToKinesisRequest::StreamJournalToKinesisRequest() : 
    m_ledgerNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_inclusiveStartTimeHasBeenSet(false),
    m_exclusiveEndTimeHasBeenSet(false),
    m_kinesisConfigurationHasBeenSet(false),
    m_streamNameHasBeenSet(false)
{
}

Aws::String StreamJournalToKinesisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_inclusiveStartTimeHasBeenSet)
  {
   payload.WithDouble("InclusiveStartTime", m_inclusiveStartTime.SecondsWithMSPrecision());
  }

  if(m_exclusiveEndTimeHasBeenSet)
  {
   payload.WithDouble("ExclusiveEndTime", m_exclusiveEndTime.SecondsWithMSPrecision());
  }

  if(m_kinesisConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisConfiguration", m_kinesisConfiguration.Jsonize());

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("StreamName", m_streamName);

  }

  return payload.View().WriteReadable();
}




