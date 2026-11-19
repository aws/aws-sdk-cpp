/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Route53 {
namespace Model {

/**
 * <p>Contains the parameters for retrieving a list of the health checks that use a
 * specified health check source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthChecksBySourceRequest">AWS
 * API Reference</a></p>
 */
class ListHealthChecksBySourceRequest : public Route53Request {
 public:
  AWS_ROUTE53_API ListHealthChecksBySourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListHealthChecksBySource"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the health check source whose health checks you want to list.</p>
   */
  inline const Aws::String& GetHealthCheckSourceId() const { return m_healthCheckSourceId; }
  inline bool HealthCheckSourceIdHasBeenSet() const { return m_healthCheckSourceIdHasBeenSet; }
  template <typename HealthCheckSourceIdT = Aws::String>
  void SetHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    m_healthCheckSourceIdHasBeenSet = true;
    m_healthCheckSourceId = std::forward<HealthCheckSourceIdT>(value);
  }
  template <typename HealthCheckSourceIdT = Aws::String>
  ListHealthChecksBySourceRequest& WithHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    SetHealthCheckSourceId(std::forward<HealthCheckSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>NextMarker</code> value from the previous response, if the value of
   * <code>IsTruncated</code> was <code>true</code>. Specify it to get the next group
   * of health checks. If <code>IsTruncated</code> was <code>false</code>, there are
   * no more health checks to get.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  ListHealthChecksBySourceRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of health checks that you want
   * <code>ListHealthChecksBySource</code> to return. Route 53 returns a maximum of
   * 1000 health checks. If you specify a value greater than 1000, Route 53 returns
   * only the first 1000.</p>
   */
  inline const Aws::String& GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  template <typename MaxItemsT = Aws::String>
  void SetMaxItems(MaxItemsT&& value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = std::forward<MaxItemsT>(value);
  }
  template <typename MaxItemsT = Aws::String>
  ListHealthChecksBySourceRequest& WithMaxItems(MaxItemsT&& value) {
    SetMaxItems(std::forward<MaxItemsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_healthCheckSourceId;

  Aws::String m_marker;

  Aws::String m_maxItems;
  bool m_healthCheckSourceIdHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
