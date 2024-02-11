/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PutGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutGroupRequest::PutGroupRequest() : 
    m_applicationIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_groupMembersHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_type(MembershipType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String PutGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_groupMembersHasBeenSet)
  {
   payload.WithObject("groupMembers", m_groupMembers.Jsonize());

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MembershipTypeMapper::GetNameForMembershipType(m_type));
  }

  return payload.View().WriteReadable();
}




