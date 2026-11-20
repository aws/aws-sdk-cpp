/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMember.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberStatus.h>

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
class RemoveInferenceGatewayResult {
 public:
  AWS_SAGEMAKER_API RemoveInferenceGatewayResult() = default;
  AWS_SAGEMAKER_API RemoveInferenceGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API RemoveInferenceGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  RemoveInferenceGatewayResult& WithArn(ArnT&& value) {
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
  RemoveInferenceGatewayResult& WithId(IdT&& value) {
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
  RemoveInferenceGatewayResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The in-cluster inference gateway that you removed.</p>
   */
  inline const GlobalInferenceGatewayMember& GetGateway() const { return m_gateway; }
  template <typename GatewayT = GlobalInferenceGatewayMember>
  void SetGateway(GatewayT&& value) {
    m_gatewayHasBeenSet = true;
    m_gateway = std::forward<GatewayT>(value);
  }
  template <typename GatewayT = GlobalInferenceGatewayMember>
  RemoveInferenceGatewayResult& WithGateway(GatewayT&& value) {
    SetGateway(std::forward<GatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the in-cluster inference gateway in the global inference
   * gateway. This value is absent if the in-cluster inference gateway wasn't in the
   * global inference gateway.</p>
   */
  inline GlobalInferenceGatewayMemberStatus GetStatus() const { return m_status; }
  inline void SetStatus(GlobalInferenceGatewayMemberStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RemoveInferenceGatewayResult& WithStatus(GlobalInferenceGatewayMemberStatus value) {
    SetStatus(value);
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
  RemoveInferenceGatewayResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  GlobalInferenceGatewayMember m_gateway;

  GlobalInferenceGatewayMemberStatus m_status{GlobalInferenceGatewayMemberStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_gatewayHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
