/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdatePolicyDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

UpdatePolicyDefinition::UpdatePolicyDefinition() : 
    m_staticHasBeenSet(false)
{
}

UpdatePolicyDefinition::UpdatePolicyDefinition(JsonView jsonValue) : 
    m_staticHasBeenSet(false)
{
  *this = jsonValue;
}

UpdatePolicyDefinition& UpdatePolicyDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("static"))
  {
    m_static = jsonValue.GetObject("static");

    m_staticHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdatePolicyDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_staticHasBeenSet)
  {
   payload.WithObject("static", m_static.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
