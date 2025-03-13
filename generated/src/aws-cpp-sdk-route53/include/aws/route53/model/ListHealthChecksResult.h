/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HealthCheck.h>
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
   * <p>A complex type that contains the response to a <code>ListHealthChecks</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthChecksResponse">AWS
   * API Reference</a></p>
   */
  class ListHealthChecksResult
  {
  public:
    AWS_ROUTE53_API ListHealthChecksResult() = default;
    AWS_ROUTE53_API ListHealthChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListHealthChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains one <code>HealthCheck</code> element for each
     * health check that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<HealthCheck>& GetHealthChecks() const { return m_healthChecks; }
    template<typename HealthChecksT = Aws::Vector<HealthCheck>>
    void SetHealthChecks(HealthChecksT&& value) { m_healthChecksHasBeenSet = true; m_healthChecks = std::forward<HealthChecksT>(value); }
    template<typename HealthChecksT = Aws::Vector<HealthCheck>>
    ListHealthChecksResult& WithHealthChecks(HealthChecksT&& value) { SetHealthChecks(std::forward<HealthChecksT>(value)); return *this;}
    template<typename HealthChecksT = HealthCheck>
    ListHealthChecksResult& AddHealthChecks(HealthChecksT&& value) { m_healthChecksHasBeenSet = true; m_healthChecks.emplace_back(std::forward<HealthChecksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For the second and subsequent calls to <code>ListHealthChecks</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the previous request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListHealthChecksResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more health checks to be listed. If
     * the response was truncated, you can get the next group of health checks by
     * submitting another <code>ListHealthChecks</code> request and specifying the
     * value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListHealthChecksResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first health check that Amazon Route 53
     * returns if you submit another <code>ListHealthChecks</code> request and specify
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListHealthChecksResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHealthChecks</code> that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListHealthChecksResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHealthChecksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HealthCheck> m_healthChecks;
    bool m_healthChecksHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
