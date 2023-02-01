/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ArchiveWaveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ArchiveWaveRequest::ArchiveWaveRequest() : 
    m_waveIDHasBeenSet(false)
{
}

Aws::String ArchiveWaveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_waveIDHasBeenSet)
  {
   payload.WithString("waveID", m_waveID);

  }

  return payload.View().WriteReadable();
}




