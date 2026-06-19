/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/BatchCreateSecurityRequirementResult.h>
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
class BatchCreateSecurityRequirementsResult {
 public:
  AWS_SECURITYAGENT_API BatchCreateSecurityRequirementsResult() = default;
  AWS_SECURITYAGENT_API BatchCreateSecurityRequirementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchCreateSecurityRequirementsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of security requirements that were successfully created.</p>
   */
  inline const Aws::Vector<BatchCreateSecurityRequirementResult>& GetSecurityRequirements() const { return m_securityRequirements; }
  template <typename SecurityRequirementsT = Aws::Vector<BatchCreateSecurityRequirementResult>>
  void SetSecurityRequirements(SecurityRequirementsT&& value) {
    m_securityRequirementsHasBeenSet = true;
    m_securityRequirements = std::forward<SecurityRequirementsT>(value);
  }
  template <typename SecurityRequirementsT = Aws::Vector<BatchCreateSecurityRequirementResult>>
  BatchCreateSecurityRequirementsResult& WithSecurityRequirements(SecurityRequirementsT&& value) {
    SetSecurityRequirements(std::forward<SecurityRequirementsT>(value));
    return *this;
  }
  template <typename SecurityRequirementsT = BatchCreateSecurityRequirementResult>
  BatchCreateSecurityRequirementsResult& AddSecurityRequirements(SecurityRequirementsT&& value) {
    m_securityRequirementsHasBeenSet = true;
    m_securityRequirements.emplace_back(std::forward<SecurityRequirementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of errors for security requirements that failed to be created.</p>
   */
  inline const Aws::Vector<BatchSecurityRequirementError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchSecurityRequirementError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchSecurityRequirementError>>
  BatchCreateSecurityRequirementsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchSecurityRequirementError>
  BatchCreateSecurityRequirementsResult& AddErrors(ErrorsT&& value) {
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
  BatchCreateSecurityRequirementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchCreateSecurityRequirementResult> m_securityRequirements;

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
