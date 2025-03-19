/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SubscriptionPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

SubscriptionPrincipal::SubscriptionPrincipal(JsonView jsonValue)
{
  *this = jsonValue;
}

SubscriptionPrincipal& SubscriptionPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");
    m_userHasBeenSet = true;
  }
  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");
    m_groupHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_userHasBeenSet)
  {
   payload.WithString("user", m_user);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
