/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DeleteAppVersionResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAppVersionResourceRequest::DeleteAppVersionResourceRequest() : 
    m_appArnHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

Aws::String DeleteAppVersionResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("awsRegion", m_awsRegion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_logicalResourceIdHasBeenSet)
  {
   payload.WithObject("logicalResourceId", m_logicalResourceId.Jsonize());

  }

  if(m_physicalResourceIdHasBeenSet)
  {
   payload.WithString("physicalResourceId", m_physicalResourceId);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload.View().WriteReadable();
}




