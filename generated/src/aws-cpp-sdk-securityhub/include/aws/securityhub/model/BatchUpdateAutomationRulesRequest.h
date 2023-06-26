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
    AWS_SECURITYHUB_API BatchUpdateAutomationRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateAutomationRules"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline const Aws::Vector<UpdateAutomationRulesRequestItem>& GetUpdateAutomationRulesRequestItems() const{ return m_updateAutomationRulesRequestItems; }

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline bool UpdateAutomationRulesRequestItemsHasBeenSet() const { return m_updateAutomationRulesRequestItemsHasBeenSet; }

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline void SetUpdateAutomationRulesRequestItems(const Aws::Vector<UpdateAutomationRulesRequestItem>& value) { m_updateAutomationRulesRequestItemsHasBeenSet = true; m_updateAutomationRulesRequestItems = value; }

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline void SetUpdateAutomationRulesRequestItems(Aws::Vector<UpdateAutomationRulesRequestItem>&& value) { m_updateAutomationRulesRequestItemsHasBeenSet = true; m_updateAutomationRulesRequestItems = std::move(value); }

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline BatchUpdateAutomationRulesRequest& WithUpdateAutomationRulesRequestItems(const Aws::Vector<UpdateAutomationRulesRequestItem>& value) { SetUpdateAutomationRulesRequestItems(value); return *this;}

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline BatchUpdateAutomationRulesRequest& WithUpdateAutomationRulesRequestItems(Aws::Vector<UpdateAutomationRulesRequestItem>&& value) { SetUpdateAutomationRulesRequestItems(std::move(value)); return *this;}

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline BatchUpdateAutomationRulesRequest& AddUpdateAutomationRulesRequestItems(const UpdateAutomationRulesRequestItem& value) { m_updateAutomationRulesRequestItemsHasBeenSet = true; m_updateAutomationRulesRequestItems.push_back(value); return *this; }

    /**
     * <p> An array of ARNs for the rules that are to be updated. Optionally, you can
     * also include <code>RuleStatus</code> and <code>RuleOrder</code>. </p>
     */
    inline BatchUpdateAutomationRulesRequest& AddUpdateAutomationRulesRequestItems(UpdateAutomationRulesRequestItem&& value) { m_updateAutomationRulesRequestItemsHasBeenSet = true; m_updateAutomationRulesRequestItems.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UpdateAutomationRulesRequestItem> m_updateAutomationRulesRequestItems;
    bool m_updateAutomationRulesRequestItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
