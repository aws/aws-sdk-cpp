/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AutomationRulesMetadata.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListAutomationRulesResult
  {
  public:
    AWS_SECURITYHUB_API ListAutomationRulesResult();
    AWS_SECURITYHUB_API ListAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListAutomationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline const Aws::Vector<AutomationRulesMetadata>& GetAutomationRulesMetadata() const{ return m_automationRulesMetadata; }

    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline void SetAutomationRulesMetadata(const Aws::Vector<AutomationRulesMetadata>& value) { m_automationRulesMetadata = value; }

    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline void SetAutomationRulesMetadata(Aws::Vector<AutomationRulesMetadata>&& value) { m_automationRulesMetadata = std::move(value); }

    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline ListAutomationRulesResult& WithAutomationRulesMetadata(const Aws::Vector<AutomationRulesMetadata>& value) { SetAutomationRulesMetadata(value); return *this;}

    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline ListAutomationRulesResult& WithAutomationRulesMetadata(Aws::Vector<AutomationRulesMetadata>&& value) { SetAutomationRulesMetadata(std::move(value)); return *this;}

    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline ListAutomationRulesResult& AddAutomationRulesMetadata(const AutomationRulesMetadata& value) { m_automationRulesMetadata.push_back(value); return *this; }

    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline ListAutomationRulesResult& AddAutomationRulesMetadata(AutomationRulesMetadata&& value) { m_automationRulesMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p> A pagination token for the response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token for the response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A pagination token for the response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A pagination token for the response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A pagination token for the response. </p>
     */
    inline ListAutomationRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token for the response. </p>
     */
    inline ListAutomationRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token for the response. </p>
     */
    inline ListAutomationRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAutomationRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAutomationRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAutomationRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AutomationRulesMetadata> m_automationRulesMetadata;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
