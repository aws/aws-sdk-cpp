/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InfraCheckConfig.h>
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

InfraCheckConfig::InfraCheckConfig() : 
    m_enableInfraCheck(false),
    m_enableInfraCheckHasBeenSet(false)
{
}

InfraCheckConfig::InfraCheckConfig(JsonView jsonValue) : 
    m_enableInfraCheck(false),
    m_enableInfraCheckHasBeenSet(false)
{
  *this = jsonValue;
}

InfraCheckConfig& InfraCheckConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableInfraCheck"))
  {
    m_enableInfraCheck = jsonValue.GetBool("EnableInfraCheck");

    m_enableInfraCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue InfraCheckConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableInfraCheckHasBeenSet)
  {
   payload.WithBool("EnableInfraCheck", m_enableInfraCheck);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
