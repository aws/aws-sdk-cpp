/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/CreateOAuth2TokenResponseBody.h>

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
 * <p>Output structure for CreateOAuth2Token operation</p> <p>Contains flattened
 * token operation outputs for both authorization code and refresh token flows. The
 * response content depends on the grant_type from the original
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenResponse">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenResult {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenResult() = default;
  AWS_SIGNIN_API CreateOAuth2TokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API CreateOAuth2TokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Flattened token operation outputs The specific response fields depend on the
   * grant_type used in the request</p>
   */
  inline const CreateOAuth2TokenResponseBody& GetTokenOutput() const { return m_tokenOutput; }
  template <typename TokenOutputT = CreateOAuth2TokenResponseBody>
  void SetTokenOutput(TokenOutputT&& value) {
    m_tokenOutputHasBeenSet = true;
    m_tokenOutput = std::forward<TokenOutputT>(value);
  }
  template <typename TokenOutputT = CreateOAuth2TokenResponseBody>
  CreateOAuth2TokenResult& WithTokenOutput(TokenOutputT&& value) {
    SetTokenOutput(std::forward<TokenOutputT>(value));
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
  CreateOAuth2TokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  CreateOAuth2TokenResponseBody m_tokenOutput;
  bool m_tokenOutputHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
