/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/BatchGetSecurityRequirementResult.h>
#include <aws/securityagent/model/BatchSecurityRequirementError.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class BatchGetSecurityRequirementsResult {
 public:
  AWS_SECURITYAGENT_API BatchGetSecurityRequirementsResult() = default;
  AWS_SECURITYAGENT_API BatchGetSecurityRequirementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetSecurityRequirementsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of security requirements that were successfully retrieved.</p>
   */
  inline const Aws::Vector<BatchGetSecurityRequirementResult>& GetSecurityRequirements() const { return m_securityRequirements; }
  template <typename SecurityRequirementsT = Aws::Vector<BatchGetSecurityRequirementResult>>
  void SetSecurityRequirements(SecurityRequirementsT&& value) {
    m_securityRequirementsHasBeenSet = true;
    m_securityRequirements = std::forward<SecurityRequirementsT>(value);
  }
  template <typename SecurityRequirementsT = Aws::Vector<BatchGetSecurityRequirementResult>>
  BatchGetSecurityRequirementsResult& WithSecurityRequirements(SecurityRequirementsT&& value) {
    SetSecurityRequirements(std::forward<SecurityRequirementsT>(value));
    return *this;
  }
  template <typename SecurityRequirementsT = BatchGetSecurityRequirementResult>
  BatchGetSecurityRequirementsResult& AddSecurityRequirements(SecurityRequirementsT&& value) {
    m_securityRequirementsHasBeenSet = true;
    m_securityRequirements.emplace_back(std::forward<SecurityRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of errors for security requirements that failed to be retrieved.</p>
   */
  inline const Aws::Vector<BatchSecurityRequirementError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchSecurityRequirementError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchSecurityRequirementError>>
  BatchGetSecurityRequirementsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchSecurityRequirementError>
  BatchGetSecurityRequirementsResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetSecurityRequirementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchGetSecurityRequirementResult> m_securityRequirements;

  Aws::Vector<BatchSecurityRequirementError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_securityRequirementsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
