/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/UpdateWorldTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWorldTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_templateLocationHasBeenSet)
  {
   payload.WithObject("templateLocation", m_templateLocation.Jsonize());

  }

  return payload.View().WriteReadable();
}




