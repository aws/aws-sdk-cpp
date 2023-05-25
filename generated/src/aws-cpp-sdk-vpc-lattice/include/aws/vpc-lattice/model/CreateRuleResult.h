/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/RuleMatch.h>
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
namespace VPCLattice
{
namespace Model
{
  class CreateRuleResult
  {
  public:
    AWS_VPCLATTICE_API CreateRuleResult();
    AWS_VPCLATTICE_API CreateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The rule action. Each rule must include exactly one of the following types of
     * actions: <code>forward </code>or <code>fixed-response</code>, and it must be the
     * last action to be performed.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }

    /**
     * <p>The rule action. Each rule must include exactly one of the following types of
     * actions: <code>forward </code>or <code>fixed-response</code>, and it must be the
     * last action to be performed.</p>
     */
    inline void SetAction(const RuleAction& value) { m_action = value; }

    /**
     * <p>The rule action. Each rule must include exactly one of the following types of
     * actions: <code>forward </code>or <code>fixed-response</code>, and it must be the
     * last action to be performed.</p>
     */
    inline void SetAction(RuleAction&& value) { m_action = std::move(value); }

    /**
     * <p>The rule action. Each rule must include exactly one of the following types of
     * actions: <code>forward </code>or <code>fixed-response</code>, and it must be the
     * last action to be performed.</p>
     */
    inline CreateRuleResult& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>The rule action. Each rule must include exactly one of the following types of
     * actions: <code>forward </code>or <code>fixed-response</code>, and it must be the
     * last action to be performed.</p>
     */
    inline CreateRuleResult& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline CreateRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline CreateRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the rule.</p>
     */
    inline CreateRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the rule.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the rule.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the rule.</p>
     */
    inline CreateRuleResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the rule.</p>
     */
    inline CreateRuleResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule.</p>
     */
    inline CreateRuleResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The rule match. The <code>RuleMatch</code> must be an <code>HttpMatch</code>.
     * This means that the rule should be an exact match on HTTP constraints which are
     * made up of the HTTP method, path, and header.</p>
     */
    inline const RuleMatch& GetMatch() const{ return m_match; }

    /**
     * <p>The rule match. The <code>RuleMatch</code> must be an <code>HttpMatch</code>.
     * This means that the rule should be an exact match on HTTP constraints which are
     * made up of the HTTP method, path, and header.</p>
     */
    inline void SetMatch(const RuleMatch& value) { m_match = value; }

    /**
     * <p>The rule match. The <code>RuleMatch</code> must be an <code>HttpMatch</code>.
     * This means that the rule should be an exact match on HTTP constraints which are
     * made up of the HTTP method, path, and header.</p>
     */
    inline void SetMatch(RuleMatch&& value) { m_match = std::move(value); }

    /**
     * <p>The rule match. The <code>RuleMatch</code> must be an <code>HttpMatch</code>.
     * This means that the rule should be an exact match on HTTP constraints which are
     * made up of the HTTP method, path, and header.</p>
     */
    inline CreateRuleResult& WithMatch(const RuleMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The rule match. The <code>RuleMatch</code> must be an <code>HttpMatch</code>.
     * This means that the rule should be an exact match on HTTP constraints which are
     * made up of the HTTP method, path, and header.</p>
     */
    inline CreateRuleResult& WithMatch(RuleMatch&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline CreateRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline CreateRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline CreateRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The priority assigned to the rule. The lower the priority number the higher
     * the priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority assigned to the rule. The lower the priority number the higher
     * the priority.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The priority assigned to the rule. The lower the priority number the higher
     * the priority.</p>
     */
    inline CreateRuleResult& WithPriority(int value) { SetPriority(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RuleAction m_action;

    Aws::String m_arn;

    Aws::String m_id;

    RuleMatch m_match;

    Aws::String m_name;

    int m_priority;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
