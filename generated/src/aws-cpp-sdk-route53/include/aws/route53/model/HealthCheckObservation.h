/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheckRegion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/StatusReport.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the last failure reason as reported by one
   * Amazon Route 53 health checker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HealthCheckObservation">AWS
   * API Reference</a></p>
   */
  class HealthCheckObservation
  {
  public:
    AWS_ROUTE53_API HealthCheckObservation() = default;
    AWS_ROUTE53_API HealthCheckObservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HealthCheckObservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline HealthCheckRegion GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(HealthCheckRegion value) { m_regionHasBeenSet = true; m_region = value; }
    inline HealthCheckObservation& WithRegion(HealthCheckRegion value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline const Aws::String& GetIPAddress() const { return m_iPAddress; }
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }
    template<typename IPAddressT = Aws::String>
    void SetIPAddress(IPAddressT&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::forward<IPAddressT>(value); }
    template<typename IPAddressT = Aws::String>
    HealthCheckObservation& WithIPAddress(IPAddressT&& value) { SetIPAddress(std::forward<IPAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline const StatusReport& GetStatusReport() const { return m_statusReport; }
    inline bool StatusReportHasBeenSet() const { return m_statusReportHasBeenSet; }
    template<typename StatusReportT = StatusReport>
    void SetStatusReport(StatusReportT&& value) { m_statusReportHasBeenSet = true; m_statusReport = std::forward<StatusReportT>(value); }
    template<typename StatusReportT = StatusReport>
    HealthCheckObservation& WithStatusReport(StatusReportT&& value) { SetStatusReport(std::forward<StatusReportT>(value)); return *this;}
    ///@}
  private:

    HealthCheckRegion m_region{HealthCheckRegion::NOT_SET};
    bool m_regionHasBeenSet = false;

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet = false;

    StatusReport m_statusReport;
    bool m_statusReportHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
