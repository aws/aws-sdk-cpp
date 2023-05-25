/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeGroupMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeGroupMembershipRequest::DescribeGroupMembershipRequest() : 
    m_memberNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

Aws::String DescribeGroupMembershipRequest::SerializePayload() const
{
  return {};
}




