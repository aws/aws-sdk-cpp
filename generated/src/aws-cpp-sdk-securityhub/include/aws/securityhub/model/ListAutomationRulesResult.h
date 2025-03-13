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
    AWS_SECURITYHUB_API ListAutomationRulesResult() = default;
    AWS_SECURITYHUB_API ListAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListAutomationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Metadata for rules in the calling account. The response includes rules with
     * a <code>RuleStatus</code> of <code>ENABLED</code> and <code>DISABLED</code>.
     * </p>
     */
    inline const Aws::Vector<AutomationRulesMetadata>& GetAutomationRulesMetadata() const { return m_automationRulesMetadata; }
    template<typename AutomationRulesMetadataT = Aws::Vector<AutomationRulesMetadata>>
    void SetAutomationRulesMetadata(AutomationRulesMetadataT&& value) { m_automationRulesMetadataHasBeenSet = true; m_automationRulesMetadata = std::forward<AutomationRulesMetadataT>(value); }
    template<typename AutomationRulesMetadataT = Aws::Vector<AutomationRulesMetadata>>
    ListAutomationRulesResult& WithAutomationRulesMetadata(AutomationRulesMetadataT&& value) { SetAutomationRulesMetadata(std::forward<AutomationRulesMetadataT>(value)); return *this;}
    template<typename AutomationRulesMetadataT = AutomationRulesMetadata>
    ListAutomationRulesResult& AddAutomationRulesMetadata(AutomationRulesMetadataT&& value) { m_automationRulesMetadataHasBeenSet = true; m_automationRulesMetadata.emplace_back(std::forward<AutomationRulesMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination token for the response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAutomationRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutomationRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomationRulesMetadata> m_automationRulesMetadata;
    bool m_automationRulesMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
