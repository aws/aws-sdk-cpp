/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheckSource.h>

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
 * <p>Contains the health check source that <code>GetHealthCheckSource</code>
 * returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckSourceResponse">AWS
 * API Reference</a></p>
 */
class GetHealthCheckSourceResult {
 public:
  AWS_ROUTE53_API GetHealthCheckSourceResult() = default;
  AWS_ROUTE53_API GetHealthCheckSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API GetHealthCheckSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A complex type that contains information about the specified health check
   * source.</p>
   */
  inline const HealthCheckSource& GetHealthCheckSource() const { return m_healthCheckSource; }
  template <typename HealthCheckSourceT = HealthCheckSource>
  void SetHealthCheckSource(HealthCheckSourceT&& value) {
    m_healthCheckSourceHasBeenSet = true;
    m_healthCheckSource = std::forward<HealthCheckSourceT>(value);
  }
  template <typename HealthCheckSourceT = HealthCheckSource>
  GetHealthCheckSourceResult& WithHealthCheckSource(HealthCheckSourceT&& value) {
    SetHealthCheckSource(std::forward<HealthCheckSourceT>(value));
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
  GetHealthCheckSourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  HealthCheckSource m_healthCheckSource;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthCheckSourceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
