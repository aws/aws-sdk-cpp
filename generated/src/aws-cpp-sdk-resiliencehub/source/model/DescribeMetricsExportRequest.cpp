/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeMetricsExportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeMetricsExportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metricsExportIdHasBeenSet)
  {
   payload.WithString("metricsExportId", m_metricsExportId);

  }

  return payload.View().WriteReadable();
}




