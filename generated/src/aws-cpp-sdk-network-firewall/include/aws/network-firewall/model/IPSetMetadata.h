/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
   * <p>General information about the IP set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IPSetMetadata">AWS
   * API Reference</a></p>
   */
  class IPSetMetadata
  {
  public:
    AWS_NETWORKFIREWALL_API IPSetMetadata();
    AWS_NETWORKFIREWALL_API IPSetMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API IPSetMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the total number of CIDR blocks currently in use by the IP set
     * references in a firewall. To determine how many CIDR blocks are available for
     * you to use in a firewall, you can call <code>AvailableCIDRCount</code>.</p>
     */
    inline int GetResolvedCIDRCount() const{ return m_resolvedCIDRCount; }

    /**
     * <p>Describes the total number of CIDR blocks currently in use by the IP set
     * references in a firewall. To determine how many CIDR blocks are available for
     * you to use in a firewall, you can call <code>AvailableCIDRCount</code>.</p>
     */
    inline bool ResolvedCIDRCountHasBeenSet() const { return m_resolvedCIDRCountHasBeenSet; }

    /**
     * <p>Describes the total number of CIDR blocks currently in use by the IP set
     * references in a firewall. To determine how many CIDR blocks are available for
     * you to use in a firewall, you can call <code>AvailableCIDRCount</code>.</p>
     */
    inline void SetResolvedCIDRCount(int value) { m_resolvedCIDRCountHasBeenSet = true; m_resolvedCIDRCount = value; }

    /**
     * <p>Describes the total number of CIDR blocks currently in use by the IP set
     * references in a firewall. To determine how many CIDR blocks are available for
     * you to use in a firewall, you can call <code>AvailableCIDRCount</code>.</p>
     */
    inline IPSetMetadata& WithResolvedCIDRCount(int value) { SetResolvedCIDRCount(value); return *this;}

  private:

    int m_resolvedCIDRCount;
    bool m_resolvedCIDRCountHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
