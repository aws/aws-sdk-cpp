/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetResourceShareAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceShareAssociationsRequest::GetResourceShareAssociationsRequest() : 
    m_associationType(ResourceShareAssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false),
    m_resourceShareArnsHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_associationStatus(ResourceShareAssociationStatus::NOT_SET),
    m_associationStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetResourceShareAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", ResourceShareAssociationTypeMapper::GetNameForResourceShareAssociationType(m_associationType));
  }

  if(m_resourceShareArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceShareArnsJsonList(m_resourceShareArns.size());
   for(unsigned resourceShareArnsIndex = 0; resourceShareArnsIndex < resourceShareArnsJsonList.GetLength(); ++resourceShareArnsIndex)
   {
     resourceShareArnsJsonList[resourceShareArnsIndex].AsString(m_resourceShareArns[resourceShareArnsIndex]);
   }
   payload.WithArray("resourceShareArns", std::move(resourceShareArnsJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("associationStatus", ResourceShareAssociationStatusMapper::GetNameForResourceShareAssociationStatus(m_associationStatus));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




