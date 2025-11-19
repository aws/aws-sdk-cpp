/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaLiveInputRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaLiveInputRouterOutputConfiguration::MediaLiveInputRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

MediaLiveInputRouterOutputConfiguration& MediaLiveInputRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mediaLiveInputArn")) {
    m_mediaLiveInputArn = jsonValue.GetString("mediaLiveInputArn");
    m_mediaLiveInputArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaLivePipelineId")) {
    m_mediaLivePipelineId = MediaLiveInputPipelineIdMapper::GetMediaLiveInputPipelineIdForName(jsonValue.GetString("mediaLivePipelineId"));
    m_mediaLivePipelineIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTransitEncryption")) {
    m_destinationTransitEncryption = jsonValue.GetObject("destinationTransitEncryption");
    m_destinationTransitEncryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaLiveInputRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_mediaLiveInputArnHasBeenSet) {
    payload.WithString("mediaLiveInputArn", m_mediaLiveInputArn);
  }

  if (m_mediaLivePipelineIdHasBeenSet) {
    payload.WithString("mediaLivePipelineId", MediaLiveInputPipelineIdMapper::GetNameForMediaLiveInputPipelineId(m_mediaLivePipelineId));
  }

  if (m_destinationTransitEncryptionHasBeenSet) {
    payload.WithObject("destinationTransitEncryption", m_destinationTransitEncryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
