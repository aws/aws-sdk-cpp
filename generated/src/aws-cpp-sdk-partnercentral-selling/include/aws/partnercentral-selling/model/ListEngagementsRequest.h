/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementContextType.h>
#include <aws/partnercentral-selling/model/EngagementSort.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 */
class ListEngagementsRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API ListEngagementsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEngagements"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> Specifies the catalog related to the request. </p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListEngagementsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of AWS account IDs. When specified, the response includes engagements
   * created by these accounts. This filter is useful for finding engagements created
   * by specific team members. </p>
   */
  inline const Aws::Vector<Aws::String>& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::Vector<Aws::String>>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::Vector<Aws::String>>
  ListEngagementsRequest& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  template <typename CreatedByT = Aws::String>
  ListEngagementsRequest& AddCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy.emplace_back(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of strings representing AWS Account IDs. Use this to exclude
   * engagements created by specific users. </p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludeCreatedBy() const { return m_excludeCreatedBy; }
  inline bool ExcludeCreatedByHasBeenSet() const { return m_excludeCreatedByHasBeenSet; }
  template <typename ExcludeCreatedByT = Aws::Vector<Aws::String>>
  void SetExcludeCreatedBy(ExcludeCreatedByT&& value) {
    m_excludeCreatedByHasBeenSet = true;
    m_excludeCreatedBy = std::forward<ExcludeCreatedByT>(value);
  }
  template <typename ExcludeCreatedByT = Aws::Vector<Aws::String>>
  ListEngagementsRequest& WithExcludeCreatedBy(ExcludeCreatedByT&& value) {
    SetExcludeCreatedBy(std::forward<ExcludeCreatedByT>(value));
    return *this;
  }
  template <typename ExcludeCreatedByT = Aws::String>
  ListEngagementsRequest& AddExcludeCreatedBy(ExcludeCreatedByT&& value) {
    m_excludeCreatedByHasBeenSet = true;
    m_excludeCreatedBy.emplace_back(std::forward<ExcludeCreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters engagements to include only those containing the specified context
   * types, such as "CustomerProject" or "Lead". Use this to find engagements that
   * have specific types of contextual information associated with them.</p>
   */
  inline const Aws::Vector<EngagementContextType>& GetContextTypes() const { return m_contextTypes; }
  inline bool ContextTypesHasBeenSet() const { return m_contextTypesHasBeenSet; }
  template <typename ContextTypesT = Aws::Vector<EngagementContextType>>
  void SetContextTypes(ContextTypesT&& value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes = std::forward<ContextTypesT>(value);
  }
  template <typename ContextTypesT = Aws::Vector<EngagementContextType>>
  ListEngagementsRequest& WithContextTypes(ContextTypesT&& value) {
    SetContextTypes(std::forward<ContextTypesT>(value));
    return *this;
  }
  inline ListEngagementsRequest& AddContextTypes(EngagementContextType value) {
    m_contextTypesHasBeenSet = true;
    m_contextTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters engagements to exclude those containing the specified context types.
   * Use this to find engagements that do not have certain types of contextual
   * information, helping to narrow results based on context exclusion criteria.</p>
   */
  inline const Aws::Vector<EngagementContextType>& GetExcludeContextTypes() const { return m_excludeContextTypes; }
  inline bool ExcludeContextTypesHasBeenSet() const { return m_excludeContextTypesHasBeenSet; }
  template <typename ExcludeContextTypesT = Aws::Vector<EngagementContextType>>
  void SetExcludeContextTypes(ExcludeContextTypesT&& value) {
    m_excludeContextTypesHasBeenSet = true;
    m_excludeContextTypes = std::forward<ExcludeContextTypesT>(value);
  }
  template <typename ExcludeContextTypesT = Aws::Vector<EngagementContextType>>
  ListEngagementsRequest& WithExcludeContextTypes(ExcludeContextTypesT&& value) {
    SetExcludeContextTypes(std::forward<ExcludeContextTypesT>(value));
    return *this;
  }
  inline ListEngagementsRequest& AddExcludeContextTypes(EngagementContextType value) {
    m_excludeContextTypesHasBeenSet = true;
    m_excludeContextTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EngagementSort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = EngagementSort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = EngagementSort>
  ListEngagementsRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
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
  inline ListEngagementsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. This value is returned from a previous
   * call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEngagementsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of strings representing engagement identifiers to retrieve.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const { return m_engagementIdentifier; }
  inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
  template <typename EngagementIdentifierT = Aws::Vector<Aws::String>>
  void SetEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier = std::forward<EngagementIdentifierT>(value);
  }
  template <typename EngagementIdentifierT = Aws::Vector<Aws::String>>
  ListEngagementsRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) {
    SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  template <typename EngagementIdentifierT = Aws::String>
  ListEngagementsRequest& AddEngagementIdentifier(EngagementIdentifierT&& value) {
    m_engagementIdentifierHasBeenSet = true;
    m_engagementIdentifier.emplace_back(std::forward<EngagementIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::Vector<Aws::String> m_createdBy;

  Aws::Vector<Aws::String> m_excludeCreatedBy;

  Aws::Vector<EngagementContextType> m_contextTypes;

  Aws::Vector<EngagementContextType> m_excludeContextTypes;

  EngagementSort m_sort;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<Aws::String> m_engagementIdentifier;
  bool m_catalogHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_excludeCreatedByHasBeenSet = false;
  bool m_contextTypesHasBeenSet = false;
  bool m_excludeContextTypesHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_engagementIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
