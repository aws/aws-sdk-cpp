/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ExplainerConfig.h>
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

ExplainerConfig::ExplainerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ExplainerConfig& ExplainerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClarifyExplainerConfig"))
  {
    m_clarifyExplainerConfig = jsonValue.GetObject("ClarifyExplainerConfig");
    m_clarifyExplainerConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ExplainerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clarifyExplainerConfigHasBeenSet)
  {
   payload.WithObject("ClarifyExplainerConfig", m_clarifyExplainerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
