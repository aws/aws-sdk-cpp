/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/WafAction.h>
#include <aws/waf-regional/model/WebACLUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class UpdateWebACLRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API UpdateWebACLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebACL"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    UpdateWebACLRequest& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
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
    UpdateWebACLRequest& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of updates to make to the <a>WebACL</a>.</p> <p>An array of
     * <code>WebACLUpdate</code> objects that you want to insert into or delete from a
     * <a>WebACL</a>. For more information, see the applicable data types:</p> <ul>
     * <li> <p> <a>WebACLUpdate</a>: Contains <code>Action</code> and
     * <code>ActivatedRule</code> </p> </li> <li> <p> <a>ActivatedRule</a>: Contains
     * <code>Action</code>, <code>OverrideAction</code>, <code>Priority</code>,
     * <code>RuleId</code>, and <code>Type</code>.
     * <code>ActivatedRule|OverrideAction</code> applies only when updating or adding a
     * <code>RuleGroup</code> to a <code>WebACL</code>. In this case, you do not use
     * <code>ActivatedRule|Action</code>. For all other update requests,
     * <code>ActivatedRule|Action</code> is used instead of
     * <code>ActivatedRule|OverrideAction</code>. </p> </li> <li> <p> <a>WafAction</a>:
     * Contains <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<WebACLUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<WebACLUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<WebACLUpdate>>
    UpdateWebACLRequest& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = WebACLUpdate>
    UpdateWebACLRequest& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline const WafAction& GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    template<typename DefaultActionT = WafAction>
    void SetDefaultAction(DefaultActionT&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::forward<DefaultActionT>(value); }
    template<typename DefaultActionT = WafAction>
    UpdateWebACLRequest& WithDefaultAction(DefaultActionT&& value) { SetDefaultAction(std::forward<DefaultActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<WebACLUpdate> m_updates;
    bool m_updatesHasBeenSet = false;

    WafAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
