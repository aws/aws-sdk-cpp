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
class DeleteAIWorkloadConfigRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DeleteAIWorkloadConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAIWorkloadConfig"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the AI workload configuration to delete.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigName() const { return m_aIWorkloadConfigName; }
  inline bool AIWorkloadConfigNameHasBeenSet() const { return m_aIWorkloadConfigNameHasBeenSet; }
  template <typename AIWorkloadConfigNameT = Aws::String>
  void SetAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    m_aIWorkloadConfigNameHasBeenSet = true;
    m_aIWorkloadConfigName = std::forward<AIWorkloadConfigNameT>(value);
  }
  template <typename AIWorkloadConfigNameT = Aws::String>
  DeleteAIWorkloadConfigRequest& WithAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    SetAIWorkloadConfigName(std::forward<AIWorkloadConfigNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIWorkloadConfigName;
  bool m_aIWorkloadConfigNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
