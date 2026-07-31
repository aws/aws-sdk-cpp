/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/ResolvedTargetResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

ResolvedTargetResource::ResolvedTargetResource(JsonView jsonValue) { *this = jsonValue; }

ResolvedTargetResource& ResolvedTargetResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetName")) {
    m_targetName = jsonValue.GetString("targetName");
    m_targetNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetInformation")) {
    Aws::Map<Aws::String, JsonView> targetInformationJsonMap = jsonValue.GetObject("targetInformation").GetAllObjects();
    for (auto& targetInformationItem : targetInformationJsonMap) {
      m_targetInformation[targetInformationItem.first] = targetInformationItem.second.AsString();
    }
    m_targetInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue ResolvedTargetResource::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", m_resourceType);
  }

  if (m_targetNameHasBeenSet) {
    payload.WithString("targetName", m_targetName);
  }

  if (m_targetInformationHasBeenSet) {
    JsonValue targetInformationJsonMap;
    for (auto& targetInformationItem : m_targetInformation) {
      targetInformationJsonMap.WithString(targetInformationItem.first, targetInformationItem.second);
    }
    payload.WithObject("targetInformation", std::move(targetInformationJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
