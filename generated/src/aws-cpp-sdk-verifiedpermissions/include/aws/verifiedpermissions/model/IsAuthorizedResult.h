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
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedResult();
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API IsAuthorizedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline const Decision& GetDecision() const{ return m_decision; }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline void SetDecision(const Decision& value) { m_decision = value; }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline void SetDecision(Decision&& value) { m_decision = std::move(value); }

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline IsAuthorizedResult& WithDecision(const Decision& value) { SetDecision(value); return *this;}

    /**
     * <p>An authorization decision that indicates if the authorization request should
     * be allowed or denied.</p>
     */
    inline IsAuthorizedResult& WithDecision(Decision&& value) { SetDecision(std::move(value)); return *this;}


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
    inline void SetDeterminingPolicies(const Aws::Vector<DeterminingPolicyItem>& value) { m_determiningPolicies = value; }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline void SetDeterminingPolicies(Aws::Vector<DeterminingPolicyItem>&& value) { m_determiningPolicies = std::move(value); }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline IsAuthorizedResult& WithDeterminingPolicies(const Aws::Vector<DeterminingPolicyItem>& value) { SetDeterminingPolicies(value); return *this;}

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline IsAuthorizedResult& WithDeterminingPolicies(Aws::Vector<DeterminingPolicyItem>&& value) { SetDeterminingPolicies(std::move(value)); return *this;}

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline IsAuthorizedResult& AddDeterminingPolicies(const DeterminingPolicyItem& value) { m_determiningPolicies.push_back(value); return *this; }

    /**
     * <p>The list of determining policies used to make the authorization decision. For
     * example, if there are two matching policies, where one is a forbid and the other
     * is a permit, then the forbid policy will be the determining policy. In the case
     * of multiple matching permit policies then there would be multiple determining
     * policies. In the case that no policies match, and hence the response is DENY,
     * there would be no determining policies.</p>
     */
    inline IsAuthorizedResult& AddDeterminingPolicies(DeterminingPolicyItem&& value) { m_determiningPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline const Aws::Vector<EvaluationErrorItem>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline void SetErrors(const Aws::Vector<EvaluationErrorItem>& value) { m_errors = value; }

    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline void SetErrors(Aws::Vector<EvaluationErrorItem>&& value) { m_errors = std::move(value); }

    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline IsAuthorizedResult& WithErrors(const Aws::Vector<EvaluationErrorItem>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline IsAuthorizedResult& WithErrors(Aws::Vector<EvaluationErrorItem>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline IsAuthorizedResult& AddErrors(const EvaluationErrorItem& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Errors that occurred while making an authorization decision, for example, a
     * policy references an Entity or entity Attribute that does not exist in the
     * slice.</p>
     */
    inline IsAuthorizedResult& AddErrors(EvaluationErrorItem&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline IsAuthorizedResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline IsAuthorizedResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline IsAuthorizedResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Decision m_decision;

    Aws::Vector<DeterminingPolicyItem> m_determiningPolicies;

    Aws::Vector<EvaluationErrorItem> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
