/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class DescribeFirewallPolicyRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeFirewallPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFirewallPolicy"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline DescribeFirewallPolicyRequest& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline DescribeFirewallPolicyRequest& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline DescribeFirewallPolicyRequest& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline DescribeFirewallPolicyRequest& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline DescribeFirewallPolicyRequest& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline DescribeFirewallPolicyRequest& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}

  private:

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
