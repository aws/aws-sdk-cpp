/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetRasterDataCollectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRasterDataCollectionRequest::GetRasterDataCollectionRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetRasterDataCollectionRequest::SerializePayload() const
{
  return {};
}




