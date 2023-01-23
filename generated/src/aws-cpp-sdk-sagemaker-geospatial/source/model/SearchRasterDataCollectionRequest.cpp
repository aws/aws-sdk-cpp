/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/SearchRasterDataCollectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchRasterDataCollectionRequest::SearchRasterDataCollectionRequest() : 
    m_arnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_rasterDataCollectionQueryHasBeenSet(false)
{
}

Aws::String SearchRasterDataCollectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_rasterDataCollectionQueryHasBeenSet)
  {
   payload.WithObject("RasterDataCollectionQuery", m_rasterDataCollectionQuery.Jsonize());

  }

  return payload.View().WriteReadable();
}




