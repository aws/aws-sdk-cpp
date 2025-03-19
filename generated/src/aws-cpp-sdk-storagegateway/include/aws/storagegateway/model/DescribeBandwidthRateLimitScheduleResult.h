/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/BandwidthRateLimitInterval.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class DescribeBandwidthRateLimitScheduleResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitScheduleResult() = default;
    AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeBandwidthRateLimitScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeBandwidthRateLimitScheduleResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array that contains the bandwidth rate limit intervals for a tape or
     * volume gateway. </p>
     */
    inline const Aws::Vector<BandwidthRateLimitInterval>& GetBandwidthRateLimitIntervals() const { return m_bandwidthRateLimitIntervals; }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    void SetBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals = std::forward<BandwidthRateLimitIntervalsT>(value); }
    template<typename BandwidthRateLimitIntervalsT = Aws::Vector<BandwidthRateLimitInterval>>
    DescribeBandwidthRateLimitScheduleResult& WithBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { SetBandwidthRateLimitIntervals(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this;}
    template<typename BandwidthRateLimitIntervalsT = BandwidthRateLimitInterval>
    DescribeBandwidthRateLimitScheduleResult& AddBandwidthRateLimitIntervals(BandwidthRateLimitIntervalsT&& value) { m_bandwidthRateLimitIntervalsHasBeenSet = true; m_bandwidthRateLimitIntervals.emplace_back(std::forward<BandwidthRateLimitIntervalsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBandwidthRateLimitScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<BandwidthRateLimitInterval> m_bandwidthRateLimitIntervals;
    bool m_bandwidthRateLimitIntervalsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
