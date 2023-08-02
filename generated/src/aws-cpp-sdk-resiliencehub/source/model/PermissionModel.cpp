/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PermissionModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

PermissionModel::PermissionModel() : 
    m_crossAccountRoleArnsHasBeenSet(false),
    m_invokerRoleNameHasBeenSet(false),
    m_type(PermissionModelType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

PermissionModel::PermissionModel(JsonView jsonValue) : 
    m_crossAccountRoleArnsHasBeenSet(false),
    m_invokerRoleNameHasBeenSet(false),
    m_type(PermissionModelType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionModel& PermissionModel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crossAccountRoleArns"))
  {
    Aws::Utils::Array<JsonView> crossAccountRoleArnsJsonList = jsonValue.GetArray("crossAccountRoleArns");
    for(unsigned crossAccountRoleArnsIndex = 0; crossAccountRoleArnsIndex < crossAccountRoleArnsJsonList.GetLength(); ++crossAccountRoleArnsIndex)
    {
      m_crossAccountRoleArns.push_back(crossAccountRoleArnsJsonList[crossAccountRoleArnsIndex].AsString());
    }
    m_crossAccountRoleArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invokerRoleName"))
  {
    m_invokerRoleName = jsonValue.GetString("invokerRoleName");

    m_invokerRoleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = PermissionModelTypeMapper::GetPermissionModelTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionModel::Jsonize() const
{
  JsonValue payload;

  if(m_crossAccountRoleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossAccountRoleArnsJsonList(m_crossAccountRoleArns.size());
   for(unsigned crossAccountRoleArnsIndex = 0; crossAccountRoleArnsIndex < crossAccountRoleArnsJsonList.GetLength(); ++crossAccountRoleArnsIndex)
   {
     crossAccountRoleArnsJsonList[crossAccountRoleArnsIndex].AsString(m_crossAccountRoleArns[crossAccountRoleArnsIndex]);
   }
   payload.WithArray("crossAccountRoleArns", std::move(crossAccountRoleArnsJsonList));

  }

  if(m_invokerRoleNameHasBeenSet)
  {
   payload.WithString("invokerRoleName", m_invokerRoleName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PermissionModelTypeMapper::GetNameForPermissionModelType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
