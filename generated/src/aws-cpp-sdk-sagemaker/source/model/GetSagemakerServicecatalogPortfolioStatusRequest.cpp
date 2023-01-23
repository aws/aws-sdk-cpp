﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/GetSagemakerServicecatalogPortfolioStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSagemakerServicecatalogPortfolioStatusRequest::GetSagemakerServicecatalogPortfolioStatusRequest()
{
}

Aws::String GetSagemakerServicecatalogPortfolioStatusRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetSagemakerServicecatalogPortfolioStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.GetSagemakerServicecatalogPortfolioStatus"));
  return headers;

}




