/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/Decision.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class IsAuthorizedResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedResult() = default;
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline Decision GetDecision() const { return m_decision; }
    inline void SetDecision(Decision value) { m_decisionHasBeenSet = true; m_decision = value; }
    inline IsAuthorizedResult& WithDecision(Decision value) { SetDecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline const Aws::Vector<DeterminingPolicyItem>& GetDeterminingPolicies() const { return m_determiningPolicies; }
    template<typename DeterminingPoliciesT = Aws::Vector<DeterminingPolicyItem>>
    void SetDeterminingPolicies(DeterminingPoliciesT&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies = std::forward<DeterminingPoliciesT>(value); }
    template<typename DeterminingPoliciesT = Aws::Vector<DeterminingPolicyItem>>
    IsAuthorizedResult& WithDeterminingPolicies(DeterminingPoliciesT&& value) { SetDeterminingPolicies(std::forward<DeterminingPoliciesT>(value)); return *this;}
    template<typename DeterminingPoliciesT = DeterminingPolicyItem>
    IsAuthorizedResult& AddDeterminingPolicies(DeterminingPoliciesT&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies.emplace_back(std::forward<DeterminingPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline const Aws::Vector<EvaluationErrorItem>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<EvaluationErrorItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<EvaluationErrorItem>>
    IsAuthorizedResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = EvaluationErrorItem>
    IsAuthorizedResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    IsAuthorizedResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Decision m_decision{Decision::NOT_SET};
    bool m_decisionHasBeenSet = false;

    Aws::Vector<DeterminingPolicyItem> m_determiningPolicies;
    bool m_determiningPoliciesHasBeenSet = false;

    Aws::Vector<EvaluationErrorItem> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
