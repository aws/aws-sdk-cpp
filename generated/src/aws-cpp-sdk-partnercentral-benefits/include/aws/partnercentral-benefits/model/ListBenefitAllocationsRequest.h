/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationStatus.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class ListBenefitAllocationsRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitAllocationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBenefitAllocations"; }

  AWS_PARTNERCENTRALBENEFITS_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALBENEFITS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier to filter benefit allocations by catalog.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListBenefitAllocationsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit allocations by specific fulfillment types.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  ListBenefitAllocationsRequest& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline ListBenefitAllocationsRequest& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit allocations by specific benefit identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBenefitIdentifiers() const { return m_benefitIdentifiers; }
  inline bool BenefitIdentifiersHasBeenSet() const { return m_benefitIdentifiersHasBeenSet; }
  template <typename BenefitIdentifiersT = Aws::Vector<Aws::String>>
  void SetBenefitIdentifiers(BenefitIdentifiersT&& value) {
    m_benefitIdentifiersHasBeenSet = true;
    m_benefitIdentifiers = std::forward<BenefitIdentifiersT>(value);
  }
  template <typename BenefitIdentifiersT = Aws::Vector<Aws::String>>
  ListBenefitAllocationsRequest& WithBenefitIdentifiers(BenefitIdentifiersT&& value) {
    SetBenefitIdentifiers(std::forward<BenefitIdentifiersT>(value));
    return *this;
  }
  template <typename BenefitIdentifiersT = Aws::String>
  ListBenefitAllocationsRequest& AddBenefitIdentifiers(BenefitIdentifiersT&& value) {
    m_benefitIdentifiersHasBeenSet = true;
    m_benefitIdentifiers.emplace_back(std::forward<BenefitIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit allocations by specific benefit application identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBenefitApplicationIdentifiers() const { return m_benefitApplicationIdentifiers; }
  inline bool BenefitApplicationIdentifiersHasBeenSet() const { return m_benefitApplicationIdentifiersHasBeenSet; }
  template <typename BenefitApplicationIdentifiersT = Aws::Vector<Aws::String>>
  void SetBenefitApplicationIdentifiers(BenefitApplicationIdentifiersT&& value) {
    m_benefitApplicationIdentifiersHasBeenSet = true;
    m_benefitApplicationIdentifiers = std::forward<BenefitApplicationIdentifiersT>(value);
  }
  template <typename BenefitApplicationIdentifiersT = Aws::Vector<Aws::String>>
  ListBenefitAllocationsRequest& WithBenefitApplicationIdentifiers(BenefitApplicationIdentifiersT&& value) {
    SetBenefitApplicationIdentifiers(std::forward<BenefitApplicationIdentifiersT>(value));
    return *this;
  }
  template <typename BenefitApplicationIdentifiersT = Aws::String>
  ListBenefitAllocationsRequest& AddBenefitApplicationIdentifiers(BenefitApplicationIdentifiersT&& value) {
    m_benefitApplicationIdentifiersHasBeenSet = true;
    m_benefitApplicationIdentifiers.emplace_back(std::forward<BenefitApplicationIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit allocations by their current status.</p>
   */
  inline const Aws::Vector<BenefitAllocationStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<BenefitAllocationStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<BenefitAllocationStatus>>
  ListBenefitAllocationsRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline ListBenefitAllocationsRequest& AddStatus(BenefitAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of benefit allocations to return in a single response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBenefitAllocationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token to retrieve the next set of results from a previous
   * request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBenefitAllocationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;
  bool m_fulfillmentTypesHasBeenSet = false;

  Aws::Vector<Aws::String> m_benefitIdentifiers;
  bool m_benefitIdentifiersHasBeenSet = false;

  Aws::Vector<Aws::String> m_benefitApplicationIdentifiers;
  bool m_benefitApplicationIdentifiersHasBeenSet = false;

  Aws::Vector<BenefitAllocationStatus> m_status;
  bool m_statusHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
