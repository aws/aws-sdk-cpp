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
class DescribeTrainingSessionRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DescribeTrainingSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeTrainingSession"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the training session to describe.</p>
   */
  inline const Aws::String& GetTrainingSessionName() const { return m_trainingSessionName; }
  inline bool TrainingSessionNameHasBeenSet() const { return m_trainingSessionNameHasBeenSet; }
  template <typename TrainingSessionNameT = Aws::String>
  void SetTrainingSessionName(TrainingSessionNameT&& value) {
    m_trainingSessionNameHasBeenSet = true;
    m_trainingSessionName = std::forward<TrainingSessionNameT>(value);
  }
  template <typename TrainingSessionNameT = Aws::String>
  DescribeTrainingSessionRequest& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionName;
  bool m_trainingSessionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
