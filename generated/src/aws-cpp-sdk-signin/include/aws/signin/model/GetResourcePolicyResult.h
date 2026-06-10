/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/SigninResourceBasedPolicy.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {
/**
 * <p>Output for GetResourcePolicy operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/GetResourcePolicyOutput">AWS
 * API Reference</a></p>
 */
class GetResourcePolicyResult {
 public:
  AWS_SIGNIN_API GetResourcePolicyResult() = default;
  AWS_SIGNIN_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The account's SignIn resource-based policy</p>
   */
  inline const SigninResourceBasedPolicy& GetSigninResourceBasedPolicy() const { return m_signinResourceBasedPolicy; }
  template <typename SigninResourceBasedPolicyT = SigninResourceBasedPolicy>
  void SetSigninResourceBasedPolicy(SigninResourceBasedPolicyT&& value) {
    m_signinResourceBasedPolicyHasBeenSet = true;
    m_signinResourceBasedPolicy = std::forward<SigninResourceBasedPolicyT>(value);
  }
  template <typename SigninResourceBasedPolicyT = SigninResourceBasedPolicy>
  GetResourcePolicyResult& WithSigninResourceBasedPolicy(SigninResourceBasedPolicyT&& value) {
    SetSigninResourceBasedPolicy(std::forward<SigninResourceBasedPolicyT>(value));
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
  GetResourcePolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  SigninResourceBasedPolicy m_signinResourceBasedPolicy;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_signinResourceBasedPolicyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
