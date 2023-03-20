/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SearchPrincipalType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

SearchPrincipalType::SearchPrincipalType() : 
    m_idHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

SearchPrincipalType::SearchPrincipalType(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
  *this = jsonValue;
}

SearchPrincipalType& SearchPrincipalType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Roles"))
  {
    Aws::Utils::Array<JsonView> rolesJsonList = jsonValue.GetArray("Roles");
    for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
    {
      m_roles.push_back(PrincipalRoleTypeMapper::GetPrincipalRoleTypeForName(rolesJsonList[rolesIndex].AsString()));
    }
    m_rolesHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchPrincipalType::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_rolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolesJsonList(m_roles.size());
   for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
   {
     rolesJsonList[rolesIndex].AsString(PrincipalRoleTypeMapper::GetNameForPrincipalRoleType(m_roles[rolesIndex]));
   }
   payload.WithArray("Roles", std::move(rolesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
