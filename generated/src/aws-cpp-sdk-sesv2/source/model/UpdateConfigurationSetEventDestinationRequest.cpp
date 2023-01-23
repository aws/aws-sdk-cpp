/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/UpdateConfigurationSetEventDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false),
    m_eventDestinationHasBeenSet(false)
{
}

Aws::String UpdateConfigurationSetEventDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventDestinationHasBeenSet)
  {
   payload.WithObject("EventDestination", m_eventDestination.Jsonize());

  }

  return payload.View().WriteReadable();
}




