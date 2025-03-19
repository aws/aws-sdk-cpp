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
    AWS_STORAGEGATEWAY_API UpdateBandwidthRateLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBandwidthRateLimit"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    UpdateBandwidthRateLimitRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average upload bandwidth rate limit in bits per second.</p>
     */
    inline long long GetAverageUploadRateLimitInBitsPerSec() const { return m_averageUploadRateLimitInBitsPerSec; }
    inline bool AverageUploadRateLimitInBitsPerSecHasBeenSet() const { return m_averageUploadRateLimitInBitsPerSecHasBeenSet; }
    inline void SetAverageUploadRateLimitInBitsPerSec(long long value) { m_averageUploadRateLimitInBitsPerSecHasBeenSet = true; m_averageUploadRateLimitInBitsPerSec = value; }
    inline UpdateBandwidthRateLimitRequest& WithAverageUploadRateLimitInBitsPerSec(long long value) { SetAverageUploadRateLimitInBitsPerSec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average download bandwidth rate limit in bits per second.</p>
     */
    inline long long GetAverageDownloadRateLimitInBitsPerSec() const { return m_averageDownloadRateLimitInBitsPerSec; }
    inline bool AverageDownloadRateLimitInBitsPerSecHasBeenSet() const { return m_averageDownloadRateLimitInBitsPerSecHasBeenSet; }
    inline void SetAverageDownloadRateLimitInBitsPerSec(long long value) { m_averageDownloadRateLimitInBitsPerSecHasBeenSet = true; m_averageDownloadRateLimitInBitsPerSec = value; }
    inline UpdateBandwidthRateLimitRequest& WithAverageDownloadRateLimitInBitsPerSec(long long value) { SetAverageDownloadRateLimitInBitsPerSec(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    long long m_averageUploadRateLimitInBitsPerSec{0};
    bool m_averageUploadRateLimitInBitsPerSecHasBeenSet = false;

    long long m_averageDownloadRateLimitInBitsPerSec{0};
    bool m_averageDownloadRateLimitInBitsPerSecHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
