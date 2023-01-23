/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IAMPolicyAssignment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

IAMPolicyAssignment::IAMPolicyAssignment() : 
    m_awsAccountIdHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_assignmentNameHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_identitiesHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false)
{
}

IAMPolicyAssignment::IAMPolicyAssignment(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_assignmentIdHasBeenSet(false),
    m_assignmentNameHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_identitiesHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

IAMPolicyAssignment& IAMPolicyAssignment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentId"))
  {
    m_assignmentId = jsonValue.GetString("AssignmentId");

    m_assignmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentName"))
  {
    m_assignmentName = jsonValue.GetString("AssignmentName");

    m_assignmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identities"))
  {
    Aws::Map<Aws::String, JsonView> identitiesJsonMap = jsonValue.GetObject("Identities").GetAllObjects();
    for(auto& identitiesItem : identitiesJsonMap)
    {
      Aws::Utils::Array<JsonView> identityNameListJsonList = identitiesItem.second.AsArray();
      Aws::Vector<Aws::String> identityNameListList;
      identityNameListList.reserve((size_t)identityNameListJsonList.GetLength());
      for(unsigned identityNameListIndex = 0; identityNameListIndex < identityNameListJsonList.GetLength(); ++identityNameListIndex)
      {
        identityNameListList.push_back(identityNameListJsonList[identityNameListIndex].AsString());
      }
      m_identities[identitiesItem.first] = std::move(identityNameListList);
    }
    m_identitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentStatus"))
  {
    m_assignmentStatus = AssignmentStatusMapper::GetAssignmentStatusForName(jsonValue.GetString("AssignmentStatus"));

    m_assignmentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue IAMPolicyAssignment::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_assignmentNameHasBeenSet)
  {
   payload.WithString("AssignmentName", m_assignmentName);

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  if(m_identitiesHasBeenSet)
  {
   JsonValue identitiesJsonMap;
   for(auto& identitiesItem : m_identities)
   {
     Aws::Utils::Array<JsonValue> identityNameListJsonList(identitiesItem.second.size());
     for(unsigned identityNameListIndex = 0; identityNameListIndex < identityNameListJsonList.GetLength(); ++identityNameListIndex)
     {
       identityNameListJsonList[identityNameListIndex].AsString(identitiesItem.second[identityNameListIndex]);
     }
     identitiesJsonMap.WithArray(identitiesItem.first, std::move(identityNameListJsonList));
   }
   payload.WithObject("Identities", std::move(identitiesJsonMap));

  }

  if(m_assignmentStatusHasBeenSet)
  {
   payload.WithString("AssignmentStatus", AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
