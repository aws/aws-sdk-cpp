/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

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
 * <p>Summary information about a product, including the identifier, name, and
 * manufacturer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ProductInformation">AWS
 * API Reference</a></p>
 */
class ProductInformation {
 public:
  AWS_MARKETPLACEDISCOVERY_API ProductInformation() = default;
  AWS_MARKETPLACEDISCOVERY_API ProductInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ProductInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the product.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  ProductInformation& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable display name of the product.</p>
   */
  inline const Aws::String& GetProductName() const { return m_productName; }
  inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
  template <typename ProductNameT = Aws::String>
  void SetProductName(ProductNameT&& value) {
    m_productNameHasBeenSet = true;
    m_productName = std::forward<ProductNameT>(value);
  }
  template <typename ProductNameT = Aws::String>
  ProductInformation& WithProductName(ProductNameT&& value) {
    SetProductName(std::forward<ProductNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity who manufactured the product.</p>
   */
  inline const SellerInformation& GetManufacturer() const { return m_manufacturer; }
  inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }
  template <typename ManufacturerT = SellerInformation>
  void SetManufacturer(ManufacturerT&& value) {
    m_manufacturerHasBeenSet = true;
    m_manufacturer = std::forward<ManufacturerT>(value);
  }
  template <typename ManufacturerT = SellerInformation>
  ProductInformation& WithManufacturer(ManufacturerT&& value) {
    SetManufacturer(std::forward<ManufacturerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productName;

  SellerInformation m_manufacturer;
  bool m_productIdHasBeenSet = false;
  bool m_productNameHasBeenSet = false;
  bool m_manufacturerHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
