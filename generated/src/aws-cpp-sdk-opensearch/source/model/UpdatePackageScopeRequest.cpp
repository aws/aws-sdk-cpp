/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdatePackageScopeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePackageScopeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_operationHasBeenSet)
  {
   payload.WithString("Operation", PackageScopeOperationEnumMapper::GetNameForPackageScopeOperationEnum(m_operation));
  }

  if(m_packageUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> packageUserListJsonList(m_packageUserList.size());
   for(unsigned packageUserListIndex = 0; packageUserListIndex < packageUserListJsonList.GetLength(); ++packageUserListIndex)
   {
     packageUserListJsonList[packageUserListIndex].AsString(m_packageUserList[packageUserListIndex]);
   }
   payload.WithArray("PackageUserList", std::move(packageUserListJsonList));

  }

  return payload.View().WriteReadable();
}




