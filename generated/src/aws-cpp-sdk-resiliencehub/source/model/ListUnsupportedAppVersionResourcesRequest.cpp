/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListUnsupportedAppVersionResourcesRequest::ListUnsupportedAppVersionResourcesRequest() : 
    m_appArnHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resolutionIdHasBeenSet(false)
{
}

Aws::String ListUnsupportedAppVersionResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("appVersion", m_appVersion);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_resolutionIdHasBeenSet)
  {
   payload.WithString("resolutionId", m_resolutionId);

  }

  return payload.View().WriteReadable();
}




