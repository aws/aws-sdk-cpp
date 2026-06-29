/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsFallbackConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsFallbackConfiguration::RcsFallbackConfiguration(JsonView jsonValue) { *this = jsonValue; }

RcsFallbackConfiguration& RcsFallbackConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Channel")) {
    m_channel = RcsFallbackChannelMapper::GetRcsFallbackChannelForName(jsonValue.GetString("Channel"));
    m_channelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MessageBody")) {
    m_messageBody = jsonValue.GetString("MessageBody");
    m_messageBodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MediaUrls")) {
    Aws::Utils::Array<JsonView> mediaUrlsJsonList = jsonValue.GetArray("MediaUrls");
    for (unsigned mediaUrlsIndex = 0; mediaUrlsIndex < mediaUrlsJsonList.GetLength(); ++mediaUrlsIndex) {
      m_mediaUrls.push_back(mediaUrlsJsonList[mediaUrlsIndex].AsString());
    }
    m_mediaUrlsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OriginationIdentity")) {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");
    m_originationIdentityHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsFallbackConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("Channel", RcsFallbackChannelMapper::GetNameForRcsFallbackChannel(m_channel));
  }

  if (m_messageBodyHasBeenSet) {
    payload.WithString("MessageBody", m_messageBody);
  }

  if (m_mediaUrlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mediaUrlsJsonList(m_mediaUrls.size());
    for (unsigned mediaUrlsIndex = 0; mediaUrlsIndex < mediaUrlsJsonList.GetLength(); ++mediaUrlsIndex) {
      mediaUrlsJsonList[mediaUrlsIndex].AsString(m_mediaUrls[mediaUrlsIndex]);
    }
    payload.WithArray("MediaUrls", std::move(mediaUrlsJsonList));
  }

  if (m_originationIdentityHasBeenSet) {
    payload.WithString("OriginationIdentity", m_originationIdentity);
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
