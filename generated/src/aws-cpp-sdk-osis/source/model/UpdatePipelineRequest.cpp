/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/UpdatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePipelineRequest::UpdatePipelineRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_minUnits(0),
    m_minUnitsHasBeenSet(false),
    m_maxUnits(0),
    m_maxUnitsHasBeenSet(false),
    m_pipelineConfigurationBodyHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false)
{
}

Aws::String UpdatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_minUnitsHasBeenSet)
  {
   payload.WithInteger("MinUnits", m_minUnits);

  }

  if(m_maxUnitsHasBeenSet)
  {
   payload.WithInteger("MaxUnits", m_maxUnits);

  }

  if(m_pipelineConfigurationBodyHasBeenSet)
  {
   payload.WithString("PipelineConfigurationBody", m_pipelineConfigurationBody);

  }

  if(m_logPublishingOptionsHasBeenSet)
  {
   payload.WithObject("LogPublishingOptions", m_logPublishingOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




