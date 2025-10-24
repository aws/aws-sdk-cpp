﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resource-explorer-2/model/SupportedResourceType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {

SupportedResourceType::SupportedResourceType(JsonView jsonValue) { *this = jsonValue; }

SupportedResourceType& SupportedResourceType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportedResourceType::Jsonize() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
