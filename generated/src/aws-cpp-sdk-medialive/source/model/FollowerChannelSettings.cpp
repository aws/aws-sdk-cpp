/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/FollowerChannelSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

FollowerChannelSettings::FollowerChannelSettings(JsonView jsonValue) { *this = jsonValue; }

FollowerChannelSettings& FollowerChannelSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("linkedChannelType")) {
    m_linkedChannelType = LinkedChannelTypeMapper::GetLinkedChannelTypeForName(jsonValue.GetString("linkedChannelType"));
    m_linkedChannelTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryChannelArn")) {
    m_primaryChannelArn = jsonValue.GetString("primaryChannelArn");
    m_primaryChannelArnHasBeenSet = true;
  }
  return *this;
}

JsonValue FollowerChannelSettings::Jsonize() const {
  JsonValue payload;

  if (m_linkedChannelTypeHasBeenSet) {
    payload.WithString("linkedChannelType", LinkedChannelTypeMapper::GetNameForLinkedChannelType(m_linkedChannelType));
  }

  if (m_primaryChannelArnHasBeenSet) {
    payload.WithString("primaryChannelArn", m_primaryChannelArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
