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
 * <p>Information about a seller, including the profile identifier and display
 * name.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SellerInformation">AWS
 * API Reference</a></p>
 */
class SellerInformation {
 public:
  AWS_MARKETPLACEDISCOVERY_API SellerInformation() = default;
  AWS_MARKETPLACEDISCOVERY_API SellerInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SellerInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the seller profile.</p>
   */
  inline const Aws::String& GetSellerProfileId() const { return m_sellerProfileId; }
  inline bool SellerProfileIdHasBeenSet() const { return m_sellerProfileIdHasBeenSet; }
  template <typename SellerProfileIdT = Aws::String>
  void SetSellerProfileId(SellerProfileIdT&& value) {
    m_sellerProfileIdHasBeenSet = true;
    m_sellerProfileId = std::forward<SellerProfileIdT>(value);
  }
  template <typename SellerProfileIdT = Aws::String>
  SellerInformation& WithSellerProfileId(SellerProfileIdT&& value) {
    SetSellerProfileId(std::forward<SellerProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the seller.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  SellerInformation& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sellerProfileId;

  Aws::String m_displayName;
  bool m_sellerProfileIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
