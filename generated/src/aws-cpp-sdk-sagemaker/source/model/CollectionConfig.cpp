/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CollectionConfig.h>
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

CollectionConfig::CollectionConfig() : 
    m_vectorConfigHasBeenSet(false)
{
}

CollectionConfig::CollectionConfig(JsonView jsonValue) : 
    m_vectorConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CollectionConfig& CollectionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VectorConfig"))
  {
    m_vectorConfig = jsonValue.GetObject("VectorConfig");

    m_vectorConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_vectorConfigHasBeenSet)
  {
   payload.WithObject("VectorConfig", m_vectorConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
