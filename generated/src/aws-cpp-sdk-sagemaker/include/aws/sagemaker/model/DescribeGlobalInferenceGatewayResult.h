/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
class DescribeGlobalInferenceGatewayResult {
 public:
  AWS_SAGEMAKER_API DescribeGlobalInferenceGatewayResult() = default;
  AWS_SAGEMAKER_API DescribeGlobalInferenceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeGlobalInferenceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  DescribeGlobalInferenceGatewayResult& WithArn(ArnT&& value) {
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
  DescribeGlobalInferenceGatewayResult& WithId(IdT&& value) {
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
  DescribeGlobalInferenceGatewayResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the global inference
   * gateway assumes to access your SageMaker HyperPod clusters. You can't change the
   * role after you create the global inference gateway.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  DescribeGlobalInferenceGatewayResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the global inference gateway.</p>
   */
  inline GlobalInferenceGatewayStatus GetStatus() const { return m_status; }
  inline void SetStatus(GlobalInferenceGatewayStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeGlobalInferenceGatewayResult& WithStatus(GlobalInferenceGatewayStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL that you use to invoke the global inference gateway. This value is
   * set after the global inference gateway becomes <code>ACTIVE</code>.</p>
   */
  inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
  template <typename EndpointUrlT = Aws::String>
  void SetEndpointUrl(EndpointUrlT&& value) {
    m_endpointUrlHasBeenSet = true;
    m_endpointUrl = std::forward<EndpointUrlT>(value);
  }
  template <typename EndpointUrlT = Aws::String>
  DescribeGlobalInferenceGatewayResult& WithEndpointUrl(EndpointUrlT&& value) {
    SetEndpointUrl(std::forward<EndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the VPC endpoint service to create an interface VPC endpoint (AWS
   * PrivateLink) from, so that you can call <code>EndpointUrl</code> without going
   * over the internet. This value is set after the global inference gateway becomes
   * <code>ACTIVE</code>.</p>
   */
  inline const Aws::String& GetVpcEndpointServiceName() const { return m_vpcEndpointServiceName; }
  template <typename VpcEndpointServiceNameT = Aws::String>
  void SetVpcEndpointServiceName(VpcEndpointServiceNameT&& value) {
    m_vpcEndpointServiceNameHasBeenSet = true;
    m_vpcEndpointServiceName = std::forward<VpcEndpointServiceNameT>(value);
  }
  template <typename VpcEndpointServiceNameT = Aws::String>
  DescribeGlobalInferenceGatewayResult& WithVpcEndpointServiceName(VpcEndpointServiceNameT&& value) {
    SetVpcEndpointServiceName(std::forward<VpcEndpointServiceNameT>(value));
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
  DescribeGlobalInferenceGatewayResult& WithRouting(RoutingT&& value) {
    SetRouting(std::forward<RoutingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the global inference gateway was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeGlobalInferenceGatewayResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the global inference gateway failed. SageMaker returns this
   * value only when the status is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  DescribeGlobalInferenceGatewayResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  DescribeGlobalInferenceGatewayResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_executionRoleArn;

  GlobalInferenceGatewayStatus m_status{GlobalInferenceGatewayStatus::NOT_SET};

  Aws::String m_endpointUrl;

  Aws::String m_vpcEndpointServiceName;

  GlobalInferenceGatewayRouting m_routing;

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_endpointUrlHasBeenSet = false;
  bool m_vpcEndpointServiceNameHasBeenSet = false;
  bool m_routingHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
