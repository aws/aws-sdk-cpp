/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/StartDomainMaintenanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDomainMaintenanceRequest::StartDomainMaintenanceRequest() : 
    m_domainNameHasBeenSet(false),
    m_action(MaintenanceType::NOT_SET),
    m_actionHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

Aws::String StartDomainMaintenanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", MaintenanceTypeMapper::GetNameForMaintenanceType(m_action));
  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  return payload.View().WriteReadable();
}




