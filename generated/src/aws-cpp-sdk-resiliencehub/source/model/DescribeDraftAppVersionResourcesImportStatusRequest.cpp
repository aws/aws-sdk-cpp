/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeDraftAppVersionResourcesImportStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDraftAppVersionResourcesImportStatusRequest::DescribeDraftAppVersionResourcesImportStatusRequest() : 
    m_appArnHasBeenSet(false)
{
}

Aws::String DescribeDraftAppVersionResourcesImportStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  return payload.View().WriteReadable();
}




