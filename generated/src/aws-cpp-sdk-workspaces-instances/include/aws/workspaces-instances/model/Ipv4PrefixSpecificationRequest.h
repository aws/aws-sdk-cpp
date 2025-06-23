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
   * <p>Specifies IPv4 prefix configuration for network interfaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/Ipv4PrefixSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class Ipv4PrefixSpecificationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API Ipv4PrefixSpecificationRequest() = default;
    AWS_WORKSPACESINSTANCES_API Ipv4PrefixSpecificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Ipv4PrefixSpecificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specific IPv4 prefix for network interface configuration.</p>
     */
    inline const Aws::String& GetIpv4Prefix() const { return m_ipv4Prefix; }
    inline bool Ipv4PrefixHasBeenSet() const { return m_ipv4PrefixHasBeenSet; }
    template<typename Ipv4PrefixT = Aws::String>
    void SetIpv4Prefix(Ipv4PrefixT&& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = std::forward<Ipv4PrefixT>(value); }
    template<typename Ipv4PrefixT = Aws::String>
    Ipv4PrefixSpecificationRequest& WithIpv4Prefix(Ipv4PrefixT&& value) { SetIpv4Prefix(std::forward<Ipv4PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv4Prefix;
    bool m_ipv4PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
