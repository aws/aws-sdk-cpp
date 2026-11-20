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
#include <aws/sagemaker/model/GlobalInferenceGatewayMember.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayRouting.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateGlobalInferenceGatewayRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateGlobalInferenceGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalInferenceGateway"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the global inference gateway. The name must be unique in your
   * account in the current Region, and is case-sensitive. The name can't be exactly
   * 12 lowercase letters or digits, because the global inference gateway ID uses
   * that format.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateGlobalInferenceGatewayRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing configuration of the global inference gateway. If you omit it,
   * the global inference gateway uses default routing weights.</p>
   */
  inline const GlobalInferenceGatewayRouting& GetRouting() const { return m_routing; }
  inline bool RoutingHasBeenSet() const { return m_routingHasBeenSet; }
  template <typename RoutingT = GlobalInferenceGatewayRouting>
  void SetRouting(RoutingT&& value) {
    m_routingHasBeenSet = true;
    m_routing = std::forward<RoutingT>(value);
  }
  template <typename RoutingT = GlobalInferenceGatewayRouting>
  CreateGlobalInferenceGatewayRequest& WithRouting(RoutingT&& value) {
    SetRouting(std::forward<RoutingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the global inference
   * gateway assumes to access your SageMaker HyperPod clusters. The role must be in
   * your account and partition, and you must have <code>iam:PassRole</code>
   * permission for it. You can't change the role after you create the global
   * inference gateway.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  CreateGlobalInferenceGatewayRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 1 to 10 in-cluster inference gateways to add to the global inference
   * gateway. A global inference gateway must always have at least one in-cluster
   * inference gateway, so <code>RemoveInferenceGateway</code> can't remove the last
   * one.</p>
   */
  inline const Aws::Vector<GlobalInferenceGatewayMember>& GetGateways() const { return m_gateways; }
  inline bool GatewaysHasBeenSet() const { return m_gatewaysHasBeenSet; }
  template <typename GatewaysT = Aws::Vector<GlobalInferenceGatewayMember>>
  void SetGateways(GatewaysT&& value) {
    m_gatewaysHasBeenSet = true;
    m_gateways = std::forward<GatewaysT>(value);
  }
  template <typename GatewaysT = Aws::Vector<GlobalInferenceGatewayMember>>
  CreateGlobalInferenceGatewayRequest& WithGateways(GatewaysT&& value) {
    SetGateways(std::forward<GatewaysT>(value));
    return *this;
  }
  template <typename GatewaysT = GlobalInferenceGatewayMember>
  CreateGlobalInferenceGatewayRequest& AddGateways(GatewaysT&& value) {
    m_gatewaysHasBeenSet = true;
    m_gateways.emplace_back(std::forward<GatewaysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. An idempotent operation completes no more than one
   * time. If you don't specify a client token, the Amazon Web Services SDKs and the
   * Amazon Web Services CLI generate one for you.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateGlobalInferenceGatewayRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom tags for managing the global inference gateway as an Amazon Web
   * Services resource. You can add tags to your global inference gateway in the same
   * way you add them in other Amazon Web Services services that support tagging. For
   * more information about tagging Amazon Web Services resources, see <a
   * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
   * your Amazon Web Services resources</a> in the <i>Tagging Amazon Web Services
   * Resources User Guide</i>.</p> <p>The global inference gateway doesn't return
   * tags in its responses. To read the tags, use <code>ListTags</code>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateGlobalInferenceGatewayRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateGlobalInferenceGatewayRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  GlobalInferenceGatewayRouting m_routing;

  Aws::String m_executionRoleArn;

  Aws::Vector<GlobalInferenceGatewayMember> m_gateways;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_routingHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_gatewaysHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
