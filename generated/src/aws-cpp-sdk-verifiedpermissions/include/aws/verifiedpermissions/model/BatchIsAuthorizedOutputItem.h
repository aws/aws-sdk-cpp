/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedInputItem.h>
#include <aws/verifiedpermissions/model/Decision.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/DeterminingPolicyItem.h>
#include <aws/verifiedpermissions/model/EvaluationErrorItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The decision, based on policy evaluation, from an individual authorization
   * request in a <code>BatchIsAuthorized</code> API request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchIsAuthorizedOutputItem">AWS
   * API Reference</a></p>
   */
  class BatchIsAuthorizedOutputItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedOutputItem() = default;
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline const BatchIsAuthorizedInputItem& GetRequest() const { return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    template<typename RequestT = BatchIsAuthorizedInputItem>
    void SetRequest(RequestT&& value) { m_requestHasBeenSet = true; m_request = std::forward<RequestT>(value); }
    template<typename RequestT = BatchIsAuthorizedInputItem>
    BatchIsAuthorizedOutputItem& WithRequest(RequestT&& value) { SetRequest(std::forward<RequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline Decision GetDecision() const { return m_decision; }
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }
    inline void SetDecision(Decision value) { m_decisionHasBeenSet = true; m_decision = value; }
    inline BatchIsAuthorizedOutputItem& WithDecision(Decision value) { SetDecision(value); return *this;}
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
    inline bool DeterminingPoliciesHasBeenSet() const { return m_determiningPoliciesHasBeenSet; }
    template<typename DeterminingPoliciesT = Aws::Vector<DeterminingPolicyItem>>
    void SetDeterminingPolicies(DeterminingPoliciesT&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies = std::forward<DeterminingPoliciesT>(value); }
    template<typename DeterminingPoliciesT = Aws::Vector<DeterminingPolicyItem>>
    BatchIsAuthorizedOutputItem& WithDeterminingPolicies(DeterminingPoliciesT&& value) { SetDeterminingPolicies(std::forward<DeterminingPoliciesT>(value)); return *this;}
    template<typename DeterminingPoliciesT = DeterminingPolicyItem>
    BatchIsAuthorizedOutputItem& AddDeterminingPolicies(DeterminingPoliciesT&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies.emplace_back(std::forward<DeterminingPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline const Aws::Vector<EvaluationErrorItem>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<EvaluationErrorItem>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<EvaluationErrorItem>>
    BatchIsAuthorizedOutputItem& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = EvaluationErrorItem>
    BatchIsAuthorizedOutputItem& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}
  private:

    BatchIsAuthorizedInputItem m_request;
    bool m_requestHasBeenSet = false;

    Decision m_decision{Decision::NOT_SET};
    bool m_decisionHasBeenSet = false;

    Aws::Vector<DeterminingPolicyItem> m_determiningPolicies;
    bool m_determiningPoliciesHasBeenSet = false;

    Aws::Vector<EvaluationErrorItem> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
