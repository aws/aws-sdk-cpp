/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoutingTarget.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateInferenceRouterRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateInferenceRouterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceRouter"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the inference router. The name must be unique within your account
   * in the current Amazon Web Services Region. The name is case sensitive.</p>
   */
  inline const Aws::String& GetInferenceRouterName() const { return m_inferenceRouterName; }
  inline bool InferenceRouterNameHasBeenSet() const { return m_inferenceRouterNameHasBeenSet; }
  template <typename InferenceRouterNameT = Aws::String>
  void SetInferenceRouterName(InferenceRouterNameT&& value) {
    m_inferenceRouterNameHasBeenSet = true;
    m_inferenceRouterName = std::forward<InferenceRouterNameT>(value);
  }
  template <typename InferenceRouterNameT = Aws::String>
  CreateInferenceRouterRequest& WithInferenceRouterName(InferenceRouterNameT&& value) {
    SetInferenceRouterName(std::forward<InferenceRouterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing targets of the inference router. Each routing target is a model
   * that callers name when they invoke the router, and the destinations that serve
   * it.</p>
   */
  inline const Aws::Vector<RoutingTarget>& GetRoutingTargets() const { return m_routingTargets; }
  inline bool RoutingTargetsHasBeenSet() const { return m_routingTargetsHasBeenSet; }
  template <typename RoutingTargetsT = Aws::Vector<RoutingTarget>>
  void SetRoutingTargets(RoutingTargetsT&& value) {
    m_routingTargetsHasBeenSet = true;
    m_routingTargets = std::forward<RoutingTargetsT>(value);
  }
  template <typename RoutingTargetsT = Aws::Vector<RoutingTarget>>
  CreateInferenceRouterRequest& WithRoutingTargets(RoutingTargetsT&& value) {
    SetRoutingTargets(std::forward<RoutingTargetsT>(value));
    return *this;
  }
  template <typename RoutingTargetsT = RoutingTarget>
  CreateInferenceRouterRequest& AddRoutingTargets(RoutingTargetsT&& value) {
    m_routingTargetsHasBeenSet = true;
    m_routingTargets.emplace_back(std::forward<RoutingTargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you reuse a client token, use the same request
   * parameters. Otherwise, the request fails.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateInferenceRouterRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to apply to the inference router. For information
   * about tagging, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services resources</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateInferenceRouterRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateInferenceRouterRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inferenceRouterName;

  Aws::Vector<RoutingTarget> m_routingTargets;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;
  bool m_inferenceRouterNameHasBeenSet = false;
  bool m_routingTargetsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
