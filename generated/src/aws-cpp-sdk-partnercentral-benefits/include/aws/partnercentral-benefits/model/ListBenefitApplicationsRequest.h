/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationStatus.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class ListBenefitApplicationsRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitApplicationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBenefitApplications"; }

  AWS_PARTNERCENTRALBENEFITS_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALBENEFITS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier to filter benefit applications by catalog.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListBenefitApplicationsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit applications by specific AWS partner programs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrograms() const { return m_programs; }
  inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  ListBenefitApplicationsRequest& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  template <typename ProgramsT = Aws::String>
  ListBenefitApplicationsRequest& AddPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs.emplace_back(std::forward<ProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit applications by specific fulfillment types.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  ListBenefitApplicationsRequest& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline ListBenefitApplicationsRequest& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit applications by specific benefit identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBenefitIdentifiers() const { return m_benefitIdentifiers; }
  inline bool BenefitIdentifiersHasBeenSet() const { return m_benefitIdentifiersHasBeenSet; }
  template <typename BenefitIdentifiersT = Aws::Vector<Aws::String>>
  void SetBenefitIdentifiers(BenefitIdentifiersT&& value) {
    m_benefitIdentifiersHasBeenSet = true;
    m_benefitIdentifiers = std::forward<BenefitIdentifiersT>(value);
  }
  template <typename BenefitIdentifiersT = Aws::Vector<Aws::String>>
  ListBenefitApplicationsRequest& WithBenefitIdentifiers(BenefitIdentifiersT&& value) {
    SetBenefitIdentifiers(std::forward<BenefitIdentifiersT>(value));
    return *this;
  }
  template <typename BenefitIdentifiersT = Aws::String>
  ListBenefitApplicationsRequest& AddBenefitIdentifiers(BenefitIdentifiersT&& value) {
    m_benefitIdentifiersHasBeenSet = true;
    m_benefitIdentifiers.emplace_back(std::forward<BenefitIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit applications by their current processing status.</p>
   */
  inline const Aws::Vector<BenefitApplicationStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<BenefitApplicationStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<BenefitApplicationStatus>>
  ListBenefitApplicationsRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline ListBenefitApplicationsRequest& AddStatus(BenefitApplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit applications by their current processing stage.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStages() const { return m_stages; }
  inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
  template <typename StagesT = Aws::Vector<Aws::String>>
  void SetStages(StagesT&& value) {
    m_stagesHasBeenSet = true;
    m_stages = std::forward<StagesT>(value);
  }
  template <typename StagesT = Aws::Vector<Aws::String>>
  ListBenefitApplicationsRequest& WithStages(StagesT&& value) {
    SetStages(std::forward<StagesT>(value));
    return *this;
  }
  template <typename StagesT = Aws::String>
  ListBenefitApplicationsRequest& AddStages(StagesT&& value) {
    m_stagesHasBeenSet = true;
    m_stages.emplace_back(std::forward<StagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefit applications by specific AWS resource ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedResourceArns() const { return m_associatedResourceArns; }
  inline bool AssociatedResourceArnsHasBeenSet() const { return m_associatedResourceArnsHasBeenSet; }
  template <typename AssociatedResourceArnsT = Aws::Vector<Aws::String>>
  void SetAssociatedResourceArns(AssociatedResourceArnsT&& value) {
    m_associatedResourceArnsHasBeenSet = true;
    m_associatedResourceArns = std::forward<AssociatedResourceArnsT>(value);
  }
  template <typename AssociatedResourceArnsT = Aws::Vector<Aws::String>>
  ListBenefitApplicationsRequest& WithAssociatedResourceArns(AssociatedResourceArnsT&& value) {
    SetAssociatedResourceArns(std::forward<AssociatedResourceArnsT>(value));
    return *this;
  }
  template <typename AssociatedResourceArnsT = Aws::String>
  ListBenefitApplicationsRequest& AddAssociatedResourceArns(AssociatedResourceArnsT&& value) {
    m_associatedResourceArnsHasBeenSet = true;
    m_associatedResourceArns.emplace_back(std::forward<AssociatedResourceArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of benefit applications to return in a single
   * response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBenefitApplicationsRequest& WithMaxResults(int value) {
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
  ListBenefitApplicationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::Vector<Aws::String> m_programs;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;

  Aws::Vector<Aws::String> m_benefitIdentifiers;

  Aws::Vector<BenefitApplicationStatus> m_status;

  Aws::Vector<Aws::String> m_stages;

  Aws::Vector<Aws::String> m_associatedResourceArns;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_programsHasBeenSet = false;
  bool m_fulfillmentTypesHasBeenSet = false;
  bool m_benefitIdentifiersHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stagesHasBeenSet = false;
  bool m_associatedResourceArnsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
