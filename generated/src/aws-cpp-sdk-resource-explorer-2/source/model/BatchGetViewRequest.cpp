/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/BatchGetViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetViewRequest::BatchGetViewRequest() : 
    m_viewArnsHasBeenSet(false)
{
}

Aws::String BatchGetViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_viewArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> viewArnsJsonList(m_viewArns.size());
   for(unsigned viewArnsIndex = 0; viewArnsIndex < viewArnsJsonList.GetLength(); ++viewArnsIndex)
   {
     viewArnsJsonList[viewArnsIndex].AsString(m_viewArns[viewArnsIndex]);
   }
   payload.WithArray("ViewArns", std::move(viewArnsJsonList));

  }

  return payload.View().WriteReadable();
}




