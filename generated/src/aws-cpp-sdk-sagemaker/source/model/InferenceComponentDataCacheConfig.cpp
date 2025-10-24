/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentDataCacheConfig.h>
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

InferenceComponentDataCacheConfig::InferenceComponentDataCacheConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceComponentDataCacheConfig& InferenceComponentDataCacheConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableCaching"))
  {
    m_enableCaching = jsonValue.GetBool("EnableCaching");
    m_enableCachingHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentDataCacheConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableCachingHasBeenSet)
  {
   payload.WithBool("EnableCaching", m_enableCaching);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
