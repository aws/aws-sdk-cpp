/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateReservationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateReservationRequest::UpdateReservationRequest() : 
    m_nameHasBeenSet(false),
    m_renewalSettingsHasBeenSet(false),
    m_reservationIdHasBeenSet(false)
{
}

Aws::String UpdateReservationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_renewalSettingsHasBeenSet)
  {
   payload.WithObject("renewalSettings", m_renewalSettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




