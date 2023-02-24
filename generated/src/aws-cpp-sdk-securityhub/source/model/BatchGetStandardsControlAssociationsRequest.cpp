/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchGetStandardsControlAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetStandardsControlAssociationsRequest::BatchGetStandardsControlAssociationsRequest() : 
    m_standardsControlAssociationIdsHasBeenSet(false)
{
}

Aws::String BatchGetStandardsControlAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_standardsControlAssociationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardsControlAssociationIdsJsonList(m_standardsControlAssociationIds.size());
   for(unsigned standardsControlAssociationIdsIndex = 0; standardsControlAssociationIdsIndex < standardsControlAssociationIdsJsonList.GetLength(); ++standardsControlAssociationIdsIndex)
   {
     standardsControlAssociationIdsJsonList[standardsControlAssociationIdsIndex].AsObject(m_standardsControlAssociationIds[standardsControlAssociationIdsIndex].Jsonize());
   }
   payload.WithArray("StandardsControlAssociationIds", std::move(standardsControlAssociationIdsJsonList));

  }

  return payload.View().WriteReadable();
}




