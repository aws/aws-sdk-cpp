/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantCoreDumpConfig.h>
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

ProductionVariantCoreDumpConfig::ProductionVariantCoreDumpConfig() : 
    m_destinationS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

ProductionVariantCoreDumpConfig::ProductionVariantCoreDumpConfig(JsonView jsonValue) : 
    m_destinationS3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariantCoreDumpConfig& ProductionVariantCoreDumpConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationS3Uri"))
  {
    m_destinationS3Uri = jsonValue.GetString("DestinationS3Uri");

    m_destinationS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariantCoreDumpConfig::Jsonize() const
{
  JsonValue payload;

  if(m_destinationS3UriHasBeenSet)
  {
   payload.WithString("DestinationS3Uri", m_destinationS3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
