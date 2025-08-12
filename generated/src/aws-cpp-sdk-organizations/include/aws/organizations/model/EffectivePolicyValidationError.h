/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains details about the validation errors that occurred when generating or
   * enforcing an <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_effective.html">effective
   * policy</a>, such as which policies contributed to the error and location of the
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EffectivePolicyValidationError">AWS
   * API Reference</a></p>
   */
  class EffectivePolicyValidationError
  {
  public:
    AWS_ORGANIZATIONS_API EffectivePolicyValidationError() = default;
    AWS_ORGANIZATIONS_API EffectivePolicyValidationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API EffectivePolicyValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for the validation error. For example,
     * <code>ELEMENTS_TOO_MANY</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    EffectivePolicyValidationError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the validation error.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    EffectivePolicyValidationError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path within the effective policy where the validation error occurred.</p>
     */
    inline const Aws::String& GetPathToError() const { return m_pathToError; }
    inline bool PathToErrorHasBeenSet() const { return m_pathToErrorHasBeenSet; }
    template<typename PathToErrorT = Aws::String>
    void SetPathToError(PathToErrorT&& value) { m_pathToErrorHasBeenSet = true; m_pathToError = std::forward<PathToErrorT>(value); }
    template<typename PathToErrorT = Aws::String>
    EffectivePolicyValidationError& WithPathToError(PathToErrorT&& value) { SetPathToError(std::forward<PathToErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The individual policies <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_inheritance_mgmt.html">inherited</a>
     * and <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_policies_attach.html">attached</a>
     * to the account which contributed to the validation error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContributingPolicies() const { return m_contributingPolicies; }
    inline bool ContributingPoliciesHasBeenSet() const { return m_contributingPoliciesHasBeenSet; }
    template<typename ContributingPoliciesT = Aws::Vector<Aws::String>>
    void SetContributingPolicies(ContributingPoliciesT&& value) { m_contributingPoliciesHasBeenSet = true; m_contributingPolicies = std::forward<ContributingPoliciesT>(value); }
    template<typename ContributingPoliciesT = Aws::Vector<Aws::String>>
    EffectivePolicyValidationError& WithContributingPolicies(ContributingPoliciesT&& value) { SetContributingPolicies(std::forward<ContributingPoliciesT>(value)); return *this;}
    template<typename ContributingPoliciesT = Aws::String>
    EffectivePolicyValidationError& AddContributingPolicies(ContributingPoliciesT&& value) { m_contributingPoliciesHasBeenSet = true; m_contributingPolicies.emplace_back(std::forward<ContributingPoliciesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_pathToError;
    bool m_pathToErrorHasBeenSet = false;

    Aws::Vector<Aws::String> m_contributingPolicies;
    bool m_contributingPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
