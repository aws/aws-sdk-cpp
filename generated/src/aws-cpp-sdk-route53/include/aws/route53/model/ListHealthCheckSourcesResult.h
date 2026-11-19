/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Contains the health check sources and pagination information that
 * <code>ListHealthCheckSources</code> returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthCheckSourcesResponse">AWS
 * API Reference</a></p>
 */
class ListHealthCheckSourcesResult {
 public:
  AWS_ROUTE53_API ListHealthCheckSourcesResult() = default;
  AWS_ROUTE53_API ListHealthCheckSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API ListHealthCheckSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A complex type that contains one <code>HealthCheckSource</code> element for
   * each health check source that is associated with the current Amazon Web Services
   * account.</p>
   */
  inline const Aws::Vector<HealthCheckSource>& GetHealthCheckSources() const { return m_healthCheckSources; }
  template <typename HealthCheckSourcesT = Aws::Vector<HealthCheckSource>>
  void SetHealthCheckSources(HealthCheckSourcesT&& value) {
    m_healthCheckSourcesHasBeenSet = true;
    m_healthCheckSources = std::forward<HealthCheckSourcesT>(value);
  }
  template <typename HealthCheckSourcesT = Aws::Vector<HealthCheckSource>>
  ListHealthCheckSourcesResult& WithHealthCheckSources(HealthCheckSourcesT&& value) {
    SetHealthCheckSources(std::forward<HealthCheckSourcesT>(value));
    return *this;
  }
  template <typename HealthCheckSourcesT = HealthCheckSource>
  ListHealthCheckSourcesResult& AddHealthCheckSources(HealthCheckSourcesT&& value) {
    m_healthCheckSourcesHasBeenSet = true;
    m_healthCheckSources.emplace_back(std::forward<HealthCheckSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token. If there are more health check sources to list, specify
   * this value for <code>NextToken</code> in the next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHealthCheckSourcesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListHealthCheckSourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<HealthCheckSource> m_healthCheckSources;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthCheckSourcesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
