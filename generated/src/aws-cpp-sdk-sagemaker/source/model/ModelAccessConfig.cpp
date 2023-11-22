/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelAccessConfig.h>
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

ModelAccessConfig::ModelAccessConfig() : 
    m_acceptEula(false),
    m_acceptEulaHasBeenSet(false)
{
}

ModelAccessConfig::ModelAccessConfig(JsonView jsonValue) : 
    m_acceptEula(false),
    m_acceptEulaHasBeenSet(false)
{
  *this = jsonValue;
}

ModelAccessConfig& ModelAccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceptEula"))
  {
    m_acceptEula = jsonValue.GetBool("AcceptEula");

    m_acceptEulaHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelAccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_acceptEulaHasBeenSet)
  {
   payload.WithBool("AcceptEula", m_acceptEula);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
