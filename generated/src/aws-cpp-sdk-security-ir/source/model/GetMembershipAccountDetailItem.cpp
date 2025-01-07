/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/GetMembershipAccountDetailItem.h>
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

GetMembershipAccountDetailItem::GetMembershipAccountDetailItem() : 
    m_accountIdHasBeenSet(false),
    m_relationshipStatus(MembershipAccountRelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false),
    m_relationshipType(MembershipAccountRelationshipType::NOT_SET),
    m_relationshipTypeHasBeenSet(false)
{
}

GetMembershipAccountDetailItem::GetMembershipAccountDetailItem(JsonView jsonValue)
  : GetMembershipAccountDetailItem()
{
  *this = jsonValue;
}

GetMembershipAccountDetailItem& GetMembershipAccountDetailItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = MembershipAccountRelationshipStatusMapper::GetMembershipAccountRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));

    m_relationshipStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipType"))
  {
    m_relationshipType = MembershipAccountRelationshipTypeMapper::GetMembershipAccountRelationshipTypeForName(jsonValue.GetString("relationshipType"));

    m_relationshipTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue GetMembershipAccountDetailItem::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", MembershipAccountRelationshipStatusMapper::GetNameForMembershipAccountRelationshipStatus(m_relationshipStatus));
  }

  if(m_relationshipTypeHasBeenSet)
  {
   payload.WithString("relationshipType", MembershipAccountRelationshipTypeMapper::GetNameForMembershipAccountRelationshipType(m_relationshipType));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
