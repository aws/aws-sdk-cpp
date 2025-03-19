/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/UpdateAutomationRulesRequestItem.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchUpdateAutomationRulesRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateAutomationRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateAutomationRules"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline const Aws::Vector<UpdateAutomationRulesRequestItem>& GetUpdateAutomationRulesRequestItems() const { return m_updateAutomationRulesRequestItems; }
    inline bool UpdateAutomationRulesRequestItemsHasBeenSet() const { return m_updateAutomationRulesRequestItemsHasBeenSet; }
    template<typename UpdateAutomationRulesRequestItemsT = Aws::Vector<UpdateAutomationRulesRequestItem>>
    void SetUpdateAutomationRulesRequestItems(UpdateAutomationRulesRequestItemsT&& value) { m_updateAutomationRulesRequestItemsHasBeenSet = true; m_updateAutomationRulesRequestItems = std::forward<UpdateAutomationRulesRequestItemsT>(value); }
    template<typename UpdateAutomationRulesRequestItemsT = Aws::Vector<UpdateAutomationRulesRequestItem>>
    BatchUpdateAutomationRulesRequest& WithUpdateAutomationRulesRequestItems(UpdateAutomationRulesRequestItemsT&& value) { SetUpdateAutomationRulesRequestItems(std::forward<UpdateAutomationRulesRequestItemsT>(value)); return *this;}
    template<typename UpdateAutomationRulesRequestItemsT = UpdateAutomationRulesRequestItem>
    BatchUpdateAutomationRulesRequest& AddUpdateAutomationRulesRequestItems(UpdateAutomationRulesRequestItemsT&& value) { m_updateAutomationRulesRequestItemsHasBeenSet = true; m_updateAutomationRulesRequestItems.emplace_back(std::forward<UpdateAutomationRulesRequestItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<UpdateAutomationRulesRequestItem> m_updateAutomationRulesRequestItems;
    bool m_updateAutomationRulesRequestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
