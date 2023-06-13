/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/DeterminingPolicyItem.h>
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

DeterminingPolicyItem::DeterminingPolicyItem() : 
    m_policyIdHasBeenSet(false)
{
}

DeterminingPolicyItem::DeterminingPolicyItem(JsonView jsonValue) : 
    m_policyIdHasBeenSet(false)
{
  *this = jsonValue;
}

DeterminingPolicyItem& DeterminingPolicyItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyId"))
  {
    m_policyId = jsonValue.GetString("policyId");

    m_policyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DeterminingPolicyItem::Jsonize() const
{
  JsonValue payload;

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("policyId", m_policyId);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
