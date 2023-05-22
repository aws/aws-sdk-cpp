/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeAssetBundleImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAssetBundleImportJobRequest::DescribeAssetBundleImportJobRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_assetBundleImportJobIdHasBeenSet(false)
{
}

Aws::String DescribeAssetBundleImportJobRequest::SerializePayload() const
{
  return {};
}




