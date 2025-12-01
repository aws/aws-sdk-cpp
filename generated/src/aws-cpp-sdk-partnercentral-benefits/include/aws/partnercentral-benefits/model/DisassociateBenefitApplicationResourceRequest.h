/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class DisassociateBenefitApplicationResourceRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API DisassociateBenefitApplicationResourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateBenefitApplicationResource"; }

  AWS_PARTNERCENTRALBENEFITS_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALBENEFITS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier that specifies which benefit catalog the application
   * belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  DisassociateBenefitApplicationResourceRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the benefit application to disassociate the resource
   * from.</p>
   */
  inline const Aws::String& GetBenefitApplicationIdentifier() const { return m_benefitApplicationIdentifier; }
  inline bool BenefitApplicationIdentifierHasBeenSet() const { return m_benefitApplicationIdentifierHasBeenSet; }
  template <typename BenefitApplicationIdentifierT = Aws::String>
  void SetBenefitApplicationIdentifier(BenefitApplicationIdentifierT&& value) {
    m_benefitApplicationIdentifierHasBeenSet = true;
    m_benefitApplicationIdentifier = std::forward<BenefitApplicationIdentifierT>(value);
  }
  template <typename BenefitApplicationIdentifierT = Aws::String>
  DisassociateBenefitApplicationResourceRequest& WithBenefitApplicationIdentifier(BenefitApplicationIdentifierT&& value) {
    SetBenefitApplicationIdentifier(std::forward<BenefitApplicationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS resource to disassociate from the
   * benefit application.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  DisassociateBenefitApplicationResourceRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_benefitApplicationIdentifier;
  bool m_benefitApplicationIdentifierHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
