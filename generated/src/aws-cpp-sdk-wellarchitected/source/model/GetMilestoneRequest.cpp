/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetMilestoneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMilestoneRequest::GetMilestoneRequest() : 
    m_workloadIdHasBeenSet(false),
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false)
{
}

Aws::String GetMilestoneRequest::SerializePayload() const
{
  return {};
}




