/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/ErrorStatistics.h>
#include <aws/xray/model/FaultStatistics.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Response statistics for an edge.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/EdgeStatistics">AWS
   * API Reference</a></p>
   */
  class EdgeStatistics
  {
  public:
    AWS_XRAY_API EdgeStatistics() = default;
    AWS_XRAY_API EdgeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API EdgeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of requests that completed with a 2xx Success status code.</p>
     */
    inline long long GetOkCount() const { return m_okCount; }
    inline bool OkCountHasBeenSet() const { return m_okCountHasBeenSet; }
    inline void SetOkCount(long long value) { m_okCountHasBeenSet = true; m_okCount = value; }
    inline EdgeStatistics& WithOkCount(long long value) { SetOkCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about requests that failed with a 4xx Client Error status
     * code.</p>
     */
    inline const ErrorStatistics& GetErrorStatistics() const { return m_errorStatistics; }
    inline bool ErrorStatisticsHasBeenSet() const { return m_errorStatisticsHasBeenSet; }
    template<typename ErrorStatisticsT = ErrorStatistics>
    void SetErrorStatistics(ErrorStatisticsT&& value) { m_errorStatisticsHasBeenSet = true; m_errorStatistics = std::forward<ErrorStatisticsT>(value); }
    template<typename ErrorStatisticsT = ErrorStatistics>
    EdgeStatistics& WithErrorStatistics(ErrorStatisticsT&& value) { SetErrorStatistics(std::forward<ErrorStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about requests that failed with a 5xx Server Error status
     * code.</p>
     */
    inline const FaultStatistics& GetFaultStatistics() const { return m_faultStatistics; }
    inline bool FaultStatisticsHasBeenSet() const { return m_faultStatisticsHasBeenSet; }
    template<typename FaultStatisticsT = FaultStatistics>
    void SetFaultStatistics(FaultStatisticsT&& value) { m_faultStatisticsHasBeenSet = true; m_faultStatistics = std::forward<FaultStatisticsT>(value); }
    template<typename FaultStatisticsT = FaultStatistics>
    EdgeStatistics& WithFaultStatistics(FaultStatisticsT&& value) { SetFaultStatistics(std::forward<FaultStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of completed requests.</p>
     */
    inline long long GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline EdgeStatistics& WithTotalCount(long long value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate response time of completed requests.</p>
     */
    inline double GetTotalResponseTime() const { return m_totalResponseTime; }
    inline bool TotalResponseTimeHasBeenSet() const { return m_totalResponseTimeHasBeenSet; }
    inline void SetTotalResponseTime(double value) { m_totalResponseTimeHasBeenSet = true; m_totalResponseTime = value; }
    inline EdgeStatistics& WithTotalResponseTime(double value) { SetTotalResponseTime(value); return *this;}
    ///@}
  private:

    long long m_okCount{0};
    bool m_okCountHasBeenSet = false;

    ErrorStatistics m_errorStatistics;
    bool m_errorStatisticsHasBeenSet = false;

    FaultStatistics m_faultStatistics;
    bool m_faultStatisticsHasBeenSet = false;

    long long m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    double m_totalResponseTime{0.0};
    bool m_totalResponseTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
