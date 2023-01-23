/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModificationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ModificationState::ModificationState() : 
    m_resource(ModificationResourceEnum::NOT_SET),
    m_resourceHasBeenSet(false),
    m_state(ModificationStateEnum::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ModificationState::ModificationState(JsonView jsonValue) : 
    m_resource(ModificationResourceEnum::NOT_SET),
    m_resourceHasBeenSet(false),
    m_state(ModificationStateEnum::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ModificationState& ModificationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = ModificationResourceEnumMapper::GetModificationResourceEnumForName(jsonValue.GetString("Resource"));

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ModificationStateEnumMapper::GetModificationStateEnumForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ModificationState::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", ModificationResourceEnumMapper::GetNameForModificationResourceEnum(m_resource));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ModificationStateEnumMapper::GetNameForModificationStateEnum(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
