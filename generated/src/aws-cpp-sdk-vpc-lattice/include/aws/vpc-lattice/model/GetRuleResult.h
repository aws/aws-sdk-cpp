/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetRuleResult
  {
  public:
    AWS_VPCLATTICE_API GetRuleResult();
    AWS_VPCLATTICE_API GetRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API GetRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The action for the default rule.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline void SetAction(const RuleAction& value) { m_action = value; }

    /**
     * <p>The action for the default rule.</p>
     */
    inline void SetAction(RuleAction&& value) { m_action = std::move(value); }

    /**
     * <p>The action for the default rule.</p>
     */
    inline GetRuleResult& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action for the default rule.</p>
     */
    inline GetRuleResult& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


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
    inline GetRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline GetRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline GetRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline GetRuleResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the listener rule was created, specified in ISO-8601
     * format.</p>
     */
    inline GetRuleResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline GetRuleResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the listener.</p>
     */
    inline GetRuleResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the listener.</p>
     */
    inline GetRuleResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline GetRuleResult& WithIsDefault(bool value) { SetIsDefault(value); return *this;}


    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetRuleResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the listener rule was last updated, specified in
     * ISO-8601 format.</p>
     */
    inline GetRuleResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


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
    inline GetRuleResult& WithMatch(const RuleMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The rule match.</p>
     */
    inline GetRuleResult& WithMatch(RuleMatch&& value) { SetMatch(std::move(value)); return *this;}


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
    inline GetRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the listener.</p>
     */
    inline GetRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the listener.</p>
     */
    inline GetRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The priority level for the specified rule.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority level for the specified rule.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The priority level for the specified rule.</p>
     */
    inline GetRuleResult& WithPriority(int value) { SetPriority(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RuleAction m_action;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_id;

    bool m_isDefault;

    Aws::Utils::DateTime m_lastUpdatedAt;

    RuleMatch m_match;

    Aws::String m_name;

    int m_priority;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
