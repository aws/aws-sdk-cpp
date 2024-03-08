/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
    m_customAttributesHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_invokedProductionVariantHasBeenSet(false)
{
}

InvokeEndpointWithResponseStreamInitialResponse::InvokeEndpointWithResponseStreamInitialResponse(JsonView jsonValue) : 
    m_customAttributesHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_invokedProductionVariantHasBeenSet(false)
{
  *this = jsonValue;
}

InvokeEndpointWithResponseStreamInitialResponse& InvokeEndpointWithResponseStreamInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue InvokeEndpointWithResponseStreamInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
