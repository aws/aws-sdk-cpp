/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
class GetEndpointPolicyResult {
 public:
  AWS_SAGEMAKER_API GetEndpointPolicyResult() = default;
  AWS_SAGEMAKER_API GetEndpointPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API GetEndpointPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the endpoint.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  GetEndpointPolicyResult& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
   */
  inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
  template <typename EndpointArnT = Aws::String>
  void SetEndpointArn(EndpointArnT&& value) {
    m_endpointArnHasBeenSet = true;
    m_endpointArn = std::forward<EndpointArnT>(value);
  }
  template <typename EndpointArnT = Aws::String>
  GetEndpointPolicyResult& WithEndpointArn(EndpointArnT&& value) {
    SetEndpointArn(std::forward<EndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint policy, as a JSON policy document.</p>
   */
  inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
  template <typename ResourcePolicyT = Aws::String>
  void SetResourcePolicy(ResourcePolicyT&& value) {
    m_resourcePolicyHasBeenSet = true;
    m_resourcePolicy = std::forward<ResourcePolicyT>(value);
  }
  template <typename ResourcePolicyT = Aws::String>
  GetEndpointPolicyResult& WithResourcePolicy(ResourcePolicyT&& value) {
    SetResourcePolicy(std::forward<ResourcePolicyT>(value));
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
  GetEndpointPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_endpointName;

  Aws::String m_endpointArn;

  Aws::String m_resourcePolicy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_endpointNameHasBeenSet = false;
  bool m_endpointArnHasBeenSet = false;
  bool m_resourcePolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
