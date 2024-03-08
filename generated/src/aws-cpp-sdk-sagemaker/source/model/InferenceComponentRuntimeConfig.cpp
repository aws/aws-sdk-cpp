/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentRuntimeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

InferenceComponentRuntimeConfig::InferenceComponentRuntimeConfig() : 
    m_copyCount(0),
    m_copyCountHasBeenSet(false)
{
}

InferenceComponentRuntimeConfig::InferenceComponentRuntimeConfig(JsonView jsonValue) : 
    m_copyCount(0),
    m_copyCountHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentRuntimeConfig& InferenceComponentRuntimeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CopyCount"))
  {
    m_copyCount = jsonValue.GetInteger("CopyCount");

    m_copyCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceComponentRuntimeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_copyCountHasBeenSet)
  {
   payload.WithInteger("CopyCount", m_copyCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
