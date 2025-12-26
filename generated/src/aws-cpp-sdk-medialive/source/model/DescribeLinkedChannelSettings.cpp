/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/DescribeLinkedChannelSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

DescribeLinkedChannelSettings::DescribeLinkedChannelSettings(JsonView jsonValue) { *this = jsonValue; }

DescribeLinkedChannelSettings& DescribeLinkedChannelSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("followerChannelSettings")) {
    m_followerChannelSettings = jsonValue.GetObject("followerChannelSettings");
    m_followerChannelSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryChannelSettings")) {
    m_primaryChannelSettings = jsonValue.GetObject("primaryChannelSettings");
    m_primaryChannelSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribeLinkedChannelSettings::Jsonize() const {
  JsonValue payload;

  if (m_followerChannelSettingsHasBeenSet) {
    payload.WithObject("followerChannelSettings", m_followerChannelSettings.Jsonize());
  }

  if (m_primaryChannelSettingsHasBeenSet) {
    payload.WithObject("primaryChannelSettings", m_primaryChannelSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
