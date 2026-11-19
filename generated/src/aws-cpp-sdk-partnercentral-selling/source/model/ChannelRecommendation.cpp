/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/ChannelRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

ChannelRecommendation::ChannelRecommendation(JsonView jsonValue) { *this = jsonValue; }

ChannelRecommendation& ChannelRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommendedChannel")) {
    m_recommendedChannel = jsonValue.GetString("RecommendedChannel");
    m_recommendedChannelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BestOutreachWindows")) {
    Aws::Utils::Array<JsonView> bestOutreachWindowsJsonList = jsonValue.GetArray("BestOutreachWindows");
    for (unsigned bestOutreachWindowsIndex = 0; bestOutreachWindowsIndex < bestOutreachWindowsJsonList.GetLength();
         ++bestOutreachWindowsIndex) {
      m_bestOutreachWindows.push_back(bestOutreachWindowsJsonList[bestOutreachWindowsIndex].AsObject());
    }
    m_bestOutreachWindowsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_recommendedChannelHasBeenSet) {
    payload.WithString("RecommendedChannel", m_recommendedChannel);
  }

  if (m_bestOutreachWindowsHasBeenSet) {
    Aws::Utils::Array<JsonValue> bestOutreachWindowsJsonList(m_bestOutreachWindows.size());
    for (unsigned bestOutreachWindowsIndex = 0; bestOutreachWindowsIndex < bestOutreachWindowsJsonList.GetLength();
         ++bestOutreachWindowsIndex) {
      bestOutreachWindowsJsonList[bestOutreachWindowsIndex].AsObject(m_bestOutreachWindows[bestOutreachWindowsIndex].Jsonize());
    }
    payload.WithArray("BestOutreachWindows", std::move(bestOutreachWindowsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
