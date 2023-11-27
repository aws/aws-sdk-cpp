/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ConfigurationPolicyAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ConfigurationPolicyAssociation::ConfigurationPolicyAssociation() : 
    m_targetHasBeenSet(false)
{
}

ConfigurationPolicyAssociation::ConfigurationPolicyAssociation(JsonView jsonValue) : 
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationPolicyAssociation& ConfigurationPolicyAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetObject("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationPolicyAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("Target", m_target.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
