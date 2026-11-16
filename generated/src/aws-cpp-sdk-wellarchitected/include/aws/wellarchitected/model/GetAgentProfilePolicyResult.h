/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class GetAgentProfilePolicyResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentProfilePolicyResult() = default;
  AWS_WELLARCHITECTED_API GetAgentProfilePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentProfilePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the Agent Profile.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  GetAgentProfilePolicyResult& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM resource-based policy document in JSON format.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  GetAgentProfilePolicyResult& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
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
  GetAgentProfilePolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_profileArn;

  Aws::String m_policy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_profileArnHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
