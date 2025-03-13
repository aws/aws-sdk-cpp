/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Specifies network configuration information for the gateway associated with
   * the Amazon FSx file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/EndpointNetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointNetworkConfiguration
  {
  public:
    AWS_STORAGEGATEWAY_API EndpointNetworkConfiguration() = default;
    AWS_STORAGEGATEWAY_API EndpointNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API EndpointNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const { return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    template<typename IpAddressesT = Aws::Vector<Aws::String>>
    void SetIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::forward<IpAddressesT>(value); }
    template<typename IpAddressesT = Aws::Vector<Aws::String>>
    EndpointNetworkConfiguration& WithIpAddresses(IpAddressesT&& value) { SetIpAddresses(std::forward<IpAddressesT>(value)); return *this;}
    template<typename IpAddressesT = Aws::String>
    EndpointNetworkConfiguration& AddIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.emplace_back(std::forward<IpAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
