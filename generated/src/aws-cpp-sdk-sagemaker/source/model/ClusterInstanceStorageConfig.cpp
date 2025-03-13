/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterInstanceStorageConfig.h>
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

ClusterInstanceStorageConfig::ClusterInstanceStorageConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterInstanceStorageConfig& ClusterInstanceStorageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EbsVolumeConfig"))
  {
    m_ebsVolumeConfig = jsonValue.GetObject("EbsVolumeConfig");
    m_ebsVolumeConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterInstanceStorageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_ebsVolumeConfigHasBeenSet)
  {
   payload.WithObject("EbsVolumeConfig", m_ebsVolumeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
