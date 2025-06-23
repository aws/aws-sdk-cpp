/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Represents an IPv6 address configuration for a WorkSpace
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceIpv6Address">AWS
   * API Reference</a></p>
   */
  class InstanceIpv6Address
  {
  public:
    AWS_WORKSPACESINSTANCES_API InstanceIpv6Address() = default;
    AWS_WORKSPACESINSTANCES_API InstanceIpv6Address(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API InstanceIpv6Address& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specific IPv6 address assigned to the instance.</p>
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    InstanceIpv6Address& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if this is the primary IPv6 address for the instance.</p>
     */
    inline bool GetIsPrimaryIpv6() const { return m_isPrimaryIpv6; }
    inline bool IsPrimaryIpv6HasBeenSet() const { return m_isPrimaryIpv6HasBeenSet; }
    inline void SetIsPrimaryIpv6(bool value) { m_isPrimaryIpv6HasBeenSet = true; m_isPrimaryIpv6 = value; }
    inline InstanceIpv6Address& WithIsPrimaryIpv6(bool value) { SetIsPrimaryIpv6(value); return *this;}
    ///@}
  private:

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    bool m_isPrimaryIpv6{false};
    bool m_isPrimaryIpv6HasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
