/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredCustomerManagedKey.h>
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

RegisteredCustomerManagedKey::RegisteredCustomerManagedKey(JsonView jsonValue)
{
  *this = jsonValue;
}

RegisteredCustomerManagedKey& RegisteredCustomerManagedKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyArn"))
  {
    m_keyArn = jsonValue.GetString("KeyArn");
    m_keyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultKey"))
  {
    m_defaultKey = jsonValue.GetBool("DefaultKey");
    m_defaultKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredCustomerManagedKey::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("KeyArn", m_keyArn);

  }

  if(m_defaultKeyHasBeenSet)
  {
   payload.WithBool("DefaultKey", m_defaultKey);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
