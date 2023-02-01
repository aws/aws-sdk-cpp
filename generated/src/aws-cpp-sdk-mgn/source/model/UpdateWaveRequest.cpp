/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateWaveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWaveRequest::UpdateWaveRequest() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_waveIDHasBeenSet(false)
{
}

Aws::String UpdateWaveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_waveIDHasBeenSet)
  {
   payload.WithString("waveID", m_waveID);

  }

  return payload.View().WriteReadable();
}




