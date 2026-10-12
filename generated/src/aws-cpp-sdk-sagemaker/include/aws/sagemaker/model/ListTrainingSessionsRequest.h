/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingSessionStatus.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class ListTrainingSessionsRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ListTrainingSessionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListTrainingSessions"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>If the response was truncated, use the token returned in the previous
   * response to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListTrainingSessionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of training sessions to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListTrainingSessionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only training sessions created after the specified
   * time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
  inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  void SetCreationTimeAfter(CreationTimeAfterT&& value) {
    m_creationTimeAfterHasBeenSet = true;
    m_creationTimeAfter = std::forward<CreationTimeAfterT>(value);
  }
  template <typename CreationTimeAfterT = Aws::Utils::DateTime>
  ListTrainingSessionsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) {
    SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only training sessions created before the specified
   * time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
  inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  void SetCreationTimeBefore(CreationTimeBeforeT&& value) {
    m_creationTimeBeforeHasBeenSet = true;
    m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value);
  }
  template <typename CreationTimeBeforeT = Aws::Utils::DateTime>
  ListTrainingSessionsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) {
    SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string in the training session name to filter results. Only sessions whose
   * name contains the specified string are returned.</p>
   */
  inline const Aws::String& GetNameContains() const { return m_nameContains; }
  inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
  template <typename NameContainsT = Aws::String>
  void SetNameContains(NameContainsT&& value) {
    m_nameContainsHasBeenSet = true;
    m_nameContains = std::forward<NameContainsT>(value);
  }
  template <typename NameContainsT = Aws::String>
  ListTrainingSessionsRequest& WithNameContains(NameContainsT&& value) {
    SetNameContains(std::forward<NameContainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that returns only training sessions with the specified status.</p>
   */
  inline TrainingSessionStatus GetStatusEquals() const { return m_statusEquals; }
  inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
  inline void SetStatusEquals(TrainingSessionStatus value) {
    m_statusEqualsHasBeenSet = true;
    m_statusEquals = value;
  }
  inline ListTrainingSessionsRequest& WithStatusEquals(TrainingSessionStatus value) {
    SetStatusEquals(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::Utils::DateTime m_creationTimeAfter{};

  Aws::Utils::DateTime m_creationTimeBefore{};

  Aws::String m_nameContains;

  TrainingSessionStatus m_statusEquals{TrainingSessionStatus::NOT_SET};
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_creationTimeAfterHasBeenSet = false;
  bool m_creationTimeBeforeHasBeenSet = false;
  bool m_nameContainsHasBeenSet = false;
  bool m_statusEqualsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
