/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/DescribePrimaryChannelSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

DescribePrimaryChannelSettings::DescribePrimaryChannelSettings(JsonView jsonValue) { *this = jsonValue; }

DescribePrimaryChannelSettings& DescribePrimaryChannelSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("followingChannelArns")) {
    Aws::Utils::Array<JsonView> followingChannelArnsJsonList = jsonValue.GetArray("followingChannelArns");
    for (unsigned followingChannelArnsIndex = 0; followingChannelArnsIndex < followingChannelArnsJsonList.GetLength();
         ++followingChannelArnsIndex) {
      m_followingChannelArns.push_back(followingChannelArnsJsonList[followingChannelArnsIndex].AsString());
    }
    m_followingChannelArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("linkedChannelType")) {
    m_linkedChannelType = LinkedChannelTypeMapper::GetLinkedChannelTypeForName(jsonValue.GetString("linkedChannelType"));
    m_linkedChannelTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribePrimaryChannelSettings::Jsonize() const {
  JsonValue payload;

  if (m_followingChannelArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> followingChannelArnsJsonList(m_followingChannelArns.size());
    for (unsigned followingChannelArnsIndex = 0; followingChannelArnsIndex < followingChannelArnsJsonList.GetLength();
         ++followingChannelArnsIndex) {
      followingChannelArnsJsonList[followingChannelArnsIndex].AsString(m_followingChannelArns[followingChannelArnsIndex]);
    }
    payload.WithArray("followingChannelArns", std::move(followingChannelArnsJsonList));
  }

  if (m_linkedChannelTypeHasBeenSet) {
    payload.WithString("linkedChannelType", LinkedChannelTypeMapper::GetNameForLinkedChannelType(m_linkedChannelType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
