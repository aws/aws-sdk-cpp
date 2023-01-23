/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <aws/network-firewall/model/StatefulRuleOptions.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeRuleGroupMetadataResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeRuleGroupMetadataResult();
    AWS_NETWORKFIREWALL_API DescribeRuleGroupMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeRuleGroupMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArn = value; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArn = std::move(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArn.assign(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline const Aws::String& GetRuleGroupName() const{ return m_ruleGroupName; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(const Aws::String& value) { m_ruleGroupName = value; }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(Aws::String&& value) { m_ruleGroupName = std::move(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline void SetRuleGroupName(const char* value) { m_ruleGroupName.assign(value); }

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithRuleGroupName(const Aws::String& value) { SetRuleGroupName(value); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithRuleGroupName(Aws::String&& value) { SetRuleGroupName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the rule group. You can't change the name of a rule
     * group after you create it.</p> <p>You must specify the ARN or the name, and you
     * can specify both. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithRuleGroupName(const char* value) { SetRuleGroupName(value); return *this;}


    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Returns the metadata objects for the specified rule group. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline const RuleGroupType& GetType() const{ return m_type; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline void SetType(const RuleGroupType& value) { m_type = value; }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline void SetType(RuleGroupType&& value) { m_type = std::move(value); }

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline DescribeRuleGroupMetadataResult& WithType(const RuleGroupType& value) { SetType(value); return *this;}

    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules. </p>  <p>This setting is required for requests that do not
     * include the <code>RuleGroupARN</code>.</p> 
     */
    inline DescribeRuleGroupMetadataResult& WithType(RuleGroupType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline int GetCapacity() const{ return m_capacity; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline void SetCapacity(int value) { m_capacity = value; }

    /**
     * <p>The maximum operating resources that this rule group can use. Rule group
     * capacity is fixed at creation. When you update a rule group, you are limited to
     * this capacity. When you reference a rule group from a firewall policy, Network
     * Firewall reserves this capacity for the rule group. </p> <p>You can retrieve the
     * capacity that would be required for a rule group before you create the rule
     * group by calling <a>CreateRuleGroup</a> with <code>DryRun</code> set to
     * <code>TRUE</code>. </p>
     */
    inline DescribeRuleGroupMetadataResult& WithCapacity(int value) { SetCapacity(value); return *this;}


    
    inline const StatefulRuleOptions& GetStatefulRuleOptions() const{ return m_statefulRuleOptions; }

    
    inline void SetStatefulRuleOptions(const StatefulRuleOptions& value) { m_statefulRuleOptions = value; }

    
    inline void SetStatefulRuleOptions(StatefulRuleOptions&& value) { m_statefulRuleOptions = std::move(value); }

    
    inline DescribeRuleGroupMetadataResult& WithStatefulRuleOptions(const StatefulRuleOptions& value) { SetStatefulRuleOptions(value); return *this;}

    
    inline DescribeRuleGroupMetadataResult& WithStatefulRuleOptions(StatefulRuleOptions&& value) { SetStatefulRuleOptions(std::move(value)); return *this;}


    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline DescribeRuleGroupMetadataResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time that the rule group was changed.</p>
     */
    inline DescribeRuleGroupMetadataResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_ruleGroupArn;

    Aws::String m_ruleGroupName;

    Aws::String m_description;

    RuleGroupType m_type;

    int m_capacity;

    StatefulRuleOptions m_statefulRuleOptions;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
