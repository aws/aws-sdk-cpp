/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/UpdateRunGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRunGroupRequest::UpdateRunGroupRequest() : 
    m_idHasBeenSet(false),
    m_maxCpus(0),
    m_maxCpusHasBeenSet(false),
    m_maxDuration(0),
    m_maxDurationHasBeenSet(false),
    m_maxRuns(0),
    m_maxRunsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateRunGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxCpusHasBeenSet)
  {
   payload.WithInteger("maxCpus", m_maxCpus);

  }

  if(m_maxDurationHasBeenSet)
  {
   payload.WithInteger("maxDuration", m_maxDuration);

  }

  if(m_maxRunsHasBeenSet)
  {
   payload.WithInteger("maxRuns", m_maxRuns);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload.View().WriteReadable();
}




