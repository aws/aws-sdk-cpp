/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeTopicRefreshScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTopicRefreshScheduleRequest::DescribeTopicRefreshScheduleRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_datasetIdHasBeenSet(false)
{
}

Aws::String DescribeTopicRefreshScheduleRequest::SerializePayload() const
{
  return {};
}




