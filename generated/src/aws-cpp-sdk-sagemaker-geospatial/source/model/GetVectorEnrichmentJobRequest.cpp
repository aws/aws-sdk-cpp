/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/GetVectorEnrichmentJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetVectorEnrichmentJobRequest::GetVectorEnrichmentJobRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetVectorEnrichmentJobRequest::SerializePayload() const
{
  return {};
}




