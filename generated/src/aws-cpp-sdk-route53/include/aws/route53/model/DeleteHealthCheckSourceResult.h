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
 * <p>Contains the ID and status of the health check source that
 * <code>DeleteHealthCheckSource</code> deletes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteHealthCheckSourceResponse">AWS
 * API Reference</a></p>
 */
class DeleteHealthCheckSourceResult {
 public:
  AWS_ROUTE53_API DeleteHealthCheckSourceResult() = default;
  AWS_ROUTE53_API DeleteHealthCheckSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API DeleteHealthCheckSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The ID of the health check source that is being deleted.</p>
   */
  inline const Aws::String& GetHealthCheckSourceId() const { return m_healthCheckSourceId; }
  template <typename HealthCheckSourceIdT = Aws::String>
  void SetHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    m_healthCheckSourceIdHasBeenSet = true;
    m_healthCheckSourceId = std::forward<HealthCheckSourceIdT>(value);
  }
  template <typename HealthCheckSourceIdT = Aws::String>
  DeleteHealthCheckSourceResult& WithHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    SetHealthCheckSourceId(std::forward<HealthCheckSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the health check source after Route 53 accepts the delete
   * request. The value is <code>DELETE_PENDING</code>, or the current status if
   * deletion of the health check source was already in progress.</p>
   */
  inline HealthCheckSourceStatus GetHealthCheckSourceStatus() const { return m_healthCheckSourceStatus; }
  inline void SetHealthCheckSourceStatus(HealthCheckSourceStatus value) {
    m_healthCheckSourceStatusHasBeenSet = true;
    m_healthCheckSourceStatus = value;
  }
  inline DeleteHealthCheckSourceResult& WithHealthCheckSourceStatus(HealthCheckSourceStatus value) {
    SetHealthCheckSourceStatus(value);
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
  DeleteHealthCheckSourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_healthCheckSourceId;

  HealthCheckSourceStatus m_healthCheckSourceStatus{HealthCheckSourceStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthCheckSourceIdHasBeenSet = false;
  bool m_healthCheckSourceStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
