/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/GatewayCapacity.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateGatewayInformationRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateGatewayInformationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayInformation"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    UpdateGatewayInformationRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayName() const { return m_gatewayName; }
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }
    template<typename GatewayNameT = Aws::String>
    void SetGatewayName(GatewayNameT&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::forward<GatewayNameT>(value); }
    template<typename GatewayNameT = Aws::String>
    UpdateGatewayInformationRequest& WithGatewayName(GatewayNameT&& value) { SetGatewayName(std::forward<GatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the time zone of the gateway.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const { return m_gatewayTimezone; }
    inline bool GatewayTimezoneHasBeenSet() const { return m_gatewayTimezoneHasBeenSet; }
    template<typename GatewayTimezoneT = Aws::String>
    void SetGatewayTimezone(GatewayTimezoneT&& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = std::forward<GatewayTimezoneT>(value); }
    template<typename GatewayTimezoneT = Aws::String>
    UpdateGatewayInformationRequest& WithGatewayTimezone(GatewayTimezoneT&& value) { SetGatewayTimezone(std::forward<GatewayTimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that you
     * want to use to monitor and log events in the gateway.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/WhatIsCloudWatchLogs.html">What
     * is Amazon CloudWatch Logs?</a> </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupARN() const { return m_cloudWatchLogGroupARN; }
    inline bool CloudWatchLogGroupARNHasBeenSet() const { return m_cloudWatchLogGroupARNHasBeenSet; }
    template<typename CloudWatchLogGroupARNT = Aws::String>
    void SetCloudWatchLogGroupARN(CloudWatchLogGroupARNT&& value) { m_cloudWatchLogGroupARNHasBeenSet = true; m_cloudWatchLogGroupARN = std::forward<CloudWatchLogGroupARNT>(value); }
    template<typename CloudWatchLogGroupARNT = Aws::String>
    UpdateGatewayInformationRequest& WithCloudWatchLogGroupARN(CloudWatchLogGroupARNT&& value) { SetCloudWatchLogGroupARN(std::forward<CloudWatchLogGroupARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of the gateway's metadata cache. This setting impacts
     * gateway performance and hardware recommendations. For more information, see <a
     * href="https://docs.aws.amazon.com/filegateway/latest/files3/performance-multiple-file-shares.html">Performance
     * guidance for gateways with multiple file shares</a> in the <i>Amazon S3 File
     * Gateway User Guide</i>.</p>
     */
    inline GatewayCapacity GetGatewayCapacity() const { return m_gatewayCapacity; }
    inline bool GatewayCapacityHasBeenSet() const { return m_gatewayCapacityHasBeenSet; }
    inline void SetGatewayCapacity(GatewayCapacity value) { m_gatewayCapacityHasBeenSet = true; m_gatewayCapacity = value; }
    inline UpdateGatewayInformationRequest& WithGatewayCapacity(GatewayCapacity value) { SetGatewayCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet = false;

    Aws::String m_gatewayTimezone;
    bool m_gatewayTimezoneHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupARN;
    bool m_cloudWatchLogGroupARNHasBeenSet = false;

    GatewayCapacity m_gatewayCapacity{GatewayCapacity::NOT_SET};
    bool m_gatewayCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
