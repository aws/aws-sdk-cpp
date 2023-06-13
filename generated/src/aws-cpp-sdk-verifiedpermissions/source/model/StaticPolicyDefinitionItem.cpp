/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/StaticPolicyDefinitionItem.h>
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

StaticPolicyDefinitionItem::StaticPolicyDefinitionItem() : 
    m_descriptionHasBeenSet(false)
{
}

StaticPolicyDefinitionItem::StaticPolicyDefinitionItem(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

StaticPolicyDefinitionItem& StaticPolicyDefinitionItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticPolicyDefinitionItem::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
