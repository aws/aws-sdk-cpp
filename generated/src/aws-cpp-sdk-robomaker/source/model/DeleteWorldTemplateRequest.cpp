/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeleteWorldTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWorldTemplateRequest::DeleteWorldTemplateRequest() : 
    m_templateHasBeenSet(false)
{
}

Aws::String DeleteWorldTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  return payload.View().WriteReadable();
}




