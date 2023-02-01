/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroupResponse.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class UpdateRuleGroupResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateRuleGroupResult();
    AWS_NETWORKFIREWALL_API UpdateRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateToken = value; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateRuleGroupResult& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateRuleGroupResult& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the rule group. The token marks the state of the rule group
     * resource at the time of the request. </p> <p>To make changes to the rule group,
     * you provide the token in your request. Network Firewall uses the token to ensure
     * that the rule group hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the rule group again to get a current copy of it with a
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateRuleGroupResult& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline const RuleGroupResponse& GetRuleGroupResponse() const{ return m_ruleGroupResponse; }

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline void SetRuleGroupResponse(const RuleGroupResponse& value) { m_ruleGroupResponse = value; }

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline void SetRuleGroupResponse(RuleGroupResponse&& value) { m_ruleGroupResponse = std::move(value); }

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline UpdateRuleGroupResult& WithRuleGroupResponse(const RuleGroupResponse& value) { SetRuleGroupResponse(value); return *this;}

    /**
     * <p>The high-level properties of a rule group. This, along with the
     * <a>RuleGroup</a>, define the rule group. You can retrieve all objects for a rule
     * group by calling <a>DescribeRuleGroup</a>. </p>
     */
    inline UpdateRuleGroupResult& WithRuleGroupResponse(RuleGroupResponse&& value) { SetRuleGroupResponse(std::move(value)); return *this;}

  private:

    Aws::String m_updateToken;

    RuleGroupResponse m_ruleGroupResponse;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
