/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p>Specifies the configuration settings for individual NDI discovery servers. A
   * maximum of 3 servers is allowed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiDiscoveryServerConfig">AWS
   * API Reference</a></p>
   */
  class NdiDiscoveryServerConfig
  {
  public:
    AWS_MEDIACONNECT_API NdiDiscoveryServerConfig() = default;
    AWS_MEDIACONNECT_API NdiDiscoveryServerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API NdiDiscoveryServerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique network address of the NDI discovery server. </p>
     */
    inline const Aws::String& GetDiscoveryServerAddress() const { return m_discoveryServerAddress; }
    inline bool DiscoveryServerAddressHasBeenSet() const { return m_discoveryServerAddressHasBeenSet; }
    template<typename DiscoveryServerAddressT = Aws::String>
    void SetDiscoveryServerAddress(DiscoveryServerAddressT&& value) { m_discoveryServerAddressHasBeenSet = true; m_discoveryServerAddress = std::forward<DiscoveryServerAddressT>(value); }
    template<typename DiscoveryServerAddressT = Aws::String>
    NdiDiscoveryServerConfig& WithDiscoveryServerAddress(DiscoveryServerAddressT&& value) { SetDiscoveryServerAddress(std::forward<DiscoveryServerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port for the NDI discovery server. Defaults to 5959 if a custom port
     * isn't specified. </p>
     */
    inline int GetDiscoveryServerPort() const { return m_discoveryServerPort; }
    inline bool DiscoveryServerPortHasBeenSet() const { return m_discoveryServerPortHasBeenSet; }
    inline void SetDiscoveryServerPort(int value) { m_discoveryServerPortHasBeenSet = true; m_discoveryServerPort = value; }
    inline NdiDiscoveryServerConfig& WithDiscoveryServerPort(int value) { SetDiscoveryServerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Virtual Private Cloud (VPC) network interface used by
     * the flow. </p>
     */
    inline const Aws::String& GetVpcInterfaceAdapter() const { return m_vpcInterfaceAdapter; }
    inline bool VpcInterfaceAdapterHasBeenSet() const { return m_vpcInterfaceAdapterHasBeenSet; }
    template<typename VpcInterfaceAdapterT = Aws::String>
    void SetVpcInterfaceAdapter(VpcInterfaceAdapterT&& value) { m_vpcInterfaceAdapterHasBeenSet = true; m_vpcInterfaceAdapter = std::forward<VpcInterfaceAdapterT>(value); }
    template<typename VpcInterfaceAdapterT = Aws::String>
    NdiDiscoveryServerConfig& WithVpcInterfaceAdapter(VpcInterfaceAdapterT&& value) { SetVpcInterfaceAdapter(std::forward<VpcInterfaceAdapterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_discoveryServerAddress;
    bool m_discoveryServerAddressHasBeenSet = false;

    int m_discoveryServerPort{0};
    bool m_discoveryServerPortHasBeenSet = false;

    Aws::String m_vpcInterfaceAdapter;
    bool m_vpcInterfaceAdapterHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
