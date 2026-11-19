/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementGroupSort.h>
#include <aws/partnercentral-selling/model/ReadinessLevel.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The request for the <code>ListEngagementGroups</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementGroupsRequest">AWS
 * API Reference</a></p>
 */
class ListEngagementGroupsRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API ListEngagementGroupsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEngagementGroups"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog in which to list engagement groups. The following
   * values are valid:</p> <ul> <li> <p> <code>AWS</code>: Production.</p> </li> <li>
   * <p> <code>Sandbox</code>: Testing environments.</p> </li> </ul>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListEngagementGroupsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to engagement groups with the specified readiness level.
   * If you omit this field, the operation returns groups of all readiness
   * levels.</p>
   */
  inline ReadinessLevel GetReadinessLevel() const { return m_readinessLevel; }
  inline bool ReadinessLevelHasBeenSet() const { return m_readinessLevelHasBeenSet; }
  inline void SetReadinessLevel(ReadinessLevel value) {
    m_readinessLevelHasBeenSet = true;
    m_readinessLevel = value;
  }
  inline ListEngagementGroupsRequest& WithReadinessLevel(ReadinessLevel value) {
    SetReadinessLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the field and direction used to sort the results. You can sort by
   * <code>Count</code> or <code>UpdatedAt</code>. If you omit this field, the
   * operation returns groups in recommended order.</p>
   */
  inline const EngagementGroupSort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = EngagementGroupSort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = EngagementGroupSort>
  ListEngagementGroupsRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to the specified engagement groups. Each entry can be an
   * engagement group identifier or an engagement group ARN. You can specify 1 to 10
   * entries. Identifiers that don't match an active group available to you are
   * ignored.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEngagementGroupIdentifiers() const { return m_engagementGroupIdentifiers; }
  inline bool EngagementGroupIdentifiersHasBeenSet() const { return m_engagementGroupIdentifiersHasBeenSet; }
  template <typename EngagementGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetEngagementGroupIdentifiers(EngagementGroupIdentifiersT&& value) {
    m_engagementGroupIdentifiersHasBeenSet = true;
    m_engagementGroupIdentifiers = std::forward<EngagementGroupIdentifiersT>(value);
  }
  template <typename EngagementGroupIdentifiersT = Aws::Vector<Aws::String>>
  ListEngagementGroupsRequest& WithEngagementGroupIdentifiers(EngagementGroupIdentifiersT&& value) {
    SetEngagementGroupIdentifiers(std::forward<EngagementGroupIdentifiersT>(value));
    return *this;
  }
  template <typename EngagementGroupIdentifiersT = Aws::String>
  ListEngagementGroupsRequest& AddEngagementGroupIdentifiers(EngagementGroupIdentifiersT&& value) {
    m_engagementGroupIdentifiersHasBeenSet = true;
    m_engagementGroupIdentifiers.emplace_back(std::forward<EngagementGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum number of results to return in a single call. If you
   * omit this value, the operation returns up to 20 results. Use this value to
   * control pagination together with <code>NextToken</code>.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEngagementGroupsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned by a previous call. Pass it in a subsequent call
   * to retrieve the next page of results. Omit it on the first call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEngagementGroupsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  ReadinessLevel m_readinessLevel{ReadinessLevel::NOT_SET};

  EngagementGroupSort m_sort;

  Aws::Vector<Aws::String> m_engagementGroupIdentifiers;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_readinessLevelHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_engagementGroupIdentifiersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
