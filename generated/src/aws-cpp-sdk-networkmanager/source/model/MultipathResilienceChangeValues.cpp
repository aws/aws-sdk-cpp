/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkmanager/model/MultipathResilienceChangeValues.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {

MultipathResilienceChangeValues::MultipathResilienceChangeValues(JsonView jsonValue) { *this = jsonValue; }

MultipathResilienceChangeValues& MultipathResilienceChangeValues::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Mode")) {
    m_mode = MultipathResilienceModeMapper::GetMultipathResilienceModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EdgeSets")) {
    Aws::Utils::Array<JsonView> edgeSetsJsonList = jsonValue.GetArray("EdgeSets");
    for (unsigned edgeSetsIndex = 0; edgeSetsIndex < edgeSetsJsonList.GetLength(); ++edgeSetsIndex) {
      Aws::Utils::Array<JsonView> edgeSet2JsonList = edgeSetsJsonList[edgeSetsIndex].AsArray();
      Aws::Vector<Aws::String> edgeSet2List;
      edgeSet2List.reserve((size_t)edgeSet2JsonList.GetLength());
      for (unsigned edgeSet2Index = 0; edgeSet2Index < edgeSet2JsonList.GetLength(); ++edgeSet2Index) {
        edgeSet2List.push_back(edgeSet2JsonList[edgeSet2Index].AsString());
      }
      m_edgeSets.push_back(std::move(edgeSet2List));
    }
    m_edgeSetsHasBeenSet = true;
  }
  return *this;
}

JsonValue MultipathResilienceChangeValues::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("Mode", MultipathResilienceModeMapper::GetNameForMultipathResilienceMode(m_mode));
  }

  if (m_edgeSetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> edgeSetsJsonList(m_edgeSets.size());
    for (unsigned edgeSetsIndex = 0; edgeSetsIndex < edgeSetsJsonList.GetLength(); ++edgeSetsIndex) {
      Aws::Utils::Array<JsonValue> edgeSetJsonList(m_edgeSets[edgeSetsIndex].size());
      for (unsigned edgeSetIndex = 0; edgeSetIndex < edgeSetJsonList.GetLength(); ++edgeSetIndex) {
        edgeSetJsonList[edgeSetIndex].AsString(m_edgeSets[edgeSetsIndex][edgeSetIndex]);
      }
      edgeSetsJsonList[edgeSetsIndex].AsArray(std::move(edgeSetJsonList));
    }
    payload.WithArray("EdgeSets", std::move(edgeSetsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
