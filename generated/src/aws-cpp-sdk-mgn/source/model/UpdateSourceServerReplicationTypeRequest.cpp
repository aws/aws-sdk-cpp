/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UpdateSourceServerReplicationTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSourceServerReplicationTypeRequest::UpdateSourceServerReplicationTypeRequest() : 
    m_accountIDHasBeenSet(false),
    m_replicationType(ReplicationType::NOT_SET),
    m_replicationTypeHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false)
{
}

Aws::String UpdateSourceServerReplicationTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("accountID", m_accountID);

  }

  if(m_replicationTypeHasBeenSet)
  {
   payload.WithString("replicationType", ReplicationTypeMapper::GetNameForReplicationType(m_replicationType));
  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  return payload.View().WriteReadable();
}




