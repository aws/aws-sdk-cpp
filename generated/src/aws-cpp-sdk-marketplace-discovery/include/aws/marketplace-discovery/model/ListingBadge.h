/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListingBadgeType.h>

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
 * <p>A badge indicating a special attribute of a listing, such as free tier
 * eligibility or Quick Launch support.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListingBadge">AWS
 * API Reference</a></p>
 */
class ListingBadge {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListingBadge() = default;
  AWS_MARKETPLACEDISCOVERY_API ListingBadge(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ListingBadge& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The human-readable name of the badge.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  ListingBadge& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The machine-readable type of the badge.</p>
   */
  inline ListingBadgeType GetBadgeType() const { return m_badgeType; }
  inline bool BadgeTypeHasBeenSet() const { return m_badgeTypeHasBeenSet; }
  inline void SetBadgeType(ListingBadgeType value) {
    m_badgeTypeHasBeenSet = true;
    m_badgeType = value;
  }
  inline ListingBadge& WithBadgeType(ListingBadgeType value) {
    SetBadgeType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  ListingBadgeType m_badgeType{ListingBadgeType::NOT_SET};
  bool m_displayNameHasBeenSet = false;
  bool m_badgeTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
