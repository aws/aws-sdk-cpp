/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/GetScheduleGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetScheduleGroupRequest::GetScheduleGroupRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetScheduleGroupRequest::SerializePayload() const
{
  return {};
}




