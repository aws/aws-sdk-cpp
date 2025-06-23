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
   * <p>Specifies IPv6 prefix configuration for network interfaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/Ipv6PrefixSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class Ipv6PrefixSpecificationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API Ipv6PrefixSpecificationRequest() = default;
    AWS_WORKSPACESINSTANCES_API Ipv6PrefixSpecificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Ipv6PrefixSpecificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specific IPv6 prefix for network interface configuration.</p>
     */
    inline const Aws::String& GetIpv6Prefix() const { return m_ipv6Prefix; }
    inline bool Ipv6PrefixHasBeenSet() const { return m_ipv6PrefixHasBeenSet; }
    template<typename Ipv6PrefixT = Aws::String>
    void SetIpv6Prefix(Ipv6PrefixT&& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = std::forward<Ipv6PrefixT>(value); }
    template<typename Ipv6PrefixT = Aws::String>
    Ipv6PrefixSpecificationRequest& WithIpv6Prefix(Ipv6PrefixT&& value) { SetIpv6Prefix(std::forward<Ipv6PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv6Prefix;
    bool m_ipv6PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
