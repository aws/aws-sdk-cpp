/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaLiveChannelRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaLiveChannelRouterInputConfiguration::MediaLiveChannelRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

MediaLiveChannelRouterInputConfiguration& MediaLiveChannelRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mediaLiveChannelArn")) {
    m_mediaLiveChannelArn = jsonValue.GetString("mediaLiveChannelArn");
    m_mediaLiveChannelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaLivePipelineId")) {
    m_mediaLivePipelineId =
        MediaLiveChannelPipelineIdMapper::GetMediaLiveChannelPipelineIdForName(jsonValue.GetString("mediaLivePipelineId"));
    m_mediaLivePipelineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaLiveChannelOutputName")) {
    m_mediaLiveChannelOutputName = jsonValue.GetString("mediaLiveChannelOutputName");
    m_mediaLiveChannelOutputNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceTransitDecryption")) {
    m_sourceTransitDecryption = jsonValue.GetObject("sourceTransitDecryption");
    m_sourceTransitDecryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaLiveChannelRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_mediaLiveChannelArnHasBeenSet) {
    payload.WithString("mediaLiveChannelArn", m_mediaLiveChannelArn);
  }

  if (m_mediaLivePipelineIdHasBeenSet) {
    payload.WithString("mediaLivePipelineId",
                       MediaLiveChannelPipelineIdMapper::GetNameForMediaLiveChannelPipelineId(m_mediaLivePipelineId));
  }

  if (m_mediaLiveChannelOutputNameHasBeenSet) {
    payload.WithString("mediaLiveChannelOutputName", m_mediaLiveChannelOutputName);
  }

  if (m_sourceTransitDecryptionHasBeenSet) {
    payload.WithObject("sourceTransitDecryption", m_sourceTransitDecryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
