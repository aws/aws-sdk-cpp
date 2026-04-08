/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/PromotionalEmbeddedVideo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

PromotionalEmbeddedVideo::PromotionalEmbeddedVideo(JsonView jsonValue) { *this = jsonValue; }

PromotionalEmbeddedVideo& PromotionalEmbeddedVideo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("url")) {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preview")) {
    m_preview = jsonValue.GetString("preview");
    m_previewHasBeenSet = true;
  }
  if (jsonValue.ValueExists("thumbnail")) {
    m_thumbnail = jsonValue.GetString("thumbnail");
    m_thumbnailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue PromotionalEmbeddedVideo::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_urlHasBeenSet) {
    payload.WithString("url", m_url);
  }

  if (m_previewHasBeenSet) {
    payload.WithString("preview", m_preview);
  }

  if (m_thumbnailHasBeenSet) {
    payload.WithString("thumbnail", m_thumbnail);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
