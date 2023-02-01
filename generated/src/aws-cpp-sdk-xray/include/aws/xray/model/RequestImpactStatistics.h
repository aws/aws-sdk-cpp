/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
   * <p>Statistics that describe how the incident has impacted a
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/RequestImpactStatistics">AWS
   * API Reference</a></p>
   */
  class RequestImpactStatistics
  {
  public:
    AWS_XRAY_API RequestImpactStatistics();
    AWS_XRAY_API RequestImpactStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API RequestImpactStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of requests that have resulted in a fault,</p>
     */
    inline long long GetFaultCount() const{ return m_faultCount; }

    /**
     * <p>The number of requests that have resulted in a fault,</p>
     */
    inline bool FaultCountHasBeenSet() const { return m_faultCountHasBeenSet; }

    /**
     * <p>The number of requests that have resulted in a fault,</p>
     */
    inline void SetFaultCount(long long value) { m_faultCountHasBeenSet = true; m_faultCount = value; }

    /**
     * <p>The number of requests that have resulted in a fault,</p>
     */
    inline RequestImpactStatistics& WithFaultCount(long long value) { SetFaultCount(value); return *this;}


    /**
     * <p>The number of successful requests.</p>
     */
    inline long long GetOkCount() const{ return m_okCount; }

    /**
     * <p>The number of successful requests.</p>
     */
    inline bool OkCountHasBeenSet() const { return m_okCountHasBeenSet; }

    /**
     * <p>The number of successful requests.</p>
     */
    inline void SetOkCount(long long value) { m_okCountHasBeenSet = true; m_okCount = value; }

    /**
     * <p>The number of successful requests.</p>
     */
    inline RequestImpactStatistics& WithOkCount(long long value) { SetOkCount(value); return *this;}


    /**
     * <p>The total number of requests to the service.</p>
     */
    inline long long GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of requests to the service.</p>
     */
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }

    /**
     * <p>The total number of requests to the service.</p>
     */
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }

    /**
     * <p>The total number of requests to the service.</p>
     */
    inline RequestImpactStatistics& WithTotalCount(long long value) { SetTotalCount(value); return *this;}

  private:

    long long m_faultCount;
    bool m_faultCountHasBeenSet = false;

    long long m_okCount;
    bool m_okCountHasBeenSet = false;

    long long m_totalCount;
    bool m_totalCountHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
