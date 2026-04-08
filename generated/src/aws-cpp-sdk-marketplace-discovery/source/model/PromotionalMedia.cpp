/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PromotionalMedia.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PromotionalMedia::PromotionalMedia(JsonView jsonValue) { *this = jsonValue; }

PromotionalMedia& PromotionalMedia::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("embeddedImage")) {
    m_embeddedImage = jsonValue.GetObject("embeddedImage");
    m_embeddedImageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("embeddedVideo")) {
    m_embeddedVideo = jsonValue.GetObject("embeddedVideo");
    m_embeddedVideoHasBeenSet = true;
  }
  return *this;
}

JsonValue PromotionalMedia::Jsonize() const {
  JsonValue payload;

  if (m_embeddedImageHasBeenSet) {
    payload.WithObject("embeddedImage", m_embeddedImage.Jsonize());
  }

  if (m_embeddedVideoHasBeenSet) {
    payload.WithObject("embeddedVideo", m_embeddedVideo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
