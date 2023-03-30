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
  class UpdateRuleResult
  {
  public:
    AWS_VPCLATTICE_API UpdateRuleResult();
    AWS_VPCLATTICE_API UpdateRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API UpdateRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline void SetAction(const RuleAction& value) { m_action = value; }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline void SetAction(RuleAction&& value) { m_action = std::move(value); }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline UpdateRuleResult& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline UpdateRuleResult& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the listener.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the listener.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the listener.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the listener.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the listener.</p>
     */
    inline UpdateRuleResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the listener.</p>
     */
    inline UpdateRuleResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the listener.</p>
     */
    inline UpdateRuleResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }

    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline void SetIsDefault(bool value) { m_isDefault = value; }

    /**
     * <p>Indicates whether this is the default rule.</p>
     */
    inline UpdateRuleResult& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The rule match.</p>
     */
    inline const RuleMatch& GetMatch() const{ return m_match; }

    /**
     * <p>The rule match.</p>
     */
    inline void SetMatch(const RuleMatch& value) { m_match = value; }

    /**
     * <p>The rule match.</p>
     */
    inline void SetMatch(RuleMatch&& value) { m_match = std::move(value); }

    /**
     * <p>The rule match.</p>
     */
    inline UpdateRuleResult& WithMatch(const RuleMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The rule match.</p>
     */
    inline UpdateRuleResult& WithMatch(RuleMatch&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>The name of the listener.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the listener.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the listener.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the listener.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the listener.</p>
     */
    inline UpdateRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the listener.</p>
     */
    inline UpdateRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the listener.</p>
     */
    inline UpdateRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The rule priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The rule priority.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The rule priority.</p>
     */
    inline UpdateRuleResult& WithPriority(int value) { SetPriority(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RuleAction m_action;

    Aws::String m_arn;

    Aws::String m_id;

    bool m_isDefault;

    RuleMatch m_match;

    Aws::String m_name;

    int m_priority;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
