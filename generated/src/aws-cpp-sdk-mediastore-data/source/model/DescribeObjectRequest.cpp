/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/DescribeObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeObjectRequest::DescribeObjectRequest() : 
    m_pathHasBeenSet(false)
{
}

Aws::String DescribeObjectRequest::SerializePayload() const
{
  return {};
}




