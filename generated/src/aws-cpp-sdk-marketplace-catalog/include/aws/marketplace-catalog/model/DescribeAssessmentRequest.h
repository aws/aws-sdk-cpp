/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

/**
 */
class DescribeAssessmentRequest : public MarketplaceCatalogRequest {
 public:
  AWS_MARKETPLACECATALOG_API DescribeAssessmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeAssessment"; }

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
  DescribeAssessmentRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the assessment to describe. You can provide either
   * the assessment ID (for example, <code>assessment-12345</code>) or the full
   * assessment ARN (for example,
   * <code>arn:aws:aws-marketplace:us-east-1::AWSMarketplace/Assessment/assessment-12345</code>).</p>
   */
  inline const Aws::String& GetAssessmentIdentifier() const { return m_assessmentIdentifier; }
  inline bool AssessmentIdentifierHasBeenSet() const { return m_assessmentIdentifierHasBeenSet; }
  template <typename AssessmentIdentifierT = Aws::String>
  void SetAssessmentIdentifier(AssessmentIdentifierT&& value) {
    m_assessmentIdentifierHasBeenSet = true;
    m_assessmentIdentifier = std::forward<AssessmentIdentifierT>(value);
  }
  template <typename AssessmentIdentifierT = Aws::String>
  DescribeAssessmentRequest& WithAssessmentIdentifier(AssessmentIdentifierT&& value) {
    SetAssessmentIdentifier(std::forward<AssessmentIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the upper limit of <code>ControlAssessment</code> elements returned
   * on a single page. If a value isn't provided, the default value is 50. Valid
   * values range from 1 to 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeAssessmentRequest& WithMaxResults(int value) {
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
  DescribeAssessmentRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_assessmentIdentifier;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_assessmentIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
