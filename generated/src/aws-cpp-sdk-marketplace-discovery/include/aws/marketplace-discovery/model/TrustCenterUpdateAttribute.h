/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>An update that a trust center publishes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterUpdateAttribute">AWS
 * API Reference</a></p>
 */
class TrustCenterUpdateAttribute {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterUpdateAttribute() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterUpdateAttribute(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterUpdateAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The update title.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  TrustCenterUpdateAttribute& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The update description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TrustCenterUpdateAttribute& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the update was published.</p>
   */
  inline const Aws::Utils::DateTime& GetPublishedTime() const { return m_publishedTime; }
  inline bool PublishedTimeHasBeenSet() const { return m_publishedTimeHasBeenSet; }
  template <typename PublishedTimeT = Aws::Utils::DateTime>
  void SetPublishedTime(PublishedTimeT&& value) {
    m_publishedTimeHasBeenSet = true;
    m_publishedTime = std::forward<PublishedTimeT>(value);
  }
  template <typename PublishedTimeT = Aws::Utils::DateTime>
  TrustCenterUpdateAttribute& WithPublishedTime(PublishedTimeT&& value) {
    SetPublishedTime(std::forward<PublishedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_description;

  Aws::Utils::DateTime m_publishedTime{};
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_publishedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
