﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/DescribeOriginEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOriginEndpointRequest::DescribeOriginEndpointRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribeOriginEndpointRequest::SerializePayload() const
{
  return {};
}




