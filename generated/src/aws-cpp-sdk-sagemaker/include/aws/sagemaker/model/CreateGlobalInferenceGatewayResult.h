/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMember.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayRouting.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
/**
 * <p>Contains the identifiers and status of the new global inference gateway, and
 * the parameters from the request except <code>Tags</code>. To read the tags, use
 * <code>ListTags</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CreateGlobalInferenceGatewayResponse">AWS
 * API Reference</a></p>
 */
class CreateGlobalInferenceGatewayResult {
 public:
  AWS_SAGEMAKER_API CreateGlobalInferenceGatewayResult() = default;
  AWS_SAGEMAKER_API CreateGlobalInferenceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API CreateGlobalInferenceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the global inference gateway.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateGlobalInferenceGatewayResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the global inference gateway.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateGlobalInferenceGatewayResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the global inference gateway.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateGlobalInferenceGatewayResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the global inference gateway. A new global inference gateway
   * starts in the <code>CREATING</code> status.</p>
   */
  inline GlobalInferenceGatewayStatus GetStatus() const { return m_status; }
  inline void SetStatus(GlobalInferenceGatewayStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateGlobalInferenceGatewayResult& WithStatus(GlobalInferenceGatewayStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the global inference
   * gateway assumes to access your SageMaker HyperPod clusters.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  CreateGlobalInferenceGatewayResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing configuration of the global inference gateway.</p>
   */
  inline const GlobalInferenceGatewayRouting& GetRouting() const { return m_routing; }
  template <typename RoutingT = GlobalInferenceGatewayRouting>
  void SetRouting(RoutingT&& value) {
    m_routingHasBeenSet = true;
    m_routing = std::forward<RoutingT>(value);
  }
  template <typename RoutingT = GlobalInferenceGatewayRouting>
  CreateGlobalInferenceGatewayResult& WithRouting(RoutingT&& value) {
    SetRouting(std::forward<RoutingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The in-cluster inference gateways that you specified in the request.</p>
   */
  inline const Aws::Vector<GlobalInferenceGatewayMember>& GetGateways() const { return m_gateways; }
  template <typename GatewaysT = Aws::Vector<GlobalInferenceGatewayMember>>
  void SetGateways(GatewaysT&& value) {
    m_gatewaysHasBeenSet = true;
    m_gateways = std::forward<GatewaysT>(value);
  }
  template <typename GatewaysT = Aws::Vector<GlobalInferenceGatewayMember>>
  CreateGlobalInferenceGatewayResult& WithGateways(GatewaysT&& value) {
    SetGateways(std::forward<GatewaysT>(value));
    return *this;
  }
  template <typename GatewaysT = GlobalInferenceGatewayMember>
  CreateGlobalInferenceGatewayResult& AddGateways(GatewaysT&& value) {
    m_gatewaysHasBeenSet = true;
    m_gateways.emplace_back(std::forward<GatewaysT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateGlobalInferenceGatewayResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  GlobalInferenceGatewayStatus m_status{GlobalInferenceGatewayStatus::NOT_SET};

  Aws::String m_executionRoleArn;

  GlobalInferenceGatewayRouting m_routing;

  Aws::Vector<GlobalInferenceGatewayMember> m_gateways;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_routingHasBeenSet = false;
  bool m_gatewaysHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
