/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheckSourceStatus.h>

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
 * <p>Returns the ID, status, and location URL of the new health check
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHealthCheckSourceResponse">AWS
 * API Reference</a></p>
 */
class CreateHealthCheckSourceResult {
 public:
  AWS_ROUTE53_API CreateHealthCheckSourceResult() = default;
  AWS_ROUTE53_API CreateHealthCheckSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API CreateHealthCheckSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the new health check source. Route 53 assigns this ID when it
   * creates the source.</p>
   */
  inline const Aws::String& GetHealthCheckSourceId() const { return m_healthCheckSourceId; }
  template <typename HealthCheckSourceIdT = Aws::String>
  void SetHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    m_healthCheckSourceIdHasBeenSet = true;
    m_healthCheckSourceId = std::forward<HealthCheckSourceIdT>(value);
  }
  template <typename HealthCheckSourceIdT = Aws::String>
  CreateHealthCheckSourceResult& WithHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    SetHealthCheckSourceId(std::forward<HealthCheckSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the health check source. Immediately after you create a
   * health check source, the status is <code>CREATE_PENDING</code>. If the request
   * is a retry with the same <code>CallerReference</code>, the status is the current
   * status of the existing health check source.</p>
   */
  inline HealthCheckSourceStatus GetHealthCheckSourceStatus() const { return m_healthCheckSourceStatus; }
  inline void SetHealthCheckSourceStatus(HealthCheckSourceStatus value) {
    m_healthCheckSourceStatusHasBeenSet = true;
    m_healthCheckSourceStatus = value;
  }
  inline CreateHealthCheckSourceResult& WithHealthCheckSourceStatus(HealthCheckSourceStatus value) {
    SetHealthCheckSourceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique URL representing the new health check source.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  CreateHealthCheckSourceResult& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
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
  CreateHealthCheckSourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_healthCheckSourceId;

  HealthCheckSourceStatus m_healthCheckSourceStatus{HealthCheckSourceStatus::NOT_SET};

  Aws::String m_location;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthCheckSourceIdHasBeenSet = false;
  bool m_healthCheckSourceStatusHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
