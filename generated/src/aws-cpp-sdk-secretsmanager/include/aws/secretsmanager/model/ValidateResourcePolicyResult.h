/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SECRETSMANAGER_API ValidateResourcePolicyResult();
    AWS_SECRETSMANAGER_API ValidateResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API ValidateResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>True if your policy passes validation, otherwise false.</p>
     */
    inline bool GetPolicyValidationPassed() const{ return m_policyValidationPassed; }

    /**
     * <p>True if your policy passes validation, otherwise false.</p>
     */
    inline void SetPolicyValidationPassed(bool value) { m_policyValidationPassed = value; }

    /**
     * <p>True if your policy passes validation, otherwise false.</p>
     */
    inline ValidateResourcePolicyResult& WithPolicyValidationPassed(bool value) { SetPolicyValidationPassed(value); return *this;}


    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline const Aws::Vector<ValidationErrorsEntry>& GetValidationErrors() const{ return m_validationErrors; }

    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline void SetValidationErrors(const Aws::Vector<ValidationErrorsEntry>& value) { m_validationErrors = value; }

    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline void SetValidationErrors(Aws::Vector<ValidationErrorsEntry>&& value) { m_validationErrors = std::move(value); }

    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline ValidateResourcePolicyResult& WithValidationErrors(const Aws::Vector<ValidationErrorsEntry>& value) { SetValidationErrors(value); return *this;}

    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline ValidateResourcePolicyResult& WithValidationErrors(Aws::Vector<ValidationErrorsEntry>&& value) { SetValidationErrors(std::move(value)); return *this;}

    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline ValidateResourcePolicyResult& AddValidationErrors(const ValidationErrorsEntry& value) { m_validationErrors.push_back(value); return *this; }

    /**
     * <p>Validation errors if your policy didn't pass validation.</p>
     */
    inline ValidateResourcePolicyResult& AddValidationErrors(ValidationErrorsEntry&& value) { m_validationErrors.push_back(std::move(value)); return *this; }

  private:

    bool m_policyValidationPassed;

    Aws::Vector<ValidationErrorsEntry> m_validationErrors;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
