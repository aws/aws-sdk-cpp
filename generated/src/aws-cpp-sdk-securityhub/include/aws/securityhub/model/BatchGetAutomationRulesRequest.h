/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchGetAutomationRulesRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchGetAutomationRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAutomationRules"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A list of rule ARNs to get details for. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutomationRulesArns() const { return m_automationRulesArns; }
    inline bool AutomationRulesArnsHasBeenSet() const { return m_automationRulesArnsHasBeenSet; }
    template<typename AutomationRulesArnsT = Aws::Vector<Aws::String>>
    void SetAutomationRulesArns(AutomationRulesArnsT&& value) { m_automationRulesArnsHasBeenSet = true; m_automationRulesArns = std::forward<AutomationRulesArnsT>(value); }
    template<typename AutomationRulesArnsT = Aws::Vector<Aws::String>>
    BatchGetAutomationRulesRequest& WithAutomationRulesArns(AutomationRulesArnsT&& value) { SetAutomationRulesArns(std::forward<AutomationRulesArnsT>(value)); return *this;}
    template<typename AutomationRulesArnsT = Aws::String>
    BatchGetAutomationRulesRequest& AddAutomationRulesArns(AutomationRulesArnsT&& value) { m_automationRulesArnsHasBeenSet = true; m_automationRulesArns.emplace_back(std::forward<AutomationRulesArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_automationRulesArns;
    bool m_automationRulesArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
