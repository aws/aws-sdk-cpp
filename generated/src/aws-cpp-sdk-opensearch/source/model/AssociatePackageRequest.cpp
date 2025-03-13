/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AssociatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_prerequisitePackageIDListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> prerequisitePackageIDListJsonList(m_prerequisitePackageIDList.size());
   for(unsigned prerequisitePackageIDListIndex = 0; prerequisitePackageIDListIndex < prerequisitePackageIDListJsonList.GetLength(); ++prerequisitePackageIDListIndex)
   {
     prerequisitePackageIDListJsonList[prerequisitePackageIDListIndex].AsString(m_prerequisitePackageIDList[prerequisitePackageIDListIndex]);
   }
   payload.WithArray("PrerequisitePackageIDList", std::move(prerequisitePackageIDListJsonList));

  }

  if(m_associationConfigurationHasBeenSet)
  {
   payload.WithObject("AssociationConfiguration", m_associationConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




