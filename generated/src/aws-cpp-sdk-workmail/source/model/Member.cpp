/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMail
{
namespace Model
{

Member::Member() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(MemberType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(EntityState::NOT_SET),
    m_stateHasBeenSet(false),
    m_enabledDateHasBeenSet(false),
    m_disabledDateHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(MemberType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(EntityState::NOT_SET),
    m_stateHasBeenSet(false),
    m_enabledDateHasBeenSet(false),
    m_disabledDateHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = MemberTypeMapper::GetMemberTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");

    m_enabledDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");

    m_disabledDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MemberTypeMapper::GetNameForMemberType(m_type));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", EntityStateMapper::GetNameForEntityState(m_state));
  }

  if(m_enabledDateHasBeenSet)
  {
   payload.WithDouble("EnabledDate", m_enabledDate.SecondsWithMSPrecision());
  }

  if(m_disabledDateHasBeenSet)
  {
   payload.WithDouble("DisabledDate", m_disabledDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkMail
} // namespace Aws
