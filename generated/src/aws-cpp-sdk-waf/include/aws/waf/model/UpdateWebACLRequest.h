﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/WafAction.h>
#include <aws/waf/model/WebACLUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class UpdateWebACLRequest : public WAFRequest
  {
  public:
    AWS_WAF_API UpdateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebACL"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>WebACLId</code> of the <a>WebACL</a> that you want to update.
     * <code>WebACLId</code> is returned by <a>CreateWebACL</a> and by
     * <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }
    inline UpdateWebACLRequest& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}
    inline UpdateWebACLRequest& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}
    inline UpdateWebACLRequest& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }
    inline UpdateWebACLRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline UpdateWebACLRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline UpdateWebACLRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
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
    inline const Aws::Vector<WebACLUpdate>& GetUpdates() const{ return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    inline void SetUpdates(const Aws::Vector<WebACLUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }
    inline void SetUpdates(Aws::Vector<WebACLUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }
    inline UpdateWebACLRequest& WithUpdates(const Aws::Vector<WebACLUpdate>& value) { SetUpdates(value); return *this;}
    inline UpdateWebACLRequest& WithUpdates(Aws::Vector<WebACLUpdate>&& value) { SetUpdates(std::move(value)); return *this;}
    inline UpdateWebACLRequest& AddUpdates(const WebACLUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }
    inline UpdateWebACLRequest& AddUpdates(WebACLUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A default action for the web ACL, either ALLOW or BLOCK. AWS WAF performs the
     * default action if a request doesn't match the criteria in any of the rules in a
     * web ACL.</p>
     */
    inline const WafAction& GetDefaultAction() const{ return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(const WafAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline void SetDefaultAction(WafAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }
    inline UpdateWebACLRequest& WithDefaultAction(const WafAction& value) { SetDefaultAction(value); return *this;}
    inline UpdateWebACLRequest& WithDefaultAction(WafAction&& value) { SetDefaultAction(std::move(value)); return *this;}
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
} // namespace WAF
} // namespace Aws
