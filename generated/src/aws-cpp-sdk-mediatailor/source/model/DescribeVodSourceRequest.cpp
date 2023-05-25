/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/DescribeVodSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVodSourceRequest::DescribeVodSourceRequest() : 
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

Aws::String DescribeVodSourceRequest::SerializePayload() const
{
  return {};
}




