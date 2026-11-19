/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeploymentRequest.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/DeliveryOptionType.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationDetail.h>

#include <utility>

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {

/**
 */
class StartDeploymentConfigurationJobRequest : public MarketplaceDeploymentRequest {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API StartDeploymentConfigurationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartDeploymentConfigurationJob"; }

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
  StartDeploymentConfigurationJobRequest& WithCatalog(CatalogT&& value) {
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
  StartDeploymentConfigurationJobRequest& WithProductId(ProductIdT&& value) {
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
  inline StartDeploymentConfigurationJobRequest& WithDeliveryOptionType(DeliveryOptionType value) {
    SetDeliveryOptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment configuration to publish.</p>
   */
  inline const DeploymentConfigurationDetail& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = DeploymentConfigurationDetail>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = DeploymentConfigurationDetail>
  StartDeploymentConfigurationJobRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs, where each pair represents a tag to apply to the
   * deployment configuration. Only the request that creates the deployment
   * configuration can apply tags. If the deployment configuration already exists, a
   * request that includes one or more tags fails with a
   * <code>ValidationException</code>. To change tags on an existing deployment
   * configuration, use <code>TagResource</code> and <code>UntagResource</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  StartDeploymentConfigurationJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  StartDeploymentConfigurationJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry a request with the same
   * token and the same input, the service returns the original job instead of
   * starting a new one. If you reuse a token with different input, the request fails
   * with a <code>ConflictException</code>.</p>  <p>This field is not required
   * if you're calling using an AWS SDK. Otherwise, a <code>clientToken</code> must
   * be provided with the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartDeploymentConfigurationJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_productId;

  DeliveryOptionType m_deliveryOptionType{DeliveryOptionType::NOT_SET};

  DeploymentConfigurationDetail m_configuration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_catalogHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
  bool m_deliveryOptionTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
