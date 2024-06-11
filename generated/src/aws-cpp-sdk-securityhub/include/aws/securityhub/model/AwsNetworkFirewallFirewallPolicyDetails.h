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


    ///@{
    /**
     * <p>The firewall policy configuration.</p>
     */
    inline const FirewallPolicyDetails& GetFirewallPolicy() const{ return m_firewallPolicy; }
    inline bool FirewallPolicyHasBeenSet() const { return m_firewallPolicyHasBeenSet; }
    inline void SetFirewallPolicy(const FirewallPolicyDetails& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = value; }
    inline void SetFirewallPolicy(FirewallPolicyDetails&& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = std::move(value); }
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicy(const FirewallPolicyDetails& value) { SetFirewallPolicy(value); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicy(FirewallPolicyDetails&& value) { SetFirewallPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyId() const{ return m_firewallPolicyId; }
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }
    inline void SetFirewallPolicyId(const Aws::String& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = value; }
    inline void SetFirewallPolicyId(Aws::String&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::move(value); }
    inline void SetFirewallPolicyId(const char* value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId.assign(value); }
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(const Aws::String& value) { SetFirewallPolicyId(value); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(Aws::String&& value) { SetFirewallPolicyId(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(const char* value) { SetFirewallPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsNetworkFirewallFirewallPolicyDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsNetworkFirewallFirewallPolicyDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
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
