/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains the response to a
   * <code>GetHealthCheckLastFailureReason</code> request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckLastFailureReasonResponse">AWS
   * API Reference</a></p>
   */
  class GetHealthCheckLastFailureReasonResult
  {
  public:
    AWS_ROUTE53_API GetHealthCheckLastFailureReasonResult() = default;
    AWS_ROUTE53_API GetHealthCheckLastFailureReasonResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHealthCheckLastFailureReasonResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list that contains one <code>Observation</code> element for each Amazon
     * Route 53 health checker that is reporting a last failure reason. </p>
     */
    inline const Aws::Vector<HealthCheckObservation>& GetHealthCheckObservations() const { return m_healthCheckObservations; }
    template<typename HealthCheckObservationsT = Aws::Vector<HealthCheckObservation>>
    void SetHealthCheckObservations(HealthCheckObservationsT&& value) { m_healthCheckObservationsHasBeenSet = true; m_healthCheckObservations = std::forward<HealthCheckObservationsT>(value); }
    template<typename HealthCheckObservationsT = Aws::Vector<HealthCheckObservation>>
    GetHealthCheckLastFailureReasonResult& WithHealthCheckObservations(HealthCheckObservationsT&& value) { SetHealthCheckObservations(std::forward<HealthCheckObservationsT>(value)); return *this;}
    template<typename HealthCheckObservationsT = HealthCheckObservation>
    GetHealthCheckLastFailureReasonResult& AddHealthCheckObservations(HealthCheckObservationsT&& value) { m_healthCheckObservationsHasBeenSet = true; m_healthCheckObservations.emplace_back(std::forward<HealthCheckObservationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHealthCheckLastFailureReasonResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HealthCheckObservation> m_healthCheckObservations;
    bool m_healthCheckObservationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
