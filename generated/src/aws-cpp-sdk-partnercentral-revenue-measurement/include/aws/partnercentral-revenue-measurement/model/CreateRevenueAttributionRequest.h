/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurementRequest.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/CatalogName.h>
#include <aws/partnercentral-revenue-measurement/model/Tag.h>
#include <aws/partnercentral-revenue-measurement/model/TenancyModel.h>

#include <utility>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {

/**
 */
class CreateRevenueAttributionRequest : public PartnerCentralRevenueMeasurementRequest {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateRevenueAttributionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRevenueAttribution"; }

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog in which to create the revenue attribution.</p>
   */
  inline CatalogName GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(CatalogName value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline CreateRevenueAttributionRequest& WithCatalog(CatalogName value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique token to ensure idempotency of the create request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateRevenueAttributionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the revenue attribution. Must be unique within the catalog and
   * the partner's account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRevenueAttributionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the revenue attribution.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRevenueAttributionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenancy model for this revenue attribution.</p>
   */
  inline TenancyModel GetTenancyModel() const { return m_tenancyModel; }
  inline bool TenancyModelHasBeenSet() const { return m_tenancyModelHasBeenSet; }
  inline void SetTenancyModel(TenancyModel value) {
    m_tenancyModelHasBeenSet = true;
    m_tenancyModel = value;
  }
  inline CreateRevenueAttributionRequest& WithTenancyModel(TenancyModel value) {
    SetTenancyModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique product identifier in AWS Marketplace. Accepts a product entity ID
   * (e.g., prod-abc123def4567) or a product ARN.</p>
   */
  inline const Aws::String& GetProductIdentifier() const { return m_productIdentifier; }
  inline bool ProductIdentifierHasBeenSet() const { return m_productIdentifierHasBeenSet; }
  template <typename ProductIdentifierT = Aws::String>
  void SetProductIdentifier(ProductIdentifierT&& value) {
    m_productIdentifierHasBeenSet = true;
    m_productIdentifier = std::forward<ProductIdentifierT>(value);
  }
  template <typename ProductIdentifierT = Aws::String>
  CreateRevenueAttributionRequest& WithProductIdentifier(ProductIdentifierT&& value) {
    SetProductIdentifier(std::forward<ProductIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the revenue attribution upon creation.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateRevenueAttributionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateRevenueAttributionRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  CatalogName m_catalog{CatalogName::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_name;

  Aws::String m_description;

  TenancyModel m_tenancyModel{TenancyModel::NOT_SET};

  Aws::String m_productIdentifier;

  Aws::Vector<Tag> m_tags;
  bool m_catalogHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tenancyModelHasBeenSet = false;
  bool m_productIdentifierHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
