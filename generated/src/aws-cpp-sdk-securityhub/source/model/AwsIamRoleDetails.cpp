/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamRoleDetails.h>
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

AwsIamRoleDetails::AwsIamRoleDetails() : 
    m_assumeRolePolicyDocumentHasBeenSet(false),
    m_attachedManagedPoliciesHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_instanceProfileListHasBeenSet(false),
    m_permissionsBoundaryHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_rolePolicyListHasBeenSet(false),
    m_maxSessionDuration(0),
    m_maxSessionDurationHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

AwsIamRoleDetails::AwsIamRoleDetails(JsonView jsonValue) : 
    m_assumeRolePolicyDocumentHasBeenSet(false),
    m_attachedManagedPoliciesHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_instanceProfileListHasBeenSet(false),
    m_permissionsBoundaryHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_rolePolicyListHasBeenSet(false),
    m_maxSessionDuration(0),
    m_maxSessionDurationHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamRoleDetails& AwsIamRoleDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssumeRolePolicyDocument"))
  {
    m_assumeRolePolicyDocument = jsonValue.GetString("AssumeRolePolicyDocument");

    m_assumeRolePolicyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachedManagedPolicies"))
  {
    Aws::Utils::Array<JsonView> attachedManagedPoliciesJsonList = jsonValue.GetArray("AttachedManagedPolicies");
    for(unsigned attachedManagedPoliciesIndex = 0; attachedManagedPoliciesIndex < attachedManagedPoliciesJsonList.GetLength(); ++attachedManagedPoliciesIndex)
    {
      m_attachedManagedPolicies.push_back(attachedManagedPoliciesJsonList[attachedManagedPoliciesIndex].AsObject());
    }
    m_attachedManagedPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetString("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileList"))
  {
    Aws::Utils::Array<JsonView> instanceProfileListJsonList = jsonValue.GetArray("InstanceProfileList");
    for(unsigned instanceProfileListIndex = 0; instanceProfileListIndex < instanceProfileListJsonList.GetLength(); ++instanceProfileListIndex)
    {
      m_instanceProfileList.push_back(instanceProfileListJsonList[instanceProfileListIndex].AsObject());
    }
    m_instanceProfileListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionsBoundary"))
  {
    m_permissionsBoundary = jsonValue.GetObject("PermissionsBoundary");

    m_permissionsBoundaryHasBeenSet = true;
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

  if(jsonValue.ValueExists("RolePolicyList"))
  {
    Aws::Utils::Array<JsonView> rolePolicyListJsonList = jsonValue.GetArray("RolePolicyList");
    for(unsigned rolePolicyListIndex = 0; rolePolicyListIndex < rolePolicyListJsonList.GetLength(); ++rolePolicyListIndex)
    {
      m_rolePolicyList.push_back(rolePolicyListJsonList[rolePolicyListIndex].AsObject());
    }
    m_rolePolicyListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxSessionDuration"))
  {
    m_maxSessionDuration = jsonValue.GetInteger("MaxSessionDuration");

    m_maxSessionDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamRoleDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assumeRolePolicyDocumentHasBeenSet)
  {
   payload.WithString("AssumeRolePolicyDocument", m_assumeRolePolicyDocument);

  }

  if(m_attachedManagedPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachedManagedPoliciesJsonList(m_attachedManagedPolicies.size());
   for(unsigned attachedManagedPoliciesIndex = 0; attachedManagedPoliciesIndex < attachedManagedPoliciesJsonList.GetLength(); ++attachedManagedPoliciesIndex)
   {
     attachedManagedPoliciesJsonList[attachedManagedPoliciesIndex].AsObject(m_attachedManagedPolicies[attachedManagedPoliciesIndex].Jsonize());
   }
   payload.WithArray("AttachedManagedPolicies", std::move(attachedManagedPoliciesJsonList));

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithString("CreateDate", m_createDate);

  }

  if(m_instanceProfileListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceProfileListJsonList(m_instanceProfileList.size());
   for(unsigned instanceProfileListIndex = 0; instanceProfileListIndex < instanceProfileListJsonList.GetLength(); ++instanceProfileListIndex)
   {
     instanceProfileListJsonList[instanceProfileListIndex].AsObject(m_instanceProfileList[instanceProfileListIndex].Jsonize());
   }
   payload.WithArray("InstanceProfileList", std::move(instanceProfileListJsonList));

  }

  if(m_permissionsBoundaryHasBeenSet)
  {
   payload.WithObject("PermissionsBoundary", m_permissionsBoundary.Jsonize());

  }

  if(m_roleIdHasBeenSet)
  {
   payload.WithString("RoleId", m_roleId);

  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("RoleName", m_roleName);

  }

  if(m_rolePolicyListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolePolicyListJsonList(m_rolePolicyList.size());
   for(unsigned rolePolicyListIndex = 0; rolePolicyListIndex < rolePolicyListJsonList.GetLength(); ++rolePolicyListIndex)
   {
     rolePolicyListJsonList[rolePolicyListIndex].AsObject(m_rolePolicyList[rolePolicyListIndex].Jsonize());
   }
   payload.WithArray("RolePolicyList", std::move(rolePolicyListJsonList));

  }

  if(m_maxSessionDurationHasBeenSet)
  {
   payload.WithInteger("MaxSessionDuration", m_maxSessionDuration);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
