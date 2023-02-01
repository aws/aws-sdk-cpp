/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UnlabelParameterVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UnlabelParameterVersionRequest::UnlabelParameterVersionRequest() : 
    m_nameHasBeenSet(false),
    m_parameterVersion(0),
    m_parameterVersionHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

Aws::String UnlabelParameterVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parameterVersionHasBeenSet)
  {
   payload.WithInt64("ParameterVersion", m_parameterVersion);

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UnlabelParameterVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.UnlabelParameterVersion"));
  return headers;

}




