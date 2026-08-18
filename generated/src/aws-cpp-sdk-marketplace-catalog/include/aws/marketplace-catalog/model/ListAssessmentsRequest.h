/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AssessmentTargetFilter.h>
#include <aws/marketplace-catalog/model/FrameworkFilters.h>

#include <utility>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

/**
 */
class ListAssessmentsRequest : public MarketplaceCatalogRequest {
 public:
  AWS_MARKETPLACECATALOG_API ListAssessmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAssessments"; }

  AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
   * </p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListAssessmentsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of a framework. When specified, only assessments
   * performed against this framework are returned. For example,
   * <code>AMISecurity</code>.</p>
   */
  inline const Aws::String& GetFrameworkId() const { return m_frameworkId; }
  inline bool FrameworkIdHasBeenSet() const { return m_frameworkIdHasBeenSet; }
  template <typename FrameworkIdT = Aws::String>
  void SetFrameworkId(FrameworkIdT&& value) {
    m_frameworkIdHasBeenSet = true;
    m_frameworkId = std::forward<FrameworkIdT>(value);
  }
  template <typename FrameworkIdT = Aws::String>
  ListAssessmentsRequest& WithFrameworkId(FrameworkIdT&& value) {
    SetFrameworkId(std::forward<FrameworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the list of assessments to those performed against a specific entity
   * or change set.</p>
   */
  inline const AssessmentTargetFilter& GetAssessmentTargetFilter() const { return m_assessmentTargetFilter; }
  inline bool AssessmentTargetFilterHasBeenSet() const { return m_assessmentTargetFilterHasBeenSet; }
  template <typename AssessmentTargetFilterT = AssessmentTargetFilter>
  void SetAssessmentTargetFilter(AssessmentTargetFilterT&& value) {
    m_assessmentTargetFilterHasBeenSet = true;
    m_assessmentTargetFilter = std::forward<AssessmentTargetFilterT>(value);
  }
  template <typename AssessmentTargetFilterT = AssessmentTargetFilter>
  ListAssessmentsRequest& WithAssessmentTargetFilter(AssessmentTargetFilterT&& value) {
    SetAssessmentTargetFilter(std::forward<AssessmentTargetFilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Framework-specific filters. Set exactly one member to filter results to
   * assessments performed against that framework.</p>
   */
  inline const FrameworkFilters& GetFrameworkFilters() const { return m_frameworkFilters; }
  inline bool FrameworkFiltersHasBeenSet() const { return m_frameworkFiltersHasBeenSet; }
  template <typename FrameworkFiltersT = FrameworkFilters>
  void SetFrameworkFilters(FrameworkFiltersT&& value) {
    m_frameworkFiltersHasBeenSet = true;
    m_frameworkFilters = std::forward<FrameworkFiltersT>(value);
  }
  template <typename FrameworkFiltersT = FrameworkFilters>
  ListAssessmentsRequest& WithFrameworkFilters(FrameworkFiltersT&& value) {
    SetFrameworkFilters(std::forward<FrameworkFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the upper limit of the elements on a single page. If a value isn't
   * provided, the default value is 20. Valid values range from 1 to 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAssessmentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the next token, if it exists. <code>null</code> if there are no
   * more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssessmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_frameworkId;

  AssessmentTargetFilter m_assessmentTargetFilter;

  FrameworkFilters m_frameworkFilters;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_frameworkIdHasBeenSet = false;
  bool m_assessmentTargetFilterHasBeenSet = false;
  bool m_frameworkFiltersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
