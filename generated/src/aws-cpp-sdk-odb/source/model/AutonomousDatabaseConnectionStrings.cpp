/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AutonomousDatabaseConnectionStrings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AutonomousDatabaseConnectionStrings::AutonomousDatabaseConnectionStrings(JsonView jsonValue) { *this = jsonValue; }

AutonomousDatabaseConnectionStrings& AutonomousDatabaseConnectionStrings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allConnectionStrings")) {
    Aws::Map<Aws::String, JsonView> allConnectionStringsJsonMap = jsonValue.GetObject("allConnectionStrings").GetAllObjects();
    for (auto& allConnectionStringsItem : allConnectionStringsJsonMap) {
      m_allConnectionStrings[allConnectionStringsItem.first] = allConnectionStringsItem.second.AsString();
    }
    m_allConnectionStringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dedicated")) {
    m_dedicated = jsonValue.GetString("dedicated");
    m_dedicatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("high")) {
    m_high = jsonValue.GetString("high");
    m_highHasBeenSet = true;
  }
  if (jsonValue.ValueExists("medium")) {
    m_medium = jsonValue.GetString("medium");
    m_mediumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("low")) {
    m_low = jsonValue.GetString("low");
    m_lowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profiles")) {
    Aws::Utils::Array<JsonView> profilesJsonList = jsonValue.GetArray("profiles");
    for (unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex) {
      m_profiles.push_back(profilesJsonList[profilesIndex].AsObject());
    }
    m_profilesHasBeenSet = true;
  }
  return *this;
}

JsonValue AutonomousDatabaseConnectionStrings::Jsonize() const {
  JsonValue payload;

  if (m_allConnectionStringsHasBeenSet) {
    JsonValue allConnectionStringsJsonMap;
    for (auto& allConnectionStringsItem : m_allConnectionStrings) {
      allConnectionStringsJsonMap.WithString(allConnectionStringsItem.first, allConnectionStringsItem.second);
    }
    payload.WithObject("allConnectionStrings", std::move(allConnectionStringsJsonMap));
  }

  if (m_dedicatedHasBeenSet) {
    payload.WithString("dedicated", m_dedicated);
  }

  if (m_highHasBeenSet) {
    payload.WithString("high", m_high);
  }

  if (m_mediumHasBeenSet) {
    payload.WithString("medium", m_medium);
  }

  if (m_lowHasBeenSet) {
    payload.WithString("low", m_low);
  }

  if (m_profilesHasBeenSet) {
    Aws::Utils::Array<JsonValue> profilesJsonList(m_profiles.size());
    for (unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex) {
      profilesJsonList[profilesIndex].AsObject(m_profiles[profilesIndex].Jsonize());
    }
    payload.WithArray("profiles", std::move(profilesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
