/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/StopDataSourceSyncJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopDataSourceSyncJobRequest::StopDataSourceSyncJobRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

Aws::String StopDataSourceSyncJobRequest::SerializePayload() const
{
  return {};
}




