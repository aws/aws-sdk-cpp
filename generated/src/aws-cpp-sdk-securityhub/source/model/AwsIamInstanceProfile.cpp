/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamInstanceProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamInstanceProfile::AwsIamInstanceProfile() : 
    m_arnHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_instanceProfileIdHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

AwsIamInstanceProfile::AwsIamInstanceProfile(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_instanceProfileIdHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamInstanceProfile& AwsIamInstanceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileId"))
  {
    m_instanceProfileId = jsonValue.GetString("InstanceProfileId");

    m_instanceProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileName"))
  {
    m_instanceProfileName = jsonValue.GetString("InstanceProfileName");

    m_instanceProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Roles"))
  {
    Aws::Utils::Array<JsonView> rolesJsonList = jsonValue.GetArray("Roles");
    for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
    {
      m_roles.push_back(rolesJsonList[rolesIndex].AsObject());
    }
    m_rolesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamInstanceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  if(m_instanceProfileIdHasBeenSet)
  {
   payload.WithString("InstanceProfileId", m_instanceProfileId);

  }

  if(m_instanceProfileNameHasBeenSet)
  {
   payload.WithString("InstanceProfileName", m_instanceProfileName);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_rolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolesJsonList(m_roles.size());
   for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
   {
     rolesJsonList[rolesIndex].AsObject(m_roles[rolesIndex].Jsonize());
   }
   payload.WithArray("Roles", std::move(rolesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
