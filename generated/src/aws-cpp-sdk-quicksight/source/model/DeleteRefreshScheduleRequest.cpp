/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteRefreshScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteRefreshScheduleRequest::DeleteRefreshScheduleRequest() : 
    m_dataSetIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_scheduleIdHasBeenSet(false)
{
}

Aws::String DeleteRefreshScheduleRequest::SerializePayload() const
{
  return {};
}




