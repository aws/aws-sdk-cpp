/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/Signin_EXPORTS.h>

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
 * <p>Output for PutResourcePermissionStatement operation</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/PutResourcePermissionStatementOutput">AWS
 * API Reference</a></p>
 */
class PutResourcePermissionStatementResult {
 public:
  AWS_SIGNIN_API PutResourcePermissionStatementResult() = default;
  AWS_SIGNIN_API PutResourcePermissionStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIGNIN_API PutResourcePermissionStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier for the created permission statement</p>
   */
  inline const Aws::String& GetStatementId() const { return m_statementId; }
  template <typename StatementIdT = Aws::String>
  void SetStatementId(StatementIdT&& value) {
    m_statementIdHasBeenSet = true;
    m_statementId = std::forward<StatementIdT>(value);
  }
  template <typename StatementIdT = Aws::String>
  PutResourcePermissionStatementResult& WithStatementId(StatementIdT&& value) {
    SetStatementId(std::forward<StatementIdT>(value));
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
  PutResourcePermissionStatementResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_statementId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statementIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
