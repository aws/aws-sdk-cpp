/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamInstanceProfileRole.h>
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

AwsIamInstanceProfileRole::AwsIamInstanceProfileRole() : 
    m_arnHasBeenSet(false),
    m_assumeRolePolicyDocumentHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

AwsIamInstanceProfileRole::AwsIamInstanceProfileRole(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_assumeRolePolicyDocumentHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamInstanceProfileRole& AwsIamInstanceProfileRole::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssumeRolePolicyDocument"))
  {
    m_assumeRolePolicyDocument = jsonValue.GetString("AssumeRolePolicyDocument");

    m_assumeRolePolicyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleId"))
  {
    m_roleId = jsonValue.GetString("RoleId");

    m_roleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleName"))
  {
    m_roleName = jsonValue.GetString("RoleName");

    m_roleNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamInstanceProfileRole::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_assumeRolePolicyDocumentHasBeenSet)
  {
   payload.WithString("AssumeRolePolicyDocument", m_assumeRolePolicyDocument);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_roleIdHasBeenSet)
  {
   payload.WithString("RoleId", m_roleId);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("RoleName", m_roleName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
