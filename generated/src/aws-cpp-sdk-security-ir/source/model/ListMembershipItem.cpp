/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ListMembershipItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

ListMembershipItem::ListMembershipItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListMembershipItem& ListMembershipItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = AwsRegionMapper::GetAwsRegionForName(jsonValue.GetString("region"));
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");
    m_membershipArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipStatus"))
  {
    m_membershipStatus = MembershipStatusMapper::GetMembershipStatusForName(jsonValue.GetString("membershipStatus"));
    m_membershipStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ListMembershipItem::Jsonize() const
{
  JsonValue payload;

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", AwsRegionMapper::GetNameForAwsRegion(m_region));
  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

  }

  if(m_membershipStatusHasBeenSet)
  {
   payload.WithString("membershipStatus", MembershipStatusMapper::GetNameForMembershipStatus(m_membershipStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
