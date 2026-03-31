/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class DescribeTrainingPlanExtensionHistoryRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DescribeTrainingPlanExtensionHistoryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeTrainingPlanExtensionHistory"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN); of the training plan to retrieve extension
   * history for.</p>
   */
  inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
  inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
  template <typename TrainingPlanArnT = Aws::String>
  void SetTrainingPlanArn(TrainingPlanArnT&& value) {
    m_trainingPlanArnHasBeenSet = true;
    m_trainingPlanArn = std::forward<TrainingPlanArnT>(value);
  }
  template <typename TrainingPlanArnT = Aws::String>
  DescribeTrainingPlanExtensionHistoryRequest& WithTrainingPlanArn(TrainingPlanArnT&& value) {
    SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to continue pagination if more results are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeTrainingPlanExtensionHistoryRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of extensions to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeTrainingPlanExtensionHistoryRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingPlanArn;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_trainingPlanArnHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
