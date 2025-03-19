/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/UnprocessedAutomationRule.h>
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
  class BatchUpdateAutomationRulesResult
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateAutomationRulesResult() = default;
    AWS_SECURITYHUB_API BatchUpdateAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchUpdateAutomationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of properly processed rule ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessedAutomationRules() const { return m_processedAutomationRules; }
    template<typename ProcessedAutomationRulesT = Aws::Vector<Aws::String>>
    void SetProcessedAutomationRules(ProcessedAutomationRulesT&& value) { m_processedAutomationRulesHasBeenSet = true; m_processedAutomationRules = std::forward<ProcessedAutomationRulesT>(value); }
    template<typename ProcessedAutomationRulesT = Aws::Vector<Aws::String>>
    BatchUpdateAutomationRulesResult& WithProcessedAutomationRules(ProcessedAutomationRulesT&& value) { SetProcessedAutomationRules(std::forward<ProcessedAutomationRulesT>(value)); return *this;}
    template<typename ProcessedAutomationRulesT = Aws::String>
    BatchUpdateAutomationRulesResult& AddProcessedAutomationRules(ProcessedAutomationRulesT&& value) { m_processedAutomationRulesHasBeenSet = true; m_processedAutomationRules.emplace_back(std::forward<ProcessedAutomationRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't update and why. </p>
     */
    inline const Aws::Vector<UnprocessedAutomationRule>& GetUnprocessedAutomationRules() const { return m_unprocessedAutomationRules; }
    template<typename UnprocessedAutomationRulesT = Aws::Vector<UnprocessedAutomationRule>>
    void SetUnprocessedAutomationRules(UnprocessedAutomationRulesT&& value) { m_unprocessedAutomationRulesHasBeenSet = true; m_unprocessedAutomationRules = std::forward<UnprocessedAutomationRulesT>(value); }
    template<typename UnprocessedAutomationRulesT = Aws::Vector<UnprocessedAutomationRule>>
    BatchUpdateAutomationRulesResult& WithUnprocessedAutomationRules(UnprocessedAutomationRulesT&& value) { SetUnprocessedAutomationRules(std::forward<UnprocessedAutomationRulesT>(value)); return *this;}
    template<typename UnprocessedAutomationRulesT = UnprocessedAutomationRule>
    BatchUpdateAutomationRulesResult& AddUnprocessedAutomationRules(UnprocessedAutomationRulesT&& value) { m_unprocessedAutomationRulesHasBeenSet = true; m_unprocessedAutomationRules.emplace_back(std::forward<UnprocessedAutomationRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateAutomationRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_processedAutomationRules;
    bool m_processedAutomationRulesHasBeenSet = false;

    Aws::Vector<UnprocessedAutomationRule> m_unprocessedAutomationRules;
    bool m_unprocessedAutomationRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
