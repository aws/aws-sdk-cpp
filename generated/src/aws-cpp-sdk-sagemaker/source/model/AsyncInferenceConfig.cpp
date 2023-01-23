/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AsyncInferenceConfig.h>
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

AsyncInferenceConfig::AsyncInferenceConfig() : 
    m_clientConfigHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

AsyncInferenceConfig::AsyncInferenceConfig(JsonView jsonValue) : 
    m_clientConfigHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

AsyncInferenceConfig& AsyncInferenceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientConfig"))
  {
    m_clientConfig = jsonValue.GetObject("ClientConfig");

    m_clientConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

    m_outputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AsyncInferenceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clientConfigHasBeenSet)
  {
   payload.WithObject("ClientConfig", m_clientConfig.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
