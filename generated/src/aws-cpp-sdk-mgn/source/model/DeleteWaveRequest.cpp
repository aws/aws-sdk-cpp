/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DeleteWaveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWaveRequest::DeleteWaveRequest() : 
    m_waveIDHasBeenSet(false)
{
}

Aws::String DeleteWaveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_waveIDHasBeenSet)
  {
   payload.WithString("waveID", m_waveID);

  }

  return payload.View().WriteReadable();
}




