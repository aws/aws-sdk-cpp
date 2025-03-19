/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a source or a destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteAnalysisEndpointOptions">AWS
   * API Reference</a></p>
   */
  class RouteAnalysisEndpointOptions
  {
  public:
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptions() = default;
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentArn() const { return m_transitGatewayAttachmentArn; }
    inline bool TransitGatewayAttachmentArnHasBeenSet() const { return m_transitGatewayAttachmentArnHasBeenSet; }
    template<typename TransitGatewayAttachmentArnT = Aws::String>
    void SetTransitGatewayAttachmentArn(TransitGatewayAttachmentArnT&& value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn = std::forward<TransitGatewayAttachmentArnT>(value); }
    template<typename TransitGatewayAttachmentArnT = Aws::String>
    RouteAnalysisEndpointOptions& WithTransitGatewayAttachmentArn(TransitGatewayAttachmentArnT&& value) { SetTransitGatewayAttachmentArn(std::forward<TransitGatewayAttachmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const { return m_transitGatewayArn; }
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
    template<typename TransitGatewayArnT = Aws::String>
    void SetTransitGatewayArn(TransitGatewayArnT&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::forward<TransitGatewayArnT>(value); }
    template<typename TransitGatewayArnT = Aws::String>
    RouteAnalysisEndpointOptions& WithTransitGatewayArn(TransitGatewayArnT&& value) { SetTransitGatewayArn(std::forward<TransitGatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    RouteAnalysisEndpointOptions& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentArn;
    bool m_transitGatewayAttachmentArnHasBeenSet = false;

    Aws::String m_transitGatewayArn;
    bool m_transitGatewayArnHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
