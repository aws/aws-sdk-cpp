/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FSxLustreConfig.h>
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

FSxLustreConfig::FSxLustreConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

FSxLustreConfig& FSxLustreConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SizeInGiB"))
  {
    m_sizeInGiB = jsonValue.GetInteger("SizeInGiB");
    m_sizeInGiBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PerUnitStorageThroughput"))
  {
    m_perUnitStorageThroughput = jsonValue.GetInteger("PerUnitStorageThroughput");
    m_perUnitStorageThroughputHasBeenSet = true;
  }
  return *this;
}

JsonValue FSxLustreConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sizeInGiBHasBeenSet)
  {
   payload.WithInteger("SizeInGiB", m_sizeInGiB);

  }

  if(m_perUnitStorageThroughputHasBeenSet)
  {
   payload.WithInteger("PerUnitStorageThroughput", m_perUnitStorageThroughput);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
