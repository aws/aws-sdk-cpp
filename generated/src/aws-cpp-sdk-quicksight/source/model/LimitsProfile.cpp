/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/LimitsProfile.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

LimitsProfile::LimitsProfile(JsonView jsonValue) { *this = jsonValue; }

LimitsProfile& LimitsProfile::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("profileId")) {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileName")) {
    m_profileName = jsonValue.GetString("profileName");
    m_profileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceLimits")) {
    Aws::Map<Aws::String, JsonView> resourceLimitsJsonMap = jsonValue.GetObject("resourceLimits").GetAllObjects();
    for (auto& resourceLimitsItem : resourceLimitsJsonMap) {
      m_resourceLimits[ResourceTypeMapper::GetResourceTypeForName(resourceLimitsItem.first)] = resourceLimitsItem.second.AsObject();
    }
    m_resourceLimitsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitsProfile::Jsonize() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("profileId", m_profileId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_profileNameHasBeenSet) {
    payload.WithString("profileName", m_profileName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_resourceLimitsHasBeenSet) {
    JsonValue resourceLimitsJsonMap;
    for (auto& resourceLimitsItem : m_resourceLimits) {
      resourceLimitsJsonMap.WithObject(ResourceTypeMapper::GetNameForResourceType(resourceLimitsItem.first),
                                       resourceLimitsItem.second.Jsonize());
    }
    payload.WithObject("resourceLimits", std::move(resourceLimitsJsonMap));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
