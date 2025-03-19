/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/BandwidthRateLimitInterval.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateBandwidthRateLimitScheduleRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateBandwidthRateLimitScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBandwidthRateLimitSchedule"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    UpdateBandwidthRateLimitScheduleRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array containing bandwidth rate limit schedule intervals for a gateway.
     * When no bandwidth rate limit intervals have been scheduled, the array is empty.
     * </p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const { return m_bandwidthRateLimitIntervals; }
    inline bool BandwidthRateLimitIntervalsHasBeenSet() const { return m_bandwidthRateLimitIntervalsHasBeenSet; }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    void SetBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals = std::forward<BandwidthRateLimitIntervalsT>(value); }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    UpdateBandwidthRateLimitScheduleRequest& WithBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { SetBandwidthRateLimitIntervals(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this;}
    template<typename BandwidthRateLimitIntervalsT = BandwidthRateLimitInterval>
    UpdateBandwidthRateLimitScheduleRequest& AddBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals.emplace_back(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;
    bool m_bandwidthRateLimitIntervalsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
