﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicediscovery/model/InstanceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ServiceDiscovery {
namespace Model {

InstanceSummary::InstanceSummary(JsonView jsonValue) { *this = jsonValue; }

InstanceSummary& InstanceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attributes")) {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for (auto& attributesItem : attributesJsonMap) {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedByAccount")) {
    m_createdByAccount = jsonValue.GetString("CreatedByAccount");
    m_createdByAccountHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_attributesHasBeenSet) {
    JsonValue attributesJsonMap;
    for (auto& attributesItem : m_attributes) {
      attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
    }
    payload.WithObject("Attributes", std::move(attributesJsonMap));
  }

  if (m_createdByAccountHasBeenSet) {
    payload.WithString("CreatedByAccount", m_createdByAccount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
