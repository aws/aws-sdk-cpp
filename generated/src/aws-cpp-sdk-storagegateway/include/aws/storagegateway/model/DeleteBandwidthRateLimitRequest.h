/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>DeleteBandwidthRateLimitInput$BandwidthType</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteBandwidthRateLimitInput">AWS
   * API Reference</a></p>
   */
  class DeleteBandwidthRateLimitRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteBandwidthRateLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBandwidthRateLimit"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline DeleteBandwidthRateLimitRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DeleteBandwidthRateLimitRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DeleteBandwidthRateLimitRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline const Aws::String& GetBandwidthType() const{ return m_bandwidthType; }

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline bool BandwidthTypeHasBeenSet() const { return m_bandwidthTypeHasBeenSet; }

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline void SetBandwidthType(const Aws::String& value) { m_bandwidthTypeHasBeenSet = true; m_bandwidthType = value; }

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline void SetBandwidthType(Aws::String&& value) { m_bandwidthTypeHasBeenSet = true; m_bandwidthType = std::move(value); }

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline void SetBandwidthType(const char* value) { m_bandwidthTypeHasBeenSet = true; m_bandwidthType.assign(value); }

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline DeleteBandwidthRateLimitRequest& WithBandwidthType(const Aws::String& value) { SetBandwidthType(value); return *this;}

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline DeleteBandwidthRateLimitRequest& WithBandwidthType(Aws::String&& value) { SetBandwidthType(std::move(value)); return *this;}

    /**
     * <p>One of the BandwidthType values that indicates the gateway bandwidth rate
     * limit to delete.</p> <p>Valid Values: <code>UPLOAD</code> |
     * <code>DOWNLOAD</code> | <code>ALL</code> </p>
     */
    inline DeleteBandwidthRateLimitRequest& WithBandwidthType(const char* value) { SetBandwidthType(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_bandwidthType;
    bool m_bandwidthTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
