/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/DescribeNodeAssociationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeNodeAssociationStatusRequest::DescribeNodeAssociationStatusRequest() : 
    m_nodeAssociationStatusTokenHasBeenSet(false),
    m_serverNameHasBeenSet(false)
{
}

Aws::String DescribeNodeAssociationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nodeAssociationStatusTokenHasBeenSet)
  {
   payload.WithString("NodeAssociationStatusToken", m_nodeAssociationStatusToken);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeNodeAssociationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.DescribeNodeAssociationStatus"));
  return headers;

}




