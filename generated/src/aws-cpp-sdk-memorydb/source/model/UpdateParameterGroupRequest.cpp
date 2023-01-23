/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/UpdateParameterGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateParameterGroupRequest::UpdateParameterGroupRequest() : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterNameValuesHasBeenSet(false)
{
}

Aws::String UpdateParameterGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_parameterNameValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterNameValuesJsonList(m_parameterNameValues.size());
   for(unsigned parameterNameValuesIndex = 0; parameterNameValuesIndex < parameterNameValuesJsonList.GetLength(); ++parameterNameValuesIndex)
   {
     parameterNameValuesJsonList[parameterNameValuesIndex].AsObject(m_parameterNameValues[parameterNameValuesIndex].Jsonize());
   }
   payload.WithArray("ParameterNameValues", std::move(parameterNameValuesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateParameterGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.UpdateParameterGroup"));
  return headers;

}




