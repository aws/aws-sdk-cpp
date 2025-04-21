/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentAclMembership.h>
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

DocumentAclMembership::DocumentAclMembership(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentAclMembership& DocumentAclMembership::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memberRelation"))
  {
    m_memberRelation = MemberRelationMapper::GetMemberRelationForName(jsonValue.GetString("memberRelation"));
    m_memberRelationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentAclMembership::Jsonize() const
{
  JsonValue payload;

  if(m_memberRelationHasBeenSet)
  {
   payload.WithString("memberRelation", MemberRelationMapper::GetNameForMemberRelation(m_memberRelation));
  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("conditions", std::move(conditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
