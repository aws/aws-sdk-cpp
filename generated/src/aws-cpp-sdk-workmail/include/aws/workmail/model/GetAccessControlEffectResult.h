/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/AccessControlRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetAccessControlEffectResult
  {
  public:
    AWS_WORKMAIL_API GetAccessControlEffectResult();
    AWS_WORKMAIL_API GetAccessControlEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetAccessControlEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rule effect.</p>
     */
    inline const AccessControlRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The rule effect.</p>
     */
    inline void SetEffect(const AccessControlRuleEffect& value) { m_effect = value; }

    /**
     * <p>The rule effect.</p>
     */
    inline void SetEffect(AccessControlRuleEffect&& value) { m_effect = std::move(value); }

    /**
     * <p>The rule effect.</p>
     */
    inline GetAccessControlEffectResult& WithEffect(const AccessControlRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The rule effect.</p>
     */
    inline GetAccessControlEffectResult& WithEffect(AccessControlRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedRules() const{ return m_matchedRules; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline void SetMatchedRules(const Aws::Vector<Aws::String>& value) { m_matchedRules = value; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline void SetMatchedRules(Aws::Vector<Aws::String>&& value) { m_matchedRules = std::move(value); }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& WithMatchedRules(const Aws::Vector<Aws::String>& value) { SetMatchedRules(value); return *this;}

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& WithMatchedRules(Aws::Vector<Aws::String>&& value) { SetMatchedRules(std::move(value)); return *this;}

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& AddMatchedRules(const Aws::String& value) { m_matchedRules.push_back(value); return *this; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& AddMatchedRules(Aws::String&& value) { m_matchedRules.push_back(std::move(value)); return *this; }

    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline GetAccessControlEffectResult& AddMatchedRules(const char* value) { m_matchedRules.push_back(value); return *this; }

  private:

    AccessControlRuleEffect m_effect;

    Aws::Vector<Aws::String> m_matchedRules;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
