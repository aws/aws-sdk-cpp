/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/HealthCheckObservation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to a <code>GetHealthCheck</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetHealthCheckStatusResult
  {
  public:
    AWS_ROUTE53_API GetHealthCheckStatusResult();
    AWS_ROUTE53_API GetHealthCheckStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHealthCheckStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline const Aws::Vector<HealthCheckObservation>& GetHealthCheckObservations() const{ return m_healthCheckObservations; }

    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline void SetHealthCheckObservations(const Aws::Vector<HealthCheckObservation>& value) { m_healthCheckObservations = value; }

    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline void SetHealthCheckObservations(Aws::Vector<HealthCheckObservation>&& value) { m_healthCheckObservations = std::move(value); }

    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline GetHealthCheckStatusResult& WithHealthCheckObservations(const Aws::Vector<HealthCheckObservation>& value) { SetHealthCheckObservations(value); return *this;}

    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline GetHealthCheckStatusResult& WithHealthCheckObservations(Aws::Vector<HealthCheckObservation>&& value) { SetHealthCheckObservations(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline GetHealthCheckStatusResult& AddHealthCheckObservations(const HealthCheckObservation& value) { m_healthCheckObservations.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>HealthCheckObservation</code> element for each
     * Amazon Route 53 health checker that is reporting a status about the health check
     * endpoint.</p>
     */
    inline GetHealthCheckStatusResult& AddHealthCheckObservations(HealthCheckObservation&& value) { m_healthCheckObservations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<HealthCheckObservation> m_healthCheckObservations;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
