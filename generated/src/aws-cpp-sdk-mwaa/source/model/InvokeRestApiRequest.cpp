/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/InvokeRestApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeRestApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_methodHasBeenSet)
  {
   payload.WithString("Method", RestApiMethodMapper::GetNameForRestApiMethod(m_method));
  }

  if(m_queryParametersHasBeenSet)
  {
    if(!m_queryParameters.View().IsNull())
    {
       payload.WithObject("QueryParameters", JsonValue(m_queryParameters.View()));
    }
  }

  if(m_bodyHasBeenSet)
  {
    if(!m_body.View().IsNull())
    {
       payload.WithObject("Body", JsonValue(m_body.View()));
    }
  }

  return payload.View().WriteReadable();
}




