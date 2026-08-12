/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDescribeUserLimitsRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDescribeUserLimitsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_usersHasBeenSet) {
    Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
    for (unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex) {
      usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
    }
    payload.WithArray("users", std::move(usersJsonList));
  }

  if (m_resourceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
    for (unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex) {
      resourceTypesJsonList[resourceTypesIndex].AsString(ResourceTypeMapper::GetNameForResourceType(m_resourceTypes[resourceTypesIndex]));
    }
    payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));
  }

  return payload.View().WriteReadable();
}
