/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateIdentityPropagationConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIdentityPropagationConfigRequest::UpdateIdentityPropagationConfigRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_service(ServiceType::NOT_SET),
    m_serviceHasBeenSet(false),
    m_authorizedTargetsHasBeenSet(false)
{
}

Aws::String UpdateIdentityPropagationConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedTargetsJsonList(m_authorizedTargets.size());
   for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
   {
     authorizedTargetsJsonList[authorizedTargetsIndex].AsString(m_authorizedTargets[authorizedTargetsIndex]);
   }
   payload.WithArray("AuthorizedTargets", std::move(authorizedTargetsJsonList));

  }

  return payload.View().WriteReadable();
}




