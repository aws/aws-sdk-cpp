/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInputDestinationEndpointAssociatedResourceDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInputDestinationEndpointAssociatedResourceDetails::RouterInputDestinationEndpointAssociatedResourceDetails(JsonView jsonValue) {
  *this = jsonValue;
}

RouterInputDestinationEndpointAssociatedResourceDetails& RouterInputDestinationEndpointAssociatedResourceDetails::operator=(
    JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maximumBitrate")) {
    m_maximumBitrate = jsonValue.GetInt64("maximumBitrate");
    m_maximumBitrateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RouterInputStateMapper::GetRouterInputStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messages")) {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInputDestinationEndpointAssociatedResourceDetails::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_maximumBitrateHasBeenSet) {
    payload.WithInt64("maximumBitrate", m_maximumBitrate);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", RouterInputStateMapper::GetNameForRouterInputState(m_state));
  }

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
    }
    payload.WithArray("messages", std::move(messagesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
