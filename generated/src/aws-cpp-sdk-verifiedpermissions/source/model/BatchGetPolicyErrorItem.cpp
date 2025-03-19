/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchGetPolicyErrorItem.h>
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

BatchGetPolicyErrorItem::BatchGetPolicyErrorItem(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchGetPolicyErrorItem& BatchGetPolicyErrorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = BatchGetPolicyErrorCodeMapper::GetBatchGetPolicyErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetPolicyErrorItem::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", BatchGetPolicyErrorCodeMapper::GetNameForBatchGetPolicyErrorCode(m_code));
  }

  if(m_policyStoreIdHasBeenSet)
  {
   payload.WithString("policyStoreId", m_policyStoreId);

  }

  if(m_policyIdHasBeenSet)
  {
   payload.WithString("policyId", m_policyId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
