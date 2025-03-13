/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/model/ValidationErrorsEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{
  class ValidateResourcePolicyResult
  {
  public:
    AWS_SECRETSMANAGER_API ValidateResourcePolicyResult() = default;
    AWS_SECRETSMANAGER_API ValidateResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API ValidateResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>True if your policy passes validation, otherwise false.</p>
     */
    inline bool GetPolicyValidationPassed() const { return m_policyValidationPassed; }
    inline void SetPolicyValidationPassed(bool value) { m_policyValidationPassedHasBeenSet = true; m_policyValidationPassed = value; }
    inline ValidateResourcePolicyResult& WithPolicyValidationPassed(bool value) { SetPolicyValidationPassed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline const Aws::Vector<ValidationErrorsEntry>& GetValidationErrors() const { return m_validationErrors; }
    template<typename ValidationErrorsT = Aws::Vector<ValidationErrorsEntry>>
    void SetValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = std::forward<ValidationErrorsT>(value); }
    template<typename ValidationErrorsT = Aws::Vector<ValidationErrorsEntry>>
    ValidateResourcePolicyResult& WithValidationErrors(ValidationErrorsT&& value) { SetValidationErrors(std::forward<ValidationErrorsT>(value)); return *this;}
    template<typename ValidationErrorsT = ValidationErrorsEntry>
    ValidateResourcePolicyResult& AddValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_policyValidationPassed{false};
    bool m_policyValidationPassedHasBeenSet = false;

    Aws::Vector<ValidationErrorsEntry> m_validationErrors;
    bool m_validationErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
