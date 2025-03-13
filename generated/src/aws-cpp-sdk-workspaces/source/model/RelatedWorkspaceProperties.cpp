/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RelatedWorkspaceProperties.h>
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

RelatedWorkspaceProperties::RelatedWorkspaceProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

RelatedWorkspaceProperties& RelatedWorkspaceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkspaceId"))
  {
    m_workspaceId = jsonValue.GetString("WorkspaceId");
    m_workspaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceStateMapper::GetWorkspaceStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = StandbyWorkspaceRelationshipTypeMapper::GetStandbyWorkspaceRelationshipTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedWorkspaceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkspaceStateMapper::GetNameForWorkspaceState(m_state));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", StandbyWorkspaceRelationshipTypeMapper::GetNameForStandbyWorkspaceRelationshipType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
