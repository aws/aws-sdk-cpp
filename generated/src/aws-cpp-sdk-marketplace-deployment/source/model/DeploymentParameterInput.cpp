/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-deployment/model/DeploymentParameterInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceDeployment
{
namespace Model
{

DeploymentParameterInput::DeploymentParameterInput() : 
    m_nameHasBeenSet(false),
    m_secretStringHasBeenSet(false)
{
}

DeploymentParameterInput::DeploymentParameterInput(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_secretStringHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentParameterInput& DeploymentParameterInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretString"))
  {
    m_secretString = jsonValue.GetString("secretString");

    m_secretStringHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentParameterInput::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_secretStringHasBeenSet)
  {
   payload.WithString("secretString", m_secretString);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceDeployment
} // namespace Aws
