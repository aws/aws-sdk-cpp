/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/PromotionalEmbeddedImage.h>
#include <aws/marketplace-discovery/model/PromotionalEmbeddedVideo.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Embedded promotional media for a product, such as images or videos. Each
 * element contains exactly one media type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PromotionalMedia">AWS
 * API Reference</a></p>
 */
class PromotionalMedia {
 public:
  AWS_MARKETPLACEDISCOVERY_API PromotionalMedia() = default;
  AWS_MARKETPLACEDISCOVERY_API PromotionalMedia(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PromotionalMedia& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const PromotionalEmbeddedImage& GetEmbeddedImage() const { return m_embeddedImage; }
  inline bool EmbeddedImageHasBeenSet() const { return m_embeddedImageHasBeenSet; }
  template <typename EmbeddedImageT = PromotionalEmbeddedImage>
  void SetEmbeddedImage(EmbeddedImageT&& value) {
    m_embeddedImageHasBeenSet = true;
    m_embeddedImage = std::forward<EmbeddedImageT>(value);
  }
  template <typename EmbeddedImageT = PromotionalEmbeddedImage>
  PromotionalMedia& WithEmbeddedImage(EmbeddedImageT&& value) {
    SetEmbeddedImage(std::forward<EmbeddedImageT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PromotionalEmbeddedVideo& GetEmbeddedVideo() const { return m_embeddedVideo; }
  inline bool EmbeddedVideoHasBeenSet() const { return m_embeddedVideoHasBeenSet; }
  template <typename EmbeddedVideoT = PromotionalEmbeddedVideo>
  void SetEmbeddedVideo(EmbeddedVideoT&& value) {
    m_embeddedVideoHasBeenSet = true;
    m_embeddedVideo = std::forward<EmbeddedVideoT>(value);
  }
  template <typename EmbeddedVideoT = PromotionalEmbeddedVideo>
  PromotionalMedia& WithEmbeddedVideo(EmbeddedVideoT&& value) {
    SetEmbeddedVideo(std::forward<EmbeddedVideoT>(value));
    return *this;
  }
  ///@}
 private:
  PromotionalEmbeddedImage m_embeddedImage;

  PromotionalEmbeddedVideo m_embeddedVideo;
  bool m_embeddedImageHasBeenSet = false;
  bool m_embeddedVideoHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
