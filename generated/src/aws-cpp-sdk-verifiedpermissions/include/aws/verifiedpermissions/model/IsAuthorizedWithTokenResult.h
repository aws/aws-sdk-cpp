/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/Decision.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/DeterminingPolicyItem.h>
#include <aws/verifiedpermissions/model/EvaluationErrorItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class IsAuthorizedWithTokenResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedWithTokenResult() = default;
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedWithTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedWithTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline Decision GetDecision() const { return m_decision; }
    inline void SetDecision(Decision value) { m_decisionHasBeenSet = true; m_decision = value; }
    inline IsAuthorizedWithTokenResult& WithDecision(Decision value) { SetDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are multiple matching policies, where at least one is a forbid
     * policy, then because forbid always overrides permit the forbid policies are the
     * determining policies. If all matching policies are permit policies, then those
     * policies are the determining policies. When no policies match and the response
     * is the default DENY, there are no determining policies.</p>
     */
    inline const Aws::Vector<DeterminingPolicyItem>& GetDeterminingPolicies() const { return m_determiningPolicies; }
    template<typename DeterminingPoliciesT = Aws::Vector<DeterminingPolicyItem>>
    void SetDeterminingPolicies(DeterminingPoliciesT&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies = std::forward<DeterminingPoliciesT>(value); }
    template<typename DeterminingPoliciesT = Aws::Vector<DeterminingPolicyItem>>
    IsAuthorizedWithTokenResult& WithDeterminingPolicies(DeterminingPoliciesT&& value) { SetDeterminingPolicies(std::forward<DeterminingPoliciesT>(value)); return *this;}
    template<typename DeterminingPoliciesT = DeterminingPolicyItem>
    IsAuthorizedWithTokenResult& AddDeterminingPolicies(DeterminingPoliciesT&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies.emplace_back(std::forward<DeterminingPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy references an entity or entity attribute that does not exist in the
     * slice.</p>
     */
    inline const Aws::Vector<EvaluationErrorItem>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<EvaluationErrorItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<EvaluationErrorItem>>
    IsAuthorizedWithTokenResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = EvaluationErrorItem>
    IsAuthorizedWithTokenResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the principal in the ID or access token.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const { return m_principal; }
    template<typename PrincipalT = EntityIdentifier>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = EntityIdentifier>
    IsAuthorizedWithTokenResult& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    IsAuthorizedWithTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Decision m_decision{Decision::NOT_SET};
    bool m_decisionHasBeenSet = false;

    Aws::Vector<DeterminingPolicyItem> m_determiningPolicies;
    bool m_determiningPoliciesHasBeenSet = false;

    Aws::Vector<EvaluationErrorItem> m_errors;
    bool m_errorsHasBeenSet = false;

    EntityIdentifier m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
