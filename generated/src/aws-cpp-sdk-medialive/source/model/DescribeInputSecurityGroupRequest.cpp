/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputSecurityGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInputSecurityGroupRequest::DescribeInputSecurityGroupRequest() : 
    m_inputSecurityGroupIdHasBeenSet(false)
{
}

Aws::String DescribeInputSecurityGroupRequest::SerializePayload() const
{
  return {};
}




