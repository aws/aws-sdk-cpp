/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssessmentSortField.h>
#include <aws/resiliencehubv2/model/AssessmentStatus.h>
#include <aws/resiliencehubv2/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace resiliencehubv2 {
namespace Model {

/**
 */
class ListFailureModeAssessmentsRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API ListFailureModeAssessmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFailureModeAssessments"; }

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
  ListFailureModeAssessmentsRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the assessment statuses to include in the results.</p>
   */
  inline const Aws::Vector<AssessmentStatus>& GetAssessmentStatuses() const { return m_assessmentStatuses; }
  inline bool AssessmentStatusesHasBeenSet() const { return m_assessmentStatusesHasBeenSet; }
  template <typename AssessmentStatusesT = Aws::Vector<AssessmentStatus>>
  void SetAssessmentStatuses(AssessmentStatusesT&& value) {
    m_assessmentStatusesHasBeenSet = true;
    m_assessmentStatuses = std::forward<AssessmentStatusesT>(value);
  }
  template <typename AssessmentStatusesT = Aws::Vector<AssessmentStatus>>
  ListFailureModeAssessmentsRequest& WithAssessmentStatuses(AssessmentStatusesT&& value) {
    SetAssessmentStatuses(std::forward<AssessmentStatusesT>(value));
    return *this;
  }
  inline ListFailureModeAssessmentsRequest& AddAssessmentStatuses(AssessmentStatus value) {
    m_assessmentStatusesHasBeenSet = true;
    m_assessmentStatuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that only assessments that started at or after this timestamp
   * appear in the results.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
  inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  void SetStartedAfter(StartedAfterT&& value) {
    m_startedAfterHasBeenSet = true;
    m_startedAfter = std::forward<StartedAfterT>(value);
  }
  template <typename StartedAfterT = Aws::Utils::DateTime>
  ListFailureModeAssessmentsRequest& WithStartedAfter(StartedAfterT&& value) {
    SetStartedAfter(std::forward<StartedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that only assessments that ended at or before this timestamp appear
   * in the results.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedBefore() const { return m_endedBefore; }
  inline bool EndedBeforeHasBeenSet() const { return m_endedBeforeHasBeenSet; }
  template <typename EndedBeforeT = Aws::Utils::DateTime>
  void SetEndedBefore(EndedBeforeT&& value) {
    m_endedBeforeHasBeenSet = true;
    m_endedBefore = std::forward<EndedBeforeT>(value);
  }
  template <typename EndedBeforeT = Aws::Utils::DateTime>
  ListFailureModeAssessmentsRequest& WithEndedBefore(EndedBeforeT&& value) {
    SetEndedBefore(std::forward<EndedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to use for sorting failure mode assessments.</p>
   */
  inline AssessmentSortField GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(AssessmentSortField value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListFailureModeAssessmentsRequest& WithSortBy(AssessmentSortField value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for results.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ListFailureModeAssessmentsRequest& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
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
  inline ListFailureModeAssessmentsRequest& WithMaxResults(int value) {
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
  ListFailureModeAssessmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::Vector<AssessmentStatus> m_assessmentStatuses;

  Aws::Utils::DateTime m_startedAfter{};

  Aws::Utils::DateTime m_endedBefore{};

  AssessmentSortField m_sortBy{AssessmentSortField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_serviceArnHasBeenSet = false;
  bool m_assessmentStatusesHasBeenSet = false;
  bool m_startedAfterHasBeenSet = false;
  bool m_endedBeforeHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
