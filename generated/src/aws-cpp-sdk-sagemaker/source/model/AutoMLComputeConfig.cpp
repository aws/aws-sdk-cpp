/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLComputeConfig.h>
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

AutoMLComputeConfig::AutoMLComputeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoMLComputeConfig& AutoMLComputeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmrServerlessComputeConfig"))
  {
    m_emrServerlessComputeConfig = jsonValue.GetObject("EmrServerlessComputeConfig");
    m_emrServerlessComputeConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoMLComputeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_emrServerlessComputeConfigHasBeenSet)
  {
   payload.WithObject("EmrServerlessComputeConfig", m_emrServerlessComputeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
