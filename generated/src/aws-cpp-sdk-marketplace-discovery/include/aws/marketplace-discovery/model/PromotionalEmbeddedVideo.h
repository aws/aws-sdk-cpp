/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

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
 * <p>An embedded promotional video for a product.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/PromotionalEmbeddedVideo">AWS
 * API Reference</a></p>
 */
class PromotionalEmbeddedVideo {
 public:
  AWS_MARKETPLACEDISCOVERY_API PromotionalEmbeddedVideo() = default;
  AWS_MARKETPLACEDISCOVERY_API PromotionalEmbeddedVideo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API PromotionalEmbeddedVideo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title displayed when hovering over the video.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  PromotionalEmbeddedVideo& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the video file.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  PromotionalEmbeddedVideo& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the high-resolution preview image for the video.</p>
   */
  inline const Aws::String& GetPreview() const { return m_preview; }
  inline bool PreviewHasBeenSet() const { return m_previewHasBeenSet; }
  template <typename PreviewT = Aws::String>
  void SetPreview(PreviewT&& value) {
    m_previewHasBeenSet = true;
    m_preview = std::forward<PreviewT>(value);
  }
  template <typename PreviewT = Aws::String>
  PromotionalEmbeddedVideo& WithPreview(PreviewT&& value) {
    SetPreview(std::forward<PreviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the thumbnail image for the video.</p>
   */
  inline const Aws::String& GetThumbnail() const { return m_thumbnail; }
  inline bool ThumbnailHasBeenSet() const { return m_thumbnailHasBeenSet; }
  template <typename ThumbnailT = Aws::String>
  void SetThumbnail(ThumbnailT&& value) {
    m_thumbnailHasBeenSet = true;
    m_thumbnail = std::forward<ThumbnailT>(value);
  }
  template <typename ThumbnailT = Aws::String>
  PromotionalEmbeddedVideo& WithThumbnail(ThumbnailT&& value) {
    SetThumbnail(std::forward<ThumbnailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description of the video.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PromotionalEmbeddedVideo& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_url;

  Aws::String m_preview;

  Aws::String m_thumbnail;

  Aws::String m_description;
  bool m_titleHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_previewHasBeenSet = false;
  bool m_thumbnailHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
