/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/AssociationType.h>
#include <aws/partnercentral-channel/model/ListRelationshipsSortBase.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class ListRelationshipsRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListRelationshipsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRelationships"; }

  AWS_PARTNERCENTRALCHANNEL_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALCHANNEL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier to filter relationships.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListRelationshipsRequest& WithCatalog(CatalogT&& value) {
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
  inline ListRelationshipsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by associated AWS account IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedAccountIds() const { return m_associatedAccountIds; }
  inline bool AssociatedAccountIdsHasBeenSet() const { return m_associatedAccountIdsHasBeenSet; }
  template <typename AssociatedAccountIdsT = Aws::Vector<Aws::String>>
  void SetAssociatedAccountIds(AssociatedAccountIdsT&& value) {
    m_associatedAccountIdsHasBeenSet = true;
    m_associatedAccountIds = std::forward<AssociatedAccountIdsT>(value);
  }
  template <typename AssociatedAccountIdsT = Aws::Vector<Aws::String>>
  ListRelationshipsRequest& WithAssociatedAccountIds(AssociatedAccountIdsT&& value) {
    SetAssociatedAccountIds(std::forward<AssociatedAccountIdsT>(value));
    return *this;
  }
  template <typename AssociatedAccountIdsT = Aws::String>
  ListRelationshipsRequest& AddAssociatedAccountIds(AssociatedAccountIdsT&& value) {
    m_associatedAccountIdsHasBeenSet = true;
    m_associatedAccountIds.emplace_back(std::forward<AssociatedAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by association types.</p>
   */
  inline const Aws::Vector<AssociationType>& GetAssociationTypes() const { return m_associationTypes; }
  inline bool AssociationTypesHasBeenSet() const { return m_associationTypesHasBeenSet; }
  template <typename AssociationTypesT = Aws::Vector<AssociationType>>
  void SetAssociationTypes(AssociationTypesT&& value) {
    m_associationTypesHasBeenSet = true;
    m_associationTypes = std::forward<AssociationTypesT>(value);
  }
  template <typename AssociationTypesT = Aws::Vector<AssociationType>>
  ListRelationshipsRequest& WithAssociationTypes(AssociationTypesT&& value) {
    SetAssociationTypes(std::forward<AssociationTypesT>(value));
    return *this;
  }
  inline ListRelationshipsRequest& AddAssociationTypes(AssociationType value) {
    m_associationTypesHasBeenSet = true;
    m_associationTypes.push_back(value);
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
  ListRelationshipsRequest& WithDisplayNames(DisplayNamesT&& value) {
    SetDisplayNames(std::forward<DisplayNamesT>(value));
    return *this;
  }
  template <typename DisplayNamesT = Aws::String>
  ListRelationshipsRequest& AddDisplayNames(DisplayNamesT&& value) {
    m_displayNamesHasBeenSet = true;
    m_displayNames.emplace_back(std::forward<DisplayNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by program management account identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProgramManagementAccountIdentifiers() const { return m_programManagementAccountIdentifiers; }
  inline bool ProgramManagementAccountIdentifiersHasBeenSet() const { return m_programManagementAccountIdentifiersHasBeenSet; }
  template <typename ProgramManagementAccountIdentifiersT = Aws::Vector<Aws::String>>
  void SetProgramManagementAccountIdentifiers(ProgramManagementAccountIdentifiersT&& value) {
    m_programManagementAccountIdentifiersHasBeenSet = true;
    m_programManagementAccountIdentifiers = std::forward<ProgramManagementAccountIdentifiersT>(value);
  }
  template <typename ProgramManagementAccountIdentifiersT = Aws::Vector<Aws::String>>
  ListRelationshipsRequest& WithProgramManagementAccountIdentifiers(ProgramManagementAccountIdentifiersT&& value) {
    SetProgramManagementAccountIdentifiers(std::forward<ProgramManagementAccountIdentifiersT>(value));
    return *this;
  }
  template <typename ProgramManagementAccountIdentifiersT = Aws::String>
  ListRelationshipsRequest& AddProgramManagementAccountIdentifiers(ProgramManagementAccountIdentifiersT&& value) {
    m_programManagementAccountIdentifiersHasBeenSet = true;
    m_programManagementAccountIdentifiers.emplace_back(std::forward<ProgramManagementAccountIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sorting options for the results.</p>
   */
  inline const ListRelationshipsSortBase& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = ListRelationshipsSortBase>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = ListRelationshipsSortBase>
  ListRelationshipsRequest& WithSort(SortT&& value) {
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
  ListRelationshipsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  int m_maxResults{0};

  Aws::Vector<Aws::String> m_associatedAccountIds;

  Aws::Vector<AssociationType> m_associationTypes;

  Aws::Vector<Aws::String> m_displayNames;

  Aws::Vector<Aws::String> m_programManagementAccountIdentifiers;

  ListRelationshipsSortBase m_sort;

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_associatedAccountIdsHasBeenSet = false;
  bool m_associationTypesHasBeenSet = false;
  bool m_displayNamesHasBeenSet = false;
  bool m_programManagementAccountIdentifiersHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
