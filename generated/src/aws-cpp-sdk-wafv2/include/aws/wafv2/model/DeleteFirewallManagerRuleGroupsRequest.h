/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class DeleteFirewallManagerRuleGroupsRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API DeleteFirewallManagerRuleGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewallManagerRuleGroups"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline const Aws::String& GetWebACLArn() const { return m_webACLArn; }
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
    template<typename WebACLArnT = Aws::String>
    void SetWebACLArn(WebACLArnT&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::forward<WebACLArnT>(value); }
    template<typename WebACLArnT = Aws::String>
    DeleteFirewallManagerRuleGroupsRequest& WithWebACLArn(WebACLArnT&& value) { SetWebACLArn(std::forward<WebACLArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetWebACLLockToken() const { return m_webACLLockToken; }
    inline bool WebACLLockTokenHasBeenSet() const { return m_webACLLockTokenHasBeenSet; }
    template<typename WebACLLockTokenT = Aws::String>
    void SetWebACLLockToken(WebACLLockTokenT&& value) { m_webACLLockTokenHasBeenSet = true; m_webACLLockToken = std::forward<WebACLLockTokenT>(value); }
    template<typename WebACLLockTokenT = Aws::String>
    DeleteFirewallManagerRuleGroupsRequest& WithWebACLLockToken(WebACLLockTokenT&& value) { SetWebACLLockToken(std::forward<WebACLLockTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet = false;

    Aws::String m_webACLLockToken;
    bool m_webACLLockTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
