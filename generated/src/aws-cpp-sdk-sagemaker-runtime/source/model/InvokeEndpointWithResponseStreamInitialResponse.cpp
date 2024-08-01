﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{

InvokeEndpointWithResponseStreamInitialResponse::InvokeEndpointWithResponseStreamInitialResponse() : 
    m_contentTypeHasBeenSet(false),
    m_invokedProductionVariantHasBeenSet(false),
    m_customAttributesHasBeenSet(false)
{
}

InvokeEndpointWithResponseStreamInitialResponse::InvokeEndpointWithResponseStreamInitialResponse(JsonView jsonValue)
  : InvokeEndpointWithResponseStreamInitialResponse()
{
  *this = jsonValue;
}

InvokeEndpointWithResponseStreamInitialResponse& InvokeEndpointWithResponseStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeEndpointWithResponseStreamInitialResponse::InvokeEndpointWithResponseStreamInitialResponse(const Http::HeaderValueCollection& headers) : InvokeEndpointWithResponseStreamInitialResponse()
{
  const auto& contentTypeIter = headers.find("x-amzn-sagemaker-content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
  }

  const auto& invokedProductionVariantIter = headers.find("x-amzn-invoked-production-variant");
  if(invokedProductionVariantIter != headers.end())
  {
    m_invokedProductionVariant = invokedProductionVariantIter->second;
  }

  const auto& customAttributesIter = headers.find("x-amzn-sagemaker-custom-attributes");
  if(customAttributesIter != headers.end())
  {
    m_customAttributes = customAttributesIter->second;
  }

}

JsonValue InvokeEndpointWithResponseStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
