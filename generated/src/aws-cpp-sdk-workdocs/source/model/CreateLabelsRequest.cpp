/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CreateLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLabelsRequest::CreateLabelsRequest() : 
    m_resourceIdHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_authenticationTokenHasBeenSet(false)
{
}

Aws::String CreateLabelsRequest::SerializePayload() const
{
  JsonValue payload;

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

Aws::Http::HeaderValueCollection CreateLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




