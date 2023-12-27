/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeBundleAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBundleAssociationsRequest::DescribeBundleAssociationsRequest() : 
    m_bundleIdHasBeenSet(false),
    m_associatedResourceTypesHasBeenSet(false)
{
}

Aws::String DescribeBundleAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_associatedResourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedResourceTypesJsonList(m_associatedResourceTypes.size());
   for(unsigned associatedResourceTypesIndex = 0; associatedResourceTypesIndex < associatedResourceTypesJsonList.GetLength(); ++associatedResourceTypesIndex)
   {
     associatedResourceTypesJsonList[associatedResourceTypesIndex].AsString(BundleAssociatedResourceTypeMapper::GetNameForBundleAssociatedResourceType(m_associatedResourceTypes[associatedResourceTypesIndex]));
   }
   payload.WithArray("AssociatedResourceTypes", std::move(associatedResourceTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBundleAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DescribeBundleAssociations"));
  return headers;

}




