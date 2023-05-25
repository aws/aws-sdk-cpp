/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateDashboardPublishedVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDashboardPublishedVersionRequest::UpdateDashboardPublishedVersionRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String UpdateDashboardPublishedVersionRequest::SerializePayload() const
{
  return {};
}




