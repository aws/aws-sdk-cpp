/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeVPCConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVPCConnectionRequest::DescribeVPCConnectionRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_vPCConnectionIdHasBeenSet(false)
{
}

Aws::String DescribeVPCConnectionRequest::SerializePayload() const
{
  return {};
}




