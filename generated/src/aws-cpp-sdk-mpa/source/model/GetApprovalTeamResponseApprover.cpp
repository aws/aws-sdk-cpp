/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/GetApprovalTeamResponseApprover.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MPA
{
namespace Model
{

GetApprovalTeamResponseApprover::GetApprovalTeamResponseApprover(JsonView jsonValue)
{
  *this = jsonValue;
}

GetApprovalTeamResponseApprover& GetApprovalTeamResponseApprover::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApproverId"))
  {
    m_approverId = jsonValue.GetString("ApproverId");
    m_approverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResponseTime"))
  {
    m_responseTime = jsonValue.GetString("ResponseTime");
    m_responseTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryIdentityId"))
  {
    m_primaryIdentityId = jsonValue.GetString("PrimaryIdentityId");
    m_primaryIdentityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryIdentitySourceArn"))
  {
    m_primaryIdentitySourceArn = jsonValue.GetString("PrimaryIdentitySourceArn");
    m_primaryIdentitySourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrimaryIdentityStatus"))
  {
    m_primaryIdentityStatus = IdentityStatusMapper::GetIdentityStatusForName(jsonValue.GetString("PrimaryIdentityStatus"));
    m_primaryIdentityStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue GetApprovalTeamResponseApprover::Jsonize() const
{
  JsonValue payload;

  if(m_approverIdHasBeenSet)
  {
   payload.WithString("ApproverId", m_approverId);

  }

  if(m_responseTimeHasBeenSet)
  {
   payload.WithString("ResponseTime", m_responseTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_primaryIdentityIdHasBeenSet)
  {
   payload.WithString("PrimaryIdentityId", m_primaryIdentityId);

  }

  if(m_primaryIdentitySourceArnHasBeenSet)
  {
   payload.WithString("PrimaryIdentitySourceArn", m_primaryIdentitySourceArn);

  }

  if(m_primaryIdentityStatusHasBeenSet)
  {
   payload.WithString("PrimaryIdentityStatus", IdentityStatusMapper::GetNameForIdentityStatus(m_primaryIdentityStatus));
  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
