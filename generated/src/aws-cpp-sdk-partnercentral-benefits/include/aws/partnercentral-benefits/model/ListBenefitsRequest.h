/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitStatus.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {

/**
 */
class ListBenefitsRequest : public PartnerCentralBenefitsRequest {
 public:
  AWS_PARTNERCENTRALBENEFITS_API ListBenefitsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBenefits"; }

  AWS_PARTNERCENTRALBENEFITS_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALBENEFITS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier to filter benefits by catalog.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListBenefitsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefits by specific AWS partner programs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrograms() const { return m_programs; }
  inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  ListBenefitsRequest& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  template <typename ProgramsT = Aws::String>
  ListBenefitsRequest& AddPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs.emplace_back(std::forward<ProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefits by specific fulfillment types.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  ListBenefitsRequest& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline ListBenefitsRequest& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter benefits by their current status.</p>
   */
  inline const Aws::Vector<BenefitStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<BenefitStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<BenefitStatus>>
  ListBenefitsRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline ListBenefitsRequest& AddStatus(BenefitStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of benefits to return in a single response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBenefitsRequest& WithMaxResults(int value) {
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
  ListBenefitsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::Vector<Aws::String> m_programs;
  bool m_programsHasBeenSet = false;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;
  bool m_fulfillmentTypesHasBeenSet = false;

  Aws::Vector<BenefitStatus> m_status;
  bool m_statusHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
