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
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>UpdateBandwidthRateLimitInput$AverageDownloadRateLimitInBitsPerSec</a>
   * </p> </li> <li> <p>
   * <a>UpdateBandwidthRateLimitInput$AverageUploadRateLimitInBitsPerSec</a> </p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateBandwidthRateLimitInput">AWS
   * API Reference</a></p>
   */
  class UpdateBandwidthRateLimitRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateBandwidthRateLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBandwidthRateLimit"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline UpdateBandwidthRateLimitRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline UpdateBandwidthRateLimitRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline UpdateBandwidthRateLimitRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline long long GetAverageUploadRateLimitInBitsPerSec() const{ return m_averageUploadRateLimitInBitsPerSec; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline bool AverageUploadRateLimitInBitsPerSecHasBeenSet() const { return m_averageUploadRateLimitInBitsPerSecHasBeenSet; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline void SetAverageUploadRateLimitInBitsPerSec(long long value) { m_averageUploadRateLimitInBitsPerSecHasBeenSet = true; m_averageUploadRateLimitInBitsPerSec = value; }

    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline UpdateBandwidthRateLimitRequest& WithAverageUploadRateLimitInBitsPerSec(long long value) { SetAverageUploadRateLimitInBitsPerSec(value); return *this;}


    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline long long GetAverageDownloadRateLimitInBitsPerSec() const{ return m_averageDownloadRateLimitInBitsPerSec; }

    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline bool AverageDownloadRateLimitInBitsPerSecHasBeenSet() const { return m_averageDownloadRateLimitInBitsPerSecHasBeenSet; }

    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline void SetAverageDownloadRateLimitInBitsPerSec(long long value) { m_averageDownloadRateLimitInBitsPerSecHasBeenSet = true; m_averageDownloadRateLimitInBitsPerSec = value; }

    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline UpdateBandwidthRateLimitRequest& WithAverageDownloadRateLimitInBitsPerSec(long long value) { SetAverageDownloadRateLimitInBitsPerSec(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    long long m_averageUploadRateLimitInBitsPerSec;
    bool m_averageUploadRateLimitInBitsPerSecHasBeenSet = false;

    long long m_averageDownloadRateLimitInBitsPerSec;
    bool m_averageDownloadRateLimitInBitsPerSecHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
