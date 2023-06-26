/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ActionIdentifier.h>
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

ActionIdentifier::ActionIdentifier() : 
    m_actionTypeHasBeenSet(false),
    m_actionIdHasBeenSet(false)
{
}

ActionIdentifier::ActionIdentifier(JsonView jsonValue) : 
    m_actionTypeHasBeenSet(false),
    m_actionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionIdentifier& ActionIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = jsonValue.GetString("actionType");

    m_actionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionId"))
  {
    m_actionId = jsonValue.GetString("actionId");

    m_actionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", m_actionType);

  }

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("actionId", m_actionId);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
