/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ChannelContractStatus.h>
#include <aws/partnercentral-channel/model/ChannelContractType.h>
#include <aws/partnercentral-channel/model/ListChannelContractsTypeFilters.h>
#include <aws/partnercentral-channel/model/ListChannelContractsTypeSort.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class ListChannelContractsRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListChannelContracts"; }

  AWS_PARTNERCENTRALCHANNEL_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALCHANNEL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier to filter channel contracts.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListChannelContractsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by contract type.</p>
   */
  inline ChannelContractType GetContractType() const { return m_contractType; }
  inline bool ContractTypeHasBeenSet() const { return m_contractTypeHasBeenSet; }
  inline void SetContractType(ChannelContractType value) {
    m_contractTypeHasBeenSet = true;
    m_contractType = value;
  }
  inline ListChannelContractsRequest& WithContractType(ChannelContractType value) {
    SetContractType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by channel contract status.</p>
   */
  inline const Aws::Vector<ChannelContractStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<ChannelContractStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<ChannelContractStatus>>
  ListChannelContractsRequest& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListChannelContractsRequest& AddStatuses(ChannelContractStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific filters for channel contracts.</p>
   */
  inline const ListChannelContractsTypeFilters& GetContractTypeFilters() const { return m_contractTypeFilters; }
  inline bool ContractTypeFiltersHasBeenSet() const { return m_contractTypeFiltersHasBeenSet; }
  template <typename ContractTypeFiltersT = ListChannelContractsTypeFilters>
  void SetContractTypeFilters(ContractTypeFiltersT&& value) {
    m_contractTypeFiltersHasBeenSet = true;
    m_contractTypeFilters = std::forward<ContractTypeFiltersT>(value);
  }
  template <typename ContractTypeFiltersT = ListChannelContractsTypeFilters>
  ListChannelContractsRequest& WithContractTypeFilters(ContractTypeFiltersT&& value) {
    SetContractTypeFilters(std::forward<ContractTypeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific sorting options for channel contracts.</p>
   */
  inline const ListChannelContractsTypeSort& GetContractTypeSort() const { return m_contractTypeSort; }
  inline bool ContractTypeSortHasBeenSet() const { return m_contractTypeSortHasBeenSet; }
  template <typename ContractTypeSortT = ListChannelContractsTypeSort>
  void SetContractTypeSort(ContractTypeSortT&& value) {
    m_contractTypeSortHasBeenSet = true;
    m_contractTypeSort = std::forward<ContractTypeSortT>(value);
  }
  template <typename ContractTypeSortT = ListChannelContractsTypeSort>
  ListChannelContractsRequest& WithContractTypeSort(ContractTypeSortT&& value) {
    SetContractTypeSort(std::forward<ContractTypeSortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListChannelContractsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListChannelContractsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  ChannelContractType m_contractType{ChannelContractType::NOT_SET};

  Aws::Vector<ChannelContractStatus> m_statuses;

  ListChannelContractsTypeFilters m_contractTypeFilters;

  ListChannelContractsTypeSort m_contractTypeSort;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_contractTypeHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
  bool m_contractTypeFiltersHasBeenSet = false;
  bool m_contractTypeSortHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
