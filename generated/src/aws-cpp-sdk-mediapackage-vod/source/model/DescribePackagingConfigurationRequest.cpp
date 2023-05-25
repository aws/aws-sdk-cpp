/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/DescribePackagingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePackagingConfigurationRequest::DescribePackagingConfigurationRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribePackagingConfigurationRequest::SerializePayload() const
{
  return {};
}




