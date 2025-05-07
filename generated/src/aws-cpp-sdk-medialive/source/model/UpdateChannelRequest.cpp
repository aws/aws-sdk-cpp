/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cdiInputSpecificationHasBeenSet)
  {
   payload.WithObject("cdiInputSpecification", m_cdiInputSpecification.Jsonize());

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_encoderSettingsHasBeenSet)
  {
   payload.WithObject("encoderSettings", m_encoderSettings.Jsonize());

  }

  if(m_inputAttachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputAttachmentsJsonList(m_inputAttachments.size());
   for(unsigned inputAttachmentsIndex = 0; inputAttachmentsIndex < inputAttachmentsJsonList.GetLength(); ++inputAttachmentsIndex)
   {
     inputAttachmentsJsonList[inputAttachmentsIndex].AsObject(m_inputAttachments[inputAttachmentsIndex].Jsonize());
   }
   payload.WithArray("inputAttachments", std::move(inputAttachmentsJsonList));

  }

  if(m_inputSpecificationHasBeenSet)
  {
   payload.WithObject("inputSpecification", m_inputSpecification.Jsonize());

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if(m_maintenanceHasBeenSet)
  {
   payload.WithObject("maintenance", m_maintenance.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_channelEngineVersionHasBeenSet)
  {
   payload.WithObject("channelEngineVersion", m_channelEngineVersion.Jsonize());

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("dryRun", m_dryRun);

  }

  if(m_anywhereSettingsHasBeenSet)
  {
   payload.WithObject("anywhereSettings", m_anywhereSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




