/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/ImpersonationRoleType.h>
#include <aws/workmail/model/AccessEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/ImpersonationMatchedRule.h>
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
namespace WorkMail
{
namespace Model
{
  class GetImpersonationRoleEffectResult
  {
  public:
    AWS_WORKMAIL_API GetImpersonationRoleEffectResult();
    AWS_WORKMAIL_API GetImpersonationRoleEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetImpersonationRoleEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The impersonation role type.</p>
     */
    inline const ImpersonationRoleType& GetType() const{ return m_type; }

    /**
     * <p>The impersonation role type.</p>
     */
    inline void SetType(const ImpersonationRoleType& value) { m_type = value; }

    /**
     * <p>The impersonation role type.</p>
     */
    inline void SetType(ImpersonationRoleType&& value) { m_type = std::move(value); }

    /**
     * <p>The impersonation role type.</p>
     */
    inline GetImpersonationRoleEffectResult& WithType(const ImpersonationRoleType& value) { SetType(value); return *this;}

    /**
     * <p>The impersonation role type.</p>
     */
    inline GetImpersonationRoleEffectResult& WithType(ImpersonationRoleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> <code/>Effect of the impersonation role on the target user based on its
     * rules. Available effects are <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const AccessEffect& GetEffect() const{ return m_effect; }

    /**
     * <p> <code/>Effect of the impersonation role on the target user based on its
     * rules. Available effects are <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(const AccessEffect& value) { m_effect = value; }

    /**
     * <p> <code/>Effect of the impersonation role on the target user based on its
     * rules. Available effects are <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(AccessEffect&& value) { m_effect = std::move(value); }

    /**
     * <p> <code/>Effect of the impersonation role on the target user based on its
     * rules. Available effects are <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline GetImpersonationRoleEffectResult& WithEffect(const AccessEffect& value) { SetEffect(value); return *this;}

    /**
     * <p> <code/>Effect of the impersonation role on the target user based on its
     * rules. Available effects are <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline GetImpersonationRoleEffectResult& WithEffect(AccessEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline const Aws::Vector<ImpersonationMatchedRule>& GetMatchedRules() const{ return m_matchedRules; }

    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline void SetMatchedRules(const Aws::Vector<ImpersonationMatchedRule>& value) { m_matchedRules = value; }

    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline void SetMatchedRules(Aws::Vector<ImpersonationMatchedRule>&& value) { m_matchedRules = std::move(value); }

    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline GetImpersonationRoleEffectResult& WithMatchedRules(const Aws::Vector<ImpersonationMatchedRule>& value) { SetMatchedRules(value); return *this;}

    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline GetImpersonationRoleEffectResult& WithMatchedRules(Aws::Vector<ImpersonationMatchedRule>&& value) { SetMatchedRules(std::move(value)); return *this;}

    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline GetImpersonationRoleEffectResult& AddMatchedRules(const ImpersonationMatchedRule& value) { m_matchedRules.push_back(value); return *this; }

    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline GetImpersonationRoleEffectResult& AddMatchedRules(ImpersonationMatchedRule&& value) { m_matchedRules.push_back(std::move(value)); return *this; }

  private:

    ImpersonationRoleType m_type;

    AccessEffect m_effect;

    Aws::Vector<ImpersonationMatchedRule> m_matchedRules;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
