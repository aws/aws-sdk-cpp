/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedWithTokenInputItem.h>
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
   * request in a <code>BatchIsAuthorizedWithToken</code> API request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchIsAuthorizedWithTokenOutputItem">AWS
   * API Reference</a></p>
   */
  class BatchIsAuthorizedWithTokenOutputItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenOutputItem();
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline const BatchIsAuthorizedWithTokenInputItem& GetRequest() const{ return m_request; }

    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }

    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline void SetRequest(const BatchIsAuthorizedWithTokenInputItem& value) { m_requestHasBeenSet = true; m_request = value; }

    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline void SetRequest(BatchIsAuthorizedWithTokenInputItem&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }

    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithRequest(const BatchIsAuthorizedWithTokenInputItem& value) { SetRequest(value); return *this;}

    /**
     * <p>The authorization request that initiated the decision.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithRequest(BatchIsAuthorizedWithTokenInputItem&& value) { SetRequest(std::move(value)); return *this;}


    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline const Decision& GetDecision() const{ return m_decision; }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline bool DecisionHasBeenSet() const { return m_decisionHasBeenSet; }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline void SetDecision(const Decision& value) { m_decisionHasBeenSet = true; m_decision = value; }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline void SetDecision(Decision&& value) { m_decisionHasBeenSet = true; m_decision = std::move(value); }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithDecision(const Decision& value) { SetDecision(value); return *this;}

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithDecision(Decision&& value) { SetDecision(std::move(value)); return *this;}


    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline const Aws::Vector<DeterminingPolicyItem>& GetDeterminingPolicies() const{ return m_determiningPolicies; }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline bool DeterminingPoliciesHasBeenSet() const { return m_determiningPoliciesHasBeenSet; }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline void SetDeterminingPolicies(const Aws::Vector<DeterminingPolicyItem>& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies = value; }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline void SetDeterminingPolicies(Aws::Vector<DeterminingPolicyItem>&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies = std::move(value); }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithDeterminingPolicies(const Aws::Vector<DeterminingPolicyItem>& value) { SetDeterminingPolicies(value); return *this;}

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithDeterminingPolicies(Aws::Vector<DeterminingPolicyItem>&& value) { SetDeterminingPolicies(std::move(value)); return *this;}

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& AddDeterminingPolicies(const DeterminingPolicyItem& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies.push_back(value); return *this; }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& AddDeterminingPolicies(DeterminingPolicyItem&& value) { m_determiningPoliciesHasBeenSet = true; m_determiningPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline const Aws::Vector<EvaluationErrorItem>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline void SetErrors(const Aws::Vector<EvaluationErrorItem>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline void SetErrors(Aws::Vector<EvaluationErrorItem>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithErrors(const Aws::Vector<EvaluationErrorItem>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& WithErrors(Aws::Vector<EvaluationErrorItem>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& AddErrors(const EvaluationErrorItem& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Errors that occurred while making an authorization decision. For example, a
     * policy might reference an entity or attribute that doesn't exist in the
     * request.</p>
     */
    inline BatchIsAuthorizedWithTokenOutputItem& AddErrors(EvaluationErrorItem&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

  private:

    BatchIsAuthorizedWithTokenInputItem m_request;
    bool m_requestHasBeenSet = false;

    Decision m_decision;
    bool m_decisionHasBeenSet = false;

    Aws::Vector<DeterminingPolicyItem> m_determiningPolicies;
    bool m_determiningPoliciesHasBeenSet = false;

    Aws::Vector<EvaluationErrorItem> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
