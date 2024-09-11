/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNodeRequest::UpdateNodeRequest() : 
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_role(NodeRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

Aws::String UpdateNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", NodeRoleMapper::GetNameForNodeRole(m_role));
  }

  return payload.View().WriteReadable();
}




