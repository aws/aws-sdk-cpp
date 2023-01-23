/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateTemplateActiveVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTemplateActiveVersionRequest::UpdateTemplateActiveVersionRequest() : 
    m_templateActiveVersionRequestHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateTypeHasBeenSet(false)
{
}

Aws::String UpdateTemplateActiveVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateActiveVersionRequestHasBeenSet)
  {
   payload = m_templateActiveVersionRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




