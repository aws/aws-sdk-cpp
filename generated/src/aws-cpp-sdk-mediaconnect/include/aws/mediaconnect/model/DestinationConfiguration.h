/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Interface.h>
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
   * <p> The transport parameters that you want to associate with an outbound media
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_MEDIACONNECT_API DestinationConfiguration() = default;
    AWS_MEDIACONNECT_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address where you want MediaConnect to send contents of the media
     * stream.</p>
     */
    inline const Aws::String& GetDestinationIp() const { return m_destinationIp; }
    inline bool DestinationIpHasBeenSet() const { return m_destinationIpHasBeenSet; }
    template<typename DestinationIpT = Aws::String>
    void SetDestinationIp(DestinationIpT&& value) { m_destinationIpHasBeenSet = true; m_destinationIp = std::forward<DestinationIpT>(value); }
    template<typename DestinationIpT = Aws::String>
    DestinationConfiguration& WithDestinationIp(DestinationIpT&& value) { SetDestinationIp(std::forward<DestinationIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port that you want MediaConnect to use when it distributes the media
     * stream to the output.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline DestinationConfiguration& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC interface that you want to use for the media stream associated with
     * the output.</p>
     */
    inline const Interface& GetInterface() const { return m_interface; }
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }
    template<typename InterfaceT = Interface>
    void SetInterface(InterfaceT&& value) { m_interfaceHasBeenSet = true; m_interface = std::forward<InterfaceT>(value); }
    template<typename InterfaceT = Interface>
    DestinationConfiguration& WithInterface(InterfaceT&& value) { SetInterface(std::forward<InterfaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address that the receiver requires in order to establish a connection
     * with the flow. This value is represented by the elastic network interface IP
     * address of the VPC. This field applies only to outputs that use the CDI or ST
     * 2110 JPEG XS or protocol. </p>
     */
    inline const Aws::String& GetOutboundIp() const { return m_outboundIp; }
    inline bool OutboundIpHasBeenSet() const { return m_outboundIpHasBeenSet; }
    template<typename OutboundIpT = Aws::String>
    void SetOutboundIp(OutboundIpT&& value) { m_outboundIpHasBeenSet = true; m_outboundIp = std::forward<OutboundIpT>(value); }
    template<typename OutboundIpT = Aws::String>
    DestinationConfiguration& WithOutboundIp(OutboundIpT&& value) { SetOutboundIp(std::forward<OutboundIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationIp;
    bool m_destinationIpHasBeenSet = false;

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Interface m_interface;
    bool m_interfaceHasBeenSet = false;

    Aws::String m_outboundIp;
    bool m_outboundIpHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
