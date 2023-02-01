/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false),
    m_eventDestinationHasBeenSet(false)
{
}

Aws::String CreateConfigurationSetEventDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDestinationNameHasBeenSet)
  {
   payload.WithString("EventDestinationName", m_eventDestinationName);

  }

  if(m_eventDestinationHasBeenSet)
  {
   payload.WithObject("EventDestination", m_eventDestination.Jsonize());

  }

  return payload.View().WriteReadable();
}




