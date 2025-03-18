﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userAliasesToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAliasesToUpdateJsonList(m_userAliasesToUpdate.size());
   for(unsigned userAliasesToUpdateIndex = 0; userAliasesToUpdateIndex < userAliasesToUpdateJsonList.GetLength(); ++userAliasesToUpdateIndex)
   {
     userAliasesToUpdateJsonList[userAliasesToUpdateIndex].AsObject(m_userAliasesToUpdate[userAliasesToUpdateIndex].Jsonize());
   }
   payload.WithArray("userAliasesToUpdate", std::move(userAliasesToUpdateJsonList));

  }

  if(m_userAliasesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAliasesToDeleteJsonList(m_userAliasesToDelete.size());
   for(unsigned userAliasesToDeleteIndex = 0; userAliasesToDeleteIndex < userAliasesToDeleteJsonList.GetLength(); ++userAliasesToDeleteIndex)
   {
     userAliasesToDeleteJsonList[userAliasesToDeleteIndex].AsObject(m_userAliasesToDelete[userAliasesToDeleteIndex].Jsonize());
   }
   payload.WithArray("userAliasesToDelete", std::move(userAliasesToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}




