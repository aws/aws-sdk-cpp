/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeRequest.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 */
class SampleTrainingSessionRequest : public StreamingSageMakerTrainingSessionRuntimeRequest {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SampleTrainingSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SampleTrainingSession"; }

  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the training session whose model to invoke.</p>
   */
  inline const Aws::String& GetTrainingSessionName() const { return m_trainingSessionName; }
  inline bool TrainingSessionNameHasBeenSet() const { return m_trainingSessionNameHasBeenSet; }
  template <typename TrainingSessionNameT = Aws::String>
  void SetTrainingSessionName(TrainingSessionNameT&& value) {
    m_trainingSessionNameHasBeenSet = true;
    m_trainingSessionName = std::forward<TrainingSessionNameT>(value);
  }
  template <typename TrainingSessionNameT = Aws::String>
  SampleTrainingSessionRequest& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired MIME type of the inference body in the response.</p>
   */
  inline const Aws::String& GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  template <typename AcceptT = Aws::String>
  void SetAccept(AcceptT&& value) {
    m_acceptHasBeenSet = true;
    m_accept = std::forward<AcceptT>(value);
  }
  template <typename AcceptT = Aws::String>
  SampleTrainingSessionRequest& WithAccept(AcceptT&& value) {
    SetAccept(std::forward<AcceptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the model package whose checkpoint to invoke.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  SampleTrainingSessionRequest& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionName;

  Aws::String m_accept;

  Aws::String m_modelPackageArn;

  bool m_trainingSessionNameHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_modelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
