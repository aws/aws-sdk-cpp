/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/EffectivePolicyType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/EffectivePolicyValidationError.h>
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
namespace Organizations
{
namespace Model
{
  class ListEffectivePolicyValidationErrorsResult
  {
  public:
    AWS_ORGANIZATIONS_API ListEffectivePolicyValidationErrorsResult() = default;
    AWS_ORGANIZATIONS_API ListEffectivePolicyValidationErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListEffectivePolicyValidationErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the specified account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListEffectivePolicyValidationErrorsResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified policy type. One of the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_declarative.html">DECLARATIVE_POLICY_EC2</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_chatbot.html">CHATBOT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_security_hub.html">SECURITYHUB_POLICY</a>
     * </p> </li> </ul>
     */
    inline EffectivePolicyType GetPolicyType() const { return m_policyType; }
    inline void SetPolicyType(EffectivePolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline ListEffectivePolicyValidationErrorsResult& WithPolicyType(EffectivePolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path in the organization where the specified account exists.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    ListEffectivePolicyValidationErrorsResult& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the latest effective policy was generated for the specified
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationTimestamp() const { return m_evaluationTimestamp; }
    template<typename EvaluationTimestampT = Aws::Utils::DateTime>
    void SetEvaluationTimestamp(EvaluationTimestampT&& value) { m_evaluationTimestampHasBeenSet = true; m_evaluationTimestamp = std::forward<EvaluationTimestampT>(value); }
    template<typename EvaluationTimestampT = Aws::Utils::DateTime>
    ListEffectivePolicyValidationErrorsResult& WithEvaluationTimestamp(EvaluationTimestampT&& value) { SetEvaluationTimestamp(std::forward<EvaluationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEffectivePolicyValidationErrorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>EffectivePolicyValidationError</code> object contains details about
     * the validation errors that occurred when generating or enforcing an effective
     * policy, such as which policies contributed to the error and location of the
     * error.</p>
     */
    inline const Aws::Vector<EffectivePolicyValidationError>& GetEffectivePolicyValidationErrors() const { return m_effectivePolicyValidationErrors; }
    template<typename EffectivePolicyValidationErrorsT = Aws::Vector<EffectivePolicyValidationError>>
    void SetEffectivePolicyValidationErrors(EffectivePolicyValidationErrorsT&& value) { m_effectivePolicyValidationErrorsHasBeenSet = true; m_effectivePolicyValidationErrors = std::forward<EffectivePolicyValidationErrorsT>(value); }
    template<typename EffectivePolicyValidationErrorsT = Aws::Vector<EffectivePolicyValidationError>>
    ListEffectivePolicyValidationErrorsResult& WithEffectivePolicyValidationErrors(EffectivePolicyValidationErrorsT&& value) { SetEffectivePolicyValidationErrors(std::forward<EffectivePolicyValidationErrorsT>(value)); return *this;}
    template<typename EffectivePolicyValidationErrorsT = EffectivePolicyValidationError>
    ListEffectivePolicyValidationErrorsResult& AddEffectivePolicyValidationErrors(EffectivePolicyValidationErrorsT&& value) { m_effectivePolicyValidationErrorsHasBeenSet = true; m_effectivePolicyValidationErrors.emplace_back(std::forward<EffectivePolicyValidationErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEffectivePolicyValidationErrorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    EffectivePolicyType m_policyType{EffectivePolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationTimestamp{};
    bool m_evaluationTimestampHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EffectivePolicyValidationError> m_effectivePolicyValidationErrors;
    bool m_effectivePolicyValidationErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
