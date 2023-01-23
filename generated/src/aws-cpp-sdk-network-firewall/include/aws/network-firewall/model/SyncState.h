/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/Attachment.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/PerObjectStatus.h>
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
   * <p>The status of the firewall endpoint and firewall policy configuration for a
   * single VPC subnet. </p> <p>For each VPC subnet that you associate with a
   * firewall, Network Firewall does the following: </p> <ul> <li> <p>Instantiates a
   * firewall endpoint in the subnet, ready to take traffic.</p> </li> <li>
   * <p>Configures the endpoint with the current firewall policy settings, to provide
   * the filtering behavior for the endpoint.</p> </li> </ul> <p>When you update a
   * firewall, for example to add a subnet association or change a rule group in the
   * firewall policy, the affected sync states reflect out-of-sync or not ready
   * status until the changes are complete. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/SyncState">AWS
   * API Reference</a></p>
   */
  class SyncState
  {
  public:
    AWS_NETWORKFIREWALL_API SyncState();
    AWS_NETWORKFIREWALL_API SyncState(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API SyncState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attachment status of the firewall's association with a single VPC subnet.
     * For each configured subnet, Network Firewall creates the attachment by
     * instantiating the firewall endpoint in the subnet so that it's ready to take
     * traffic. This is part of the <a>FirewallStatus</a>.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The attachment status of the firewall's association with a single VPC subnet.
     * For each configured subnet, Network Firewall creates the attachment by
     * instantiating the firewall endpoint in the subnet so that it's ready to take
     * traffic. This is part of the <a>FirewallStatus</a>.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>The attachment status of the firewall's association with a single VPC subnet.
     * For each configured subnet, Network Firewall creates the attachment by
     * instantiating the firewall endpoint in the subnet so that it's ready to take
     * traffic. This is part of the <a>FirewallStatus</a>.</p>
     */
    inline void SetAttachment(const Attachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The attachment status of the firewall's association with a single VPC subnet.
     * For each configured subnet, Network Firewall creates the attachment by
     * instantiating the firewall endpoint in the subnet so that it's ready to take
     * traffic. This is part of the <a>FirewallStatus</a>.</p>
     */
    inline void SetAttachment(Attachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>The attachment status of the firewall's association with a single VPC subnet.
     * For each configured subnet, Network Firewall creates the attachment by
     * instantiating the firewall endpoint in the subnet so that it's ready to take
     * traffic. This is part of the <a>FirewallStatus</a>.</p>
     */
    inline SyncState& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The attachment status of the firewall's association with a single VPC subnet.
     * For each configured subnet, Network Firewall creates the attachment by
     * instantiating the firewall endpoint in the subnet so that it's ready to take
     * traffic. This is part of the <a>FirewallStatus</a>.</p>
     */
    inline SyncState& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline const Aws::Map<Aws::String, PerObjectStatus>& GetConfig() const{ return m_config; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline void SetConfig(const Aws::Map<Aws::String, PerObjectStatus>& value) { m_configHasBeenSet = true; m_config = value; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline void SetConfig(Aws::Map<Aws::String, PerObjectStatus>&& value) { m_configHasBeenSet = true; m_config = std::move(value); }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& WithConfig(const Aws::Map<Aws::String, PerObjectStatus>& value) { SetConfig(value); return *this;}

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& WithConfig(Aws::Map<Aws::String, PerObjectStatus>&& value) { SetConfig(std::move(value)); return *this;}

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& AddConfig(const Aws::String& key, const PerObjectStatus& value) { m_configHasBeenSet = true; m_config.emplace(key, value); return *this; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& AddConfig(Aws::String&& key, const PerObjectStatus& value) { m_configHasBeenSet = true; m_config.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& AddConfig(const Aws::String& key, PerObjectStatus&& value) { m_configHasBeenSet = true; m_config.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& AddConfig(Aws::String&& key, PerObjectStatus&& value) { m_configHasBeenSet = true; m_config.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& AddConfig(const char* key, PerObjectStatus&& value) { m_configHasBeenSet = true; m_config.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration status of the firewall endpoint in a single VPC subnet.
     * Network Firewall provides each endpoint with the rules that are configured in
     * the firewall policy. Each time you add a subnet or modify the associated
     * firewall policy, Network Firewall synchronizes the rules in the endpoint, so it
     * can properly filter network traffic. This is part of the
     * <a>FirewallStatus</a>.</p>
     */
    inline SyncState& AddConfig(const char* key, const PerObjectStatus& value) { m_configHasBeenSet = true; m_config.emplace(key, value); return *this; }

  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::Map<Aws::String, PerObjectStatus> m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
