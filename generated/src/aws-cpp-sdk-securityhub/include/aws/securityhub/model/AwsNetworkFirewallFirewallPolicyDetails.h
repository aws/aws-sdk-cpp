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
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallPolicyDetails() = default;
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsNetworkFirewallFirewallPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The firewall policy configuration.</p>
     */
    inline const FirewallPolicyDetails& GetFirewallPolicy() const { return m_firewallPolicy; }
    inline bool FirewallPolicyHasBeenSet() const { return m_firewallPolicyHasBeenSet; }
    template<typename FirewallPolicyT = FirewallPolicyDetails>
    void SetFirewallPolicy(FirewallPolicyT&& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = std::forward<FirewallPolicyT>(value); }
    template<typename FirewallPolicyT = FirewallPolicyDetails>
    AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicy(FirewallPolicyT&& value) { SetFirewallPolicy(std::forward<FirewallPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }
    template<typename FirewallPolicyArnT = Aws::String>
    void SetFirewallPolicyArn(FirewallPolicyArnT&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value); }
    template<typename FirewallPolicyArnT = Aws::String>
    AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyArn(FirewallPolicyArnT&& value) { SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyId() const { return m_firewallPolicyId; }
    inline bool FirewallPolicyIdHasBeenSet() const { return m_firewallPolicyIdHasBeenSet; }
    template<typename FirewallPolicyIdT = Aws::String>
    void SetFirewallPolicyId(FirewallPolicyIdT&& value) { m_firewallPolicyIdHasBeenSet = true; m_firewallPolicyId = std::forward<FirewallPolicyIdT>(value); }
    template<typename FirewallPolicyIdT = Aws::String>
    AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyId(FirewallPolicyIdT&& value) { SetFirewallPolicyId(std::forward<FirewallPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyName() const { return m_firewallPolicyName; }
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }
    template<typename FirewallPolicyNameT = Aws::String>
    void SetFirewallPolicyName(FirewallPolicyNameT&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::forward<FirewallPolicyNameT>(value); }
    template<typename FirewallPolicyNameT = Aws::String>
    AwsNetworkFirewallFirewallPolicyDetails& WithFirewallPolicyName(FirewallPolicyNameT&& value) { SetFirewallPolicyName(std::forward<FirewallPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsNetworkFirewallFirewallPolicyDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
