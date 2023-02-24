/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateStandardsControlAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchUpdateStandardsControlAssociationsRequest::BatchUpdateStandardsControlAssociationsRequest() : 
    m_standardsControlAssociationUpdatesHasBeenSet(false)
{
}

Aws::String BatchUpdateStandardsControlAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_standardsControlAssociationUpdatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardsControlAssociationUpdatesJsonList(m_standardsControlAssociationUpdates.size());
   for(unsigned standardsControlAssociationUpdatesIndex = 0; standardsControlAssociationUpdatesIndex < standardsControlAssociationUpdatesJsonList.GetLength(); ++standardsControlAssociationUpdatesIndex)
   {
     standardsControlAssociationUpdatesJsonList[standardsControlAssociationUpdatesIndex].AsObject(m_standardsControlAssociationUpdates[standardsControlAssociationUpdatesIndex].Jsonize());
   }
   payload.WithArray("StandardsControlAssociationUpdates", std::move(standardsControlAssociationUpdatesJsonList));

  }

  return payload.View().WriteReadable();
}




