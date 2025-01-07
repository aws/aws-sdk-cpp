/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueryStatusWorkloadInsightsTopContributorsDataRequest::GetQueryStatusWorkloadInsightsTopContributorsDataRequest() : 
    m_scopeIdHasBeenSet(false),
    m_queryIdHasBeenSet(false)
{
}

Aws::String GetQueryStatusWorkloadInsightsTopContributorsDataRequest::SerializePayload() const
{
  return {};
}




