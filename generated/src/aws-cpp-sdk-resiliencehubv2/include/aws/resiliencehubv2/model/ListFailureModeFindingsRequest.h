/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/FailureCategory.h>
#include <aws/resiliencehubv2/model/FindingSeverity.h>
#include <aws/resiliencehubv2/model/FindingStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace resiliencehubv2 {
namespace Model {

/**
 */
class ListFailureModeFindingsRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API ListFailureModeFindingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFailureModeFindings"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  AWS_RESILIENCEHUBV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  ListFailureModeFindingsRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter findings by severity.</p>
   */
  inline FindingSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(FindingSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline ListFailureModeFindingsRequest& WithSeverity(FindingSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter findings by failure category.</p>
   */
  inline FailureCategory GetFailureCategory() const { return m_failureCategory; }
  inline bool FailureCategoryHasBeenSet() const { return m_failureCategoryHasBeenSet; }
  inline void SetFailureCategory(FailureCategory value) {
    m_failureCategoryHasBeenSet = true;
    m_failureCategory = value;
  }
  inline ListFailureModeFindingsRequest& WithFailureCategory(FailureCategory value) {
    SetFailureCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter findings by status.</p>
   */
  inline FindingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListFailureModeFindingsRequest& WithStatus(FindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFailureModeFindingsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFailureModeFindingsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  FindingSeverity m_severity{FindingSeverity::NOT_SET};

  FailureCategory m_failureCategory{FailureCategory::NOT_SET};

  FindingStatus m_status{FindingStatus::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_serviceArnHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_failureCategoryHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
