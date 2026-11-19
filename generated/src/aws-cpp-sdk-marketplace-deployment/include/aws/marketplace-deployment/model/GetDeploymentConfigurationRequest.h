/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentRequest.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/DeliveryOptionType.h>

#include <utility>

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {

/**
 */
class GetDeploymentConfigurationRequest : public MarketplaceDeploymentRequest {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API GetDeploymentConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDeploymentConfiguration"; }

  AWS_MARKETPLACEDEPLOYMENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
   * </p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetDeploymentConfigurationRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AWS Marketplace product, for example
   * <code>prod-1234567890abc</code>.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  GetDeploymentConfigurationRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The delivery option type of the deployment configuration.</p>
   */
  inline DeliveryOptionType GetDeliveryOptionType() const { return m_deliveryOptionType; }
  inline bool DeliveryOptionTypeHasBeenSet() const { return m_deliveryOptionTypeHasBeenSet; }
  inline void SetDeliveryOptionType(DeliveryOptionType value) {
    m_deliveryOptionTypeHasBeenSet = true;
    m_deliveryOptionType = value;
  }
  inline GetDeploymentConfigurationRequest& WithDeliveryOptionType(DeliveryOptionType value) {
    SetDeliveryOptionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_productId;

  DeliveryOptionType m_deliveryOptionType{DeliveryOptionType::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_deliveryOptionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
