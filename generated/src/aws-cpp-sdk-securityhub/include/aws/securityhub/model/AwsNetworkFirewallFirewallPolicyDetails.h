/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FirewallPolicyDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about a firewall policy. A firewall policy defines the behavior of a
   * network firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsNetworkFirewallFirewallPolicyDetails">AWS
   * API Reference</a></p>
   */
  class AwsNetworkFirewallFirewallPolicyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallPolicyDetails();
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The firewall policy configuration.</p>
     */
    inline const FirewallPolicyDetails& GetFirewallPolicy() const{ return m_firewallPolicy; }

    /**
     * <p>The firewall policy configuration.</p>
     */
    inline bool FirewallPolicyHasBeenSet() const { return m_firewallPolicyHasBeenSet; }

    /**
     * <p>The firewall policy configuration.</p>
     */
    inline void SetFirewallPolicy(const FirewallPolicyDetails& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = value; }

    /**
     * <p>The firewall policy configuration.</p>
     */
    inline void SetFirewallPolicy(FirewallPolicyDetails&& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = std::move(value); }

    /**
     * <p>The firewall policy configuration.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicy(const FirewallPolicyDetails& value) { SetFirewallPolicy(value); return *this;}

    /**
     * <p>The firewall policy configuration.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicy(FirewallPolicyDetails&& value) { SetFirewallPolicy(std::move(value)); return *this;}


    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}


    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyId() const{ return m_firewallPolicyId; }

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline void SetFirewallPolicyId(const Aws::String& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = value; }

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline void SetFirewallPolicyId(Aws::String&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::move(value); }

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline void SetFirewallPolicyId(const char* value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId.assign(value); }

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(const Aws::String& value) { SetFirewallPolicyId(value); return *this;}

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(Aws::String&& value) { SetFirewallPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(const char* value) { SetFirewallPolicyId(value); return *this;}


    /**
     * <p>The name of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}


    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline AwsNetworkFirewallFirewallPolicyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    FirewallPolicyDetails m_firewallPolicy;
    bool m_firewallPolicyHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    Aws::String m_firewallPolicyId;
    bool m_firewallPolicyIdHasBeenSet = false;

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
