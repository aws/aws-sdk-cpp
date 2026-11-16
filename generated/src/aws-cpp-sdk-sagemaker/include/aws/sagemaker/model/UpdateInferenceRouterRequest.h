/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoutingTarget.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class UpdateInferenceRouterRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API UpdateInferenceRouterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceRouter"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the inference router to update.</p>
   */
  inline const Aws::String& GetInferenceRouterName() const { return m_inferenceRouterName; }
  inline bool InferenceRouterNameHasBeenSet() const { return m_inferenceRouterNameHasBeenSet; }
  template <typename InferenceRouterNameT = Aws::String>
  void SetInferenceRouterName(InferenceRouterNameT&& value) {
    m_inferenceRouterNameHasBeenSet = true;
    m_inferenceRouterName = std::forward<InferenceRouterNameT>(value);
  }
  template <typename InferenceRouterNameT = Aws::String>
  UpdateInferenceRouterRequest& WithInferenceRouterName(InferenceRouterNameT&& value) {
    SetInferenceRouterName(std::forward<InferenceRouterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The complete list of routing targets for the inference router. To remove the
   * last routing target, delete the router.</p>
   */
  inline const Aws::Vector<RoutingTarget>& GetRoutingTargets() const { return m_routingTargets; }
  inline bool RoutingTargetsHasBeenSet() const { return m_routingTargetsHasBeenSet; }
  template <typename RoutingTargetsT = Aws::Vector<RoutingTarget>>
  void SetRoutingTargets(RoutingTargetsT&& value) {
    m_routingTargetsHasBeenSet = true;
    m_routingTargets = std::forward<RoutingTargetsT>(value);
  }
  template <typename RoutingTargetsT = Aws::Vector<RoutingTarget>>
  UpdateInferenceRouterRequest& WithRoutingTargets(RoutingTargetsT&& value) {
    SetRoutingTargets(std::forward<RoutingTargetsT>(value));
    return *this;
  }
  template <typename RoutingTargetsT = RoutingTarget>
  UpdateInferenceRouterRequest& AddRoutingTargets(RoutingTargetsT&& value) {
    m_routingTargetsHasBeenSet = true;
    m_routingTargets.emplace_back(std::forward<RoutingTargetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inferenceRouterName;

  Aws::Vector<RoutingTarget> m_routingTargets;
  bool m_inferenceRouterNameHasBeenSet = false;
  bool m_routingTargetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
