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
namespace Http {
class URI;
}  // namespace Http
namespace MarketplaceDeployment {
namespace Model {

/**
 */
class ListDeploymentConfigurationJobsRequest : public MarketplaceDeploymentRequest {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API ListDeploymentConfigurationJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDeploymentConfigurationJobs"; }

  AWS_MARKETPLACEDEPLOYMENT_API Aws::String SerializePayload() const override;

  AWS_MARKETPLACEDEPLOYMENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  ListDeploymentConfigurationJobsRequest& WithCatalog(CatalogT&& value) {
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
  ListDeploymentConfigurationJobsRequest& WithProductId(ProductIdT&& value) {
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
  inline ListDeploymentConfigurationJobsRequest& WithDeliveryOptionType(DeliveryOptionType value) {
    SetDeliveryOptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of jobs to return in a single page. Valid values are 1
   * through 100. The default is 20.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDeploymentConfigurationJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results. Use the value returned in the
   * previous response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDeploymentConfigurationJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_productId;

  DeliveryOptionType m_deliveryOptionType{DeliveryOptionType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_deliveryOptionTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
