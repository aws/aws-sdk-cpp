/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ListPermissionAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListPermissionAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_permissionArnHasBeenSet)
  {
   payload.WithString("permissionArn", m_permissionArn);

  }

  if(m_permissionVersionHasBeenSet)
  {
   payload.WithInteger("permissionVersion", m_permissionVersion);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("associationStatus", ResourceShareAssociationStatusMapper::GetNameForResourceShareAssociationStatus(m_associationStatus));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_featureSetHasBeenSet)
  {
   payload.WithString("featureSet", PermissionFeatureSetMapper::GetNameForPermissionFeatureSet(m_featureSet));
  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithBool("defaultVersion", m_defaultVersion);

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




