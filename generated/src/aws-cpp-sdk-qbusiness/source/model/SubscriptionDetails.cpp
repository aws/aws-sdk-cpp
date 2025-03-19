/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/SubscriptionDetails.h>
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

SubscriptionDetails::SubscriptionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SubscriptionDetails& SubscriptionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue SubscriptionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SubscriptionTypeMapper::GetNameForSubscriptionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
