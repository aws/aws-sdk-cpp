/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetSearchSuggestionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSearchSuggestionsRequest::GetSearchSuggestionsRequest() : 
    m_resource(ResourceType::NOT_SET),
    m_resourceHasBeenSet(false),
    m_suggestionQueryHasBeenSet(false)
{
}

Aws::String GetSearchSuggestionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", ResourceTypeMapper::GetNameForResourceType(m_resource));
  }

  if(m_suggestionQueryHasBeenSet)
  {
   payload.WithObject("SuggestionQuery", m_suggestionQuery.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSearchSuggestionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.GetSearchSuggestions"));
  return headers;

}




