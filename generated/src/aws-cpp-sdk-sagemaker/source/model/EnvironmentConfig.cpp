/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EnvironmentConfig.h>
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

EnvironmentConfig::EnvironmentConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentConfig& EnvironmentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FSxLustreConfig"))
  {
    m_fSxLustreConfig = jsonValue.GetObject("FSxLustreConfig");
    m_fSxLustreConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_fSxLustreConfigHasBeenSet)
  {
   payload.WithObject("FSxLustreConfig", m_fSxLustreConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
