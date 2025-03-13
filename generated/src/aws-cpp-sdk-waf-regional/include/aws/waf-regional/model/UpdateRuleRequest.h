/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RuleUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class UpdateRuleRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API UpdateRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRule"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>RuleId</code> of the <code>Rule</code> that you want to update.
     * <code>RuleId</code> is returned by <code>CreateRule</code> and by
     * <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    UpdateRuleRequest& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    UpdateRuleRequest& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>RuleUpdate</code> objects that you want to insert into or
     * delete from a <a>Rule</a>. For more information, see the applicable data
     * types:</p> <ul> <li> <p> <a>RuleUpdate</a>: Contains <code>Action</code> and
     * <code>Predicate</code> </p> </li> <li> <p> <a>Predicate</a>: Contains
     * <code>DataId</code>, <code>Negated</code>, and <code>Type</code> </p> </li> <li>
     * <p> <a>FieldToMatch</a>: Contains <code>Data</code> and <code>Type</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<RuleUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<RuleUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<RuleUpdate>>
    UpdateRuleRequest& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = RuleUpdate>
    UpdateRuleRequest& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<RuleUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
