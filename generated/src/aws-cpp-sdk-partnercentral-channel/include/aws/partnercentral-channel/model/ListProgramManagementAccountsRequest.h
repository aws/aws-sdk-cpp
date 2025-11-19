/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsSortBase.h>
#include <aws/partnercentral-channel/model/Program.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountStatus.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class ListProgramManagementAccountsRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListProgramManagementAccountsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListProgramManagementAccounts"; }

  AWS_PARTNERCENTRALCHANNEL_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALCHANNEL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier to filter accounts.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListProgramManagementAccountsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
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
  inline ListProgramManagementAccountsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by display names.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDisplayNames() const { return m_displayNames; }
  inline bool DisplayNamesHasBeenSet() const { return m_displayNamesHasBeenSet; }
  template <typename DisplayNamesT = Aws::Vector<Aws::String>>
  void SetDisplayNames(DisplayNamesT&& value) {
    m_displayNamesHasBeenSet = true;
    m_displayNames = std::forward<DisplayNamesT>(value);
  }
  template <typename DisplayNamesT = Aws::Vector<Aws::String>>
  ListProgramManagementAccountsRequest& WithDisplayNames(DisplayNamesT&& value) {
    SetDisplayNames(std::forward<DisplayNamesT>(value));
    return *this;
  }
  template <typename DisplayNamesT = Aws::String>
  ListProgramManagementAccountsRequest& AddDisplayNames(DisplayNamesT&& value) {
    m_displayNamesHasBeenSet = true;
    m_displayNames.emplace_back(std::forward<DisplayNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by program types.</p>
   */
  inline const Aws::Vector<Program>& GetPrograms() const { return m_programs; }
  inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
  template <typename ProgramsT = Aws::Vector<Program>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Program>>
  ListProgramManagementAccountsRequest& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  inline ListProgramManagementAccountsRequest& AddPrograms(Program value) {
    m_programsHasBeenSet = true;
    m_programs.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by AWS account IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  ListProgramManagementAccountsRequest& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  ListProgramManagementAccountsRequest& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by program management account statuses.</p>
   */
  inline const Aws::Vector<ProgramManagementAccountStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<ProgramManagementAccountStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<ProgramManagementAccountStatus>>
  ListProgramManagementAccountsRequest& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListProgramManagementAccountsRequest& AddStatuses(ProgramManagementAccountStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sorting options for the results.</p>
   */
  inline const ListProgramManagementAccountsSortBase& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = ListProgramManagementAccountsSortBase>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = ListProgramManagementAccountsSortBase>
  ListProgramManagementAccountsRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
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
  ListProgramManagementAccountsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::Vector<Aws::String> m_displayNames;
  bool m_displayNamesHasBeenSet = false;

  Aws::Vector<Program> m_programs;
  bool m_programsHasBeenSet = false;

  Aws::Vector<Aws::String> m_accountIds;
  bool m_accountIdsHasBeenSet = false;

  Aws::Vector<ProgramManagementAccountStatus> m_statuses;
  bool m_statusesHasBeenSet = false;

  ListProgramManagementAccountsSortBase m_sort;
  bool m_sortHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
