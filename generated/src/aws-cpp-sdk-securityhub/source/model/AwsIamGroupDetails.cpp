/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamGroupDetails.h>
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

AwsIamGroupDetails::AwsIamGroupDetails() : 
    m_attachedManagedPoliciesHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupPolicyListHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

AwsIamGroupDetails::AwsIamGroupDetails(JsonView jsonValue) : 
    m_attachedManagedPoliciesHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupPolicyListHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamGroupDetails& AwsIamGroupDetails::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupPolicyList"))
  {
    Aws::Utils::Array<JsonView> groupPolicyListJsonList = jsonValue.GetArray("GroupPolicyList");
    for(unsigned groupPolicyListIndex = 0; groupPolicyListIndex < groupPolicyListJsonList.GetLength(); ++groupPolicyListIndex)
    {
      m_groupPolicyList.push_back(groupPolicyListJsonList[groupPolicyListIndex].AsObject());
    }
    m_groupPolicyListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamGroupDetails::Jsonize() const
{
  JsonValue payload;

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

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_groupPolicyListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupPolicyListJsonList(m_groupPolicyList.size());
   for(unsigned groupPolicyListIndex = 0; groupPolicyListIndex < groupPolicyListJsonList.GetLength(); ++groupPolicyListIndex)
   {
     groupPolicyListJsonList[groupPolicyListIndex].AsObject(m_groupPolicyList[groupPolicyListIndex].Jsonize());
   }
   payload.WithArray("GroupPolicyList", std::move(groupPolicyListJsonList));

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
