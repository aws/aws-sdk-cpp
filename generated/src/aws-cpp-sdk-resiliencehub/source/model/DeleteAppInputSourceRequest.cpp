/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DeleteAppInputSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppInputSourceRequest::DeleteAppInputSourceRequest() : 
    m_appArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_eksSourceClusterNamespaceHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_terraformSourceHasBeenSet(false)
{
}

Aws::String DeleteAppInputSourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_eksSourceClusterNamespaceHasBeenSet)
  {
   payload.WithObject("eksSourceClusterNamespace", m_eksSourceClusterNamespace.Jsonize());

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_terraformSourceHasBeenSet)
  {
   payload.WithObject("terraformSource", m_terraformSource.Jsonize());

  }

  return payload.View().WriteReadable();
}




