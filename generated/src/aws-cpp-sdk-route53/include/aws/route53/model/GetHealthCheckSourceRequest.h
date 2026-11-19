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
namespace Route53 {
namespace Model {

/**
 * <p>Contains the ID of the health check source that you want to get information
 * about.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckSourceRequest">AWS
 * API Reference</a></p>
 */
class GetHealthCheckSourceRequest : public Route53Request {
 public:
  AWS_ROUTE53_API GetHealthCheckSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetHealthCheckSource"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the health check source that you want to get information about.</p>
   */
  inline const Aws::String& GetHealthCheckSourceId() const { return m_healthCheckSourceId; }
  inline bool HealthCheckSourceIdHasBeenSet() const { return m_healthCheckSourceIdHasBeenSet; }
  template <typename HealthCheckSourceIdT = Aws::String>
  void SetHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    m_healthCheckSourceIdHasBeenSet = true;
    m_healthCheckSourceId = std::forward<HealthCheckSourceIdT>(value);
  }
  template <typename HealthCheckSourceIdT = Aws::String>
  GetHealthCheckSourceRequest& WithHealthCheckSourceId(HealthCheckSourceIdT&& value) {
    SetHealthCheckSourceId(std::forward<HealthCheckSourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_healthCheckSourceId;
  bool m_healthCheckSourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
