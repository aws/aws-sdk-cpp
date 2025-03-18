/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionOptionsTunnelOptionsDetails.h>
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
   * <p>VPN connection options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the VPN connection uses static routes only.</p>
     */
    inline bool GetStaticRoutesOnly() const { return m_staticRoutesOnly; }
    inline bool StaticRoutesOnlyHasBeenSet() const { return m_staticRoutesOnlyHasBeenSet; }
    inline void SetStaticRoutesOnly(bool value) { m_staticRoutesOnlyHasBeenSet = true; m_staticRoutesOnly = value; }
    inline AwsEc2VpnConnectionOptionsDetails& WithStaticRoutesOnly(bool value) { SetStaticRoutesOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPN tunnel options.</p>
     */
    inline const Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>& GetTunnelOptions() const { return m_tunnelOptions; }
    inline bool TunnelOptionsHasBeenSet() const { return m_tunnelOptionsHasBeenSet; }
    template<typename TunnelOptionsT = Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>>
    void SetTunnelOptions(TunnelOptionsT&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions = std::forward<TunnelOptionsT>(value); }
    template<typename TunnelOptionsT = Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails>>
    AwsEc2VpnConnectionOptionsDetails& WithTunnelOptions(TunnelOptionsT&& value) { SetTunnelOptions(std::forward<TunnelOptionsT>(value)); return *this;}
    template<typename TunnelOptionsT = AwsEc2VpnConnectionOptionsTunnelOptionsDetails>
    AwsEc2VpnConnectionOptionsDetails& AddTunnelOptions(TunnelOptionsT&& value) { m_tunnelOptionsHasBeenSet = true; m_tunnelOptions.emplace_back(std::forward<TunnelOptionsT>(value)); return *this; }
    ///@}
  private:

    bool m_staticRoutesOnly{false};
    bool m_staticRoutesOnlyHasBeenSet = false;

    Aws::Vector<AwsEc2VpnConnectionOptionsTunnelOptionsDetails> m_tunnelOptions;
    bool m_tunnelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
