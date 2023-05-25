/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>High-level information about a firewall, returned by operations like create
   * and describe. You can use the information provided in the metadata to retrieve
   * and manage a firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallMetadata">AWS
   * API Reference</a></p>
   */
  class FirewallMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API FirewallMetadata();
    AWS_NETWORKFIREWALL_API FirewallMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FirewallMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const{ return m_firewallName; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline bool FirewallNameHasBeenSet() const { return m_firewallNameHasBeenSet; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(const Aws::String& value) { m_firewallNameHasBeenSet = true; m_firewallName = value; }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(Aws::String&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::move(value); }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline void SetFirewallName(const char* value) { m_firewallNameHasBeenSet = true; m_firewallName.assign(value); }

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline FirewallMetadata& WithFirewallName(const Aws::String& value) { SetFirewallName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline FirewallMetadata& WithFirewallName(Aws::String&& value) { SetFirewallName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline FirewallMetadata& WithFirewallName(const char* value) { SetFirewallName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const{ return m_firewallArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(const Aws::String& value) { m_firewallArnHasBeenSet = true; m_firewallArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(Aws::String&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline void SetFirewallArn(const char* value) { m_firewallArnHasBeenSet = true; m_firewallArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline FirewallMetadata& WithFirewallArn(const Aws::String& value) { SetFirewallArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline FirewallMetadata& WithFirewallArn(Aws::String&& value) { SetFirewallArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline FirewallMetadata& WithFirewallArn(const char* value) { SetFirewallArn(value); return *this;}

  private:

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
