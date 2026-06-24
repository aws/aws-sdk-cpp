/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
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
class BatchDeleteSecurityRequirementsResult {
 public:
  AWS_SECURITYAGENT_API BatchDeleteSecurityRequirementsResult() = default;
  AWS_SECURITYAGENT_API BatchDeleteSecurityRequirementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchDeleteSecurityRequirementsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of security requirement names that were successfully deleted.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDeletedSecurityRequirementNames() const { return m_deletedSecurityRequirementNames; }
  template <typename DeletedSecurityRequirementNamesT = Aws::Vector<Aws::String>>
  void SetDeletedSecurityRequirementNames(DeletedSecurityRequirementNamesT&& value) {
    m_deletedSecurityRequirementNamesHasBeenSet = true;
    m_deletedSecurityRequirementNames = std::forward<DeletedSecurityRequirementNamesT>(value);
  }
  template <typename DeletedSecurityRequirementNamesT = Aws::Vector<Aws::String>>
  BatchDeleteSecurityRequirementsResult& WithDeletedSecurityRequirementNames(DeletedSecurityRequirementNamesT&& value) {
    SetDeletedSecurityRequirementNames(std::forward<DeletedSecurityRequirementNamesT>(value));
    return *this;
  }
  template <typename DeletedSecurityRequirementNamesT = Aws::String>
  BatchDeleteSecurityRequirementsResult& AddDeletedSecurityRequirementNames(DeletedSecurityRequirementNamesT&& value) {
    m_deletedSecurityRequirementNamesHasBeenSet = true;
    m_deletedSecurityRequirementNames.emplace_back(std::forward<DeletedSecurityRequirementNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of errors for security requirements that failed to be deleted.</p>
   */
  inline const Aws::Vector<BatchSecurityRequirementError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchSecurityRequirementError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchSecurityRequirementError>>
  BatchDeleteSecurityRequirementsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchSecurityRequirementError>
  BatchDeleteSecurityRequirementsResult& AddErrors(ErrorsT&& value) {
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
  BatchDeleteSecurityRequirementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_deletedSecurityRequirementNames;

  Aws::Vector<BatchSecurityRequirementError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletedSecurityRequirementNamesHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
