/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ApprovalTeamRequestApprover.h>
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

ApprovalTeamRequestApprover::ApprovalTeamRequestApprover(JsonView jsonValue)
{
  *this = jsonValue;
}

ApprovalTeamRequestApprover& ApprovalTeamRequestApprover::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue ApprovalTeamRequestApprover::Jsonize() const
{
  JsonValue payload;

  if(m_primaryIdentityIdHasBeenSet)
  {
   payload.WithString("PrimaryIdentityId", m_primaryIdentityId);

  }

  if(m_primaryIdentitySourceArnHasBeenSet)
  {
   payload.WithString("PrimaryIdentitySourceArn", m_primaryIdentitySourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace MPA
} // namespace Aws
