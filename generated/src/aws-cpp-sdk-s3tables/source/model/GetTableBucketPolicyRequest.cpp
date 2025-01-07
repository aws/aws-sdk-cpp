﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/GetTableBucketPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTableBucketPolicyRequest::GetTableBucketPolicyRequest() : 
    m_tableBucketARNHasBeenSet(false)
{
}

Aws::String GetTableBucketPolicyRequest::SerializePayload() const
{
  return {};
}




