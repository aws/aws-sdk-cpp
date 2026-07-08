/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>
#include <aws/partnercentral-revenue-measurement/model/MarketplaceProductSummary.h>
#include <aws/partnercentral-revenue-measurement/model/TenancyModel.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralRevenueMeasurement {
namespace Model {
class CreateRevenueAttributionResult {
 public:
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateRevenueAttributionResult() = default;
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateRevenueAttributionResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_PARTNERCENTRALREVENUEMEASUREMENT_API CreateRevenueAttributionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the newly created revenue attribution.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateRevenueAttributionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the newly created revenue attribution.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateRevenueAttributionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the revenue attribution.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRevenueAttributionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the revenue attribution.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRevenueAttributionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenancy model for this revenue attribution.</p>
   */
  inline TenancyModel GetTenancyModel() const { return m_tenancyModel; }
  inline void SetTenancyModel(TenancyModel value) {
    m_tenancyModelHasBeenSet = true;
    m_tenancyModel = value;
  }
  inline CreateRevenueAttributionResult& WithTenancyModel(TenancyModel value) {
    SetTenancyModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associated AWS Marketplace product listing, if set at creation.</p>
   */
  inline const MarketplaceProductSummary& GetMarketplaceProduct() const { return m_marketplaceProduct; }
  template <typename MarketplaceProductT = MarketplaceProductSummary>
  void SetMarketplaceProduct(MarketplaceProductT&& value) {
    m_marketplaceProductHasBeenSet = true;
    m_marketplaceProduct = std::forward<MarketplaceProductT>(value);
  }
  template <typename MarketplaceProductT = MarketplaceProductSummary>
  CreateRevenueAttributionResult& WithMarketplaceProduct(MarketplaceProductT&& value) {
    SetMarketplaceProduct(std::forward<MarketplaceProductT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the newly created attribution resource.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  CreateRevenueAttributionResult& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateRevenueAttributionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  TenancyModel m_tenancyModel{TenancyModel::NOT_SET};

  MarketplaceProductSummary m_marketplaceProduct;

  Aws::String m_revision;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tenancyModelHasBeenSet = false;
  bool m_marketplaceProductHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
