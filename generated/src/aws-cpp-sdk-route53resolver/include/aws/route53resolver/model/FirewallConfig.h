/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallFailOpenStatus.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
   * VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallConfig">AWS
   * API Reference</a></p>
   */
  class FirewallConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallConfig();
    AWS_ROUTE53RESOLVER_API FirewallConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline FirewallConfig& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline FirewallConfig& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the firewall configuration.</p>
     */
    inline FirewallConfig& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline FirewallConfig& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline FirewallConfig& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC that this firewall configuration applies to.</p>
     */
    inline FirewallConfig& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline FirewallConfig& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline FirewallConfig& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the VPC that this firewall
     * configuration applies to.</p>
     */
    inline FirewallConfig& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline const FirewallFailOpenStatus& GetFirewallFailOpen() const{ return m_firewallFailOpen; }

    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline bool FirewallFailOpenHasBeenSet() const { return m_firewallFailOpenHasBeenSet; }

    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline void SetFirewallFailOpen(const FirewallFailOpenStatus& value) { m_firewallFailOpenHasBeenSet = true; m_firewallFailOpen = value; }

    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline void SetFirewallFailOpen(FirewallFailOpenStatus&& value) { m_firewallFailOpenHasBeenSet = true; m_firewallFailOpen = std::move(value); }

    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline FirewallConfig& WithFirewallFailOpen(const FirewallFailOpenStatus& value) { SetFirewallFailOpen(value); return *this;}

    /**
     * <p>Determines how DNS Firewall operates during failures, for example when all
     * traffic that is sent to DNS Firewall fails to receive a reply. </p> <ul> <li>
     * <p>By default, fail open is disabled, which means the failure mode is closed.
     * This approach favors security over availability. DNS Firewall returns a failure
     * error when it is unable to properly evaluate a query. </p> </li> <li> <p>If you
     * enable this option, the failure mode is open. This approach favors availability
     * over security. DNS Firewall allows queries to proceed if it is unable to
     * properly evaluate them. </p> </li> </ul> <p>This behavior is only enforced for
     * VPCs that have at least one DNS Firewall rule group association. </p>
     */
    inline FirewallConfig& WithFirewallFailOpen(FirewallFailOpenStatus&& value) { SetFirewallFailOpen(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    FirewallFailOpenStatus m_firewallFailOpen;
    bool m_firewallFailOpenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
