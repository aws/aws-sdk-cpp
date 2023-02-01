/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/LabelParameterVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

LabelParameterVersionRequest::LabelParameterVersionRequest() : 
    m_nameHasBeenSet(false),
    m_parameterVersion(0),
    m_parameterVersionHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

Aws::String LabelParameterVersionRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection LabelParameterVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.LabelParameterVersion"));
  return headers;

}




