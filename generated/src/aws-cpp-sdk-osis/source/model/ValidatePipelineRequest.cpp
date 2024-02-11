/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ValidatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OSIS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidatePipelineRequest::ValidatePipelineRequest() : 
    m_pipelineConfigurationBodyHasBeenSet(false)
{
}

Aws::String ValidatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineConfigurationBodyHasBeenSet)
  {
   payload.WithString("PipelineConfigurationBody", m_pipelineConfigurationBody);

  }

  return payload.View().WriteReadable();
}




