/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IdentityCenterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

IdentityCenterConfiguration::IdentityCenterConfiguration() : 
    m_enableIdentityPropagation(false),
    m_enableIdentityPropagationHasBeenSet(false)
{
}

IdentityCenterConfiguration::IdentityCenterConfiguration(JsonView jsonValue) : 
    m_enableIdentityPropagation(false),
    m_enableIdentityPropagationHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityCenterConfiguration& IdentityCenterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableIdentityPropagation"))
  {
    m_enableIdentityPropagation = jsonValue.GetBool("EnableIdentityPropagation");

    m_enableIdentityPropagationHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityCenterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableIdentityPropagationHasBeenSet)
  {
   payload.WithBool("EnableIdentityPropagation", m_enableIdentityPropagation);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
