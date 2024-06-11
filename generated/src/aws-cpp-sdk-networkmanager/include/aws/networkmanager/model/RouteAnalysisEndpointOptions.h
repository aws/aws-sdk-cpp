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
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptions();
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentArn() const{ return m_transitGatewayAttachmentArn; }
    inline bool TransitGatewayAttachmentArnHasBeenSet() const { return m_transitGatewayAttachmentArnHasBeenSet; }
    inline void SetTransitGatewayAttachmentArn(const Aws::String& value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn = value; }
    inline void SetTransitGatewayAttachmentArn(Aws::String&& value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn = std::move(value); }
    inline void SetTransitGatewayAttachmentArn(const char* value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn.assign(value); }
    inline RouteAnalysisEndpointOptions& WithTransitGatewayAttachmentArn(const Aws::String& value) { SetTransitGatewayAttachmentArn(value); return *this;}
    inline RouteAnalysisEndpointOptions& WithTransitGatewayAttachmentArn(Aws::String&& value) { SetTransitGatewayAttachmentArn(std::move(value)); return *this;}
    inline RouteAnalysisEndpointOptions& WithTransitGatewayAttachmentArn(const char* value) { SetTransitGatewayAttachmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const{ return m_transitGatewayArn; }
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
    inline void SetTransitGatewayArn(const Aws::String& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = value; }
    inline void SetTransitGatewayArn(Aws::String&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::move(value); }
    inline void SetTransitGatewayArn(const char* value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn.assign(value); }
    inline RouteAnalysisEndpointOptions& WithTransitGatewayArn(const Aws::String& value) { SetTransitGatewayArn(value); return *this;}
    inline RouteAnalysisEndpointOptions& WithTransitGatewayArn(Aws::String&& value) { SetTransitGatewayArn(std::move(value)); return *this;}
    inline RouteAnalysisEndpointOptions& WithTransitGatewayArn(const char* value) { SetTransitGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline RouteAnalysisEndpointOptions& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline RouteAnalysisEndpointOptions& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline RouteAnalysisEndpointOptions& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
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
