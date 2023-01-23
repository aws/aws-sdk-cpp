/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeUserRequest::DescribeUserRequest() : 
    m_brokerIdHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

Aws::String DescribeUserRequest::SerializePayload() const
{
  return {};
}




