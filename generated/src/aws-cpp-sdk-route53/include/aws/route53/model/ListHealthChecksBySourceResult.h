/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheck.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {
/**
 * <p>Contains the health checks and pagination information that
 * <code>ListHealthChecksBySource</code> returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthChecksBySourceResponse">AWS
 * API Reference</a></p>
 */
class ListHealthChecksBySourceResult {
 public:
  AWS_ROUTE53_API ListHealthChecksBySourceResult() = default;
  AWS_ROUTE53_API ListHealthChecksBySourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API ListHealthChecksBySourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A complex type that contains one <code>HealthCheck</code> element for each
   * health check that uses the specified health check source.</p>
   */
  inline const Aws::Vector<HealthCheck>& GetHealthChecks() const { return m_healthChecks; }
  template <typename HealthChecksT = Aws::Vector<HealthCheck>>
  void SetHealthChecks(HealthChecksT&& value) {
    m_healthChecksHasBeenSet = true;
    m_healthChecks = std::forward<HealthChecksT>(value);
  }
  template <typename HealthChecksT = Aws::Vector<HealthCheck>>
  ListHealthChecksBySourceResult& WithHealthChecks(HealthChecksT&& value) {
    SetHealthChecks(std::forward<HealthChecksT>(value));
    return *this;
  }
  template <typename HealthChecksT = HealthCheck>
  ListHealthChecksBySourceResult& AddHealthChecks(HealthChecksT&& value) {
    m_healthChecksHasBeenSet = true;
    m_healthChecks.emplace_back(std::forward<HealthChecksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that you specified for the <code>marker</code> parameter in the
   * call to <code>ListHealthChecksBySource</code> that produced the current
   * response. This value is present for the second and subsequent calls to
   * <code>ListHealthChecksBySource</code>.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListHealthChecksBySourceResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether there are more health checks to list. If the value is
   * <code>true</code>, specify the <code>NextMarker</code> value for
   * <code>marker</code> to get the next group of health checks.</p>
   */
  inline bool GetIsTruncated() const { return m_isTruncated; }
  inline void SetIsTruncated(bool value) {
    m_isTruncatedHasBeenSet = true;
    m_isTruncated = value;
  }
  inline ListHealthChecksBySourceResult& WithIsTruncated(bool value) {
    SetIsTruncated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the first health check in the next group of health checks.
   * If <code>IsTruncated</code> is <code>true</code>, specify this value in the
   * <code>marker</code> parameter of another <code>ListHealthChecksBySource</code>
   * request.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListHealthChecksBySourceResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that you specified for the <code>maxitems</code> parameter in the
   * call to <code>ListHealthChecksBySource</code> that produced the current
   * response.</p>
   */
  inline const Aws::String& GetMaxItems() const { return m_maxItems; }
  template <typename MaxItemsT = Aws::String>
  void SetMaxItems(MaxItemsT&& value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = std::forward<MaxItemsT>(value);
  }
  template <typename MaxItemsT = Aws::String>
  ListHealthChecksBySourceResult& WithMaxItems(MaxItemsT&& value) {
    SetMaxItems(std::forward<MaxItemsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListHealthChecksBySourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<HealthCheck> m_healthChecks;

  Aws::String m_marker;

  bool m_isTruncated{false};

  Aws::String m_nextMarker;

  Aws::String m_maxItems;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthChecksHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_isTruncatedHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
