/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchGetPolicyInputItem.h>
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

BatchGetPolicyInputItem::BatchGetPolicyInputItem(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchGetPolicyInputItem& BatchGetPolicyInputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyStoreId"))
  {
    m_policyStoreId = jsonValue.GetString("policyStoreId");
    m_policyStoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyId"))
  {
    m_policyId = jsonValue.GetString("policyId");
    m_policyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetPolicyInputItem::Jsonize() const
{
  JsonValue payload;

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("policyId", m_policyId);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
