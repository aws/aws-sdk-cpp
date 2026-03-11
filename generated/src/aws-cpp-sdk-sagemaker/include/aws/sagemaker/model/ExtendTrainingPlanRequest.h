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
class ExtendTrainingPlanRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API ExtendTrainingPlanRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ExtendTrainingPlan"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the extension offering to purchase. You can retrieve
   * this ID from the <code>TrainingPlanExtensionOfferings</code> in the response of
   * the <code>SearchTrainingPlanOfferings</code> API.</p>
   */
  inline const Aws::String& GetTrainingPlanExtensionOfferingId() const { return m_trainingPlanExtensionOfferingId; }
  inline bool TrainingPlanExtensionOfferingIdHasBeenSet() const { return m_trainingPlanExtensionOfferingIdHasBeenSet; }
  template <typename TrainingPlanExtensionOfferingIdT = Aws::String>
  void SetTrainingPlanExtensionOfferingId(TrainingPlanExtensionOfferingIdT&& value) {
    m_trainingPlanExtensionOfferingIdHasBeenSet = true;
    m_trainingPlanExtensionOfferingId = std::forward<TrainingPlanExtensionOfferingIdT>(value);
  }
  template <typename TrainingPlanExtensionOfferingIdT = Aws::String>
  ExtendTrainingPlanRequest& WithTrainingPlanExtensionOfferingId(TrainingPlanExtensionOfferingIdT&& value) {
    SetTrainingPlanExtensionOfferingId(std::forward<TrainingPlanExtensionOfferingIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingPlanExtensionOfferingId;
  bool m_trainingPlanExtensionOfferingIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
