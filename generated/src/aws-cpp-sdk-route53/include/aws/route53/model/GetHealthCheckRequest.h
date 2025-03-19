/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   * <p>A request to get information about a specified health check. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckRequest">AWS
   * API Reference</a></p>
   */
  class GetHealthCheckRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API GetHealthCheckRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHealthCheck"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier that Amazon Route 53 assigned to the health check when you
     * created it. When you add or update a resource record set, you use this value to
     * specify which health check to use. The value can be up to 64 characters
     * long.</p>
     */
    inline const Aws::String& GetHealthCheckId() const { return m_healthCheckId; }
    inline bool HealthCheckIdHasBeenSet() const { return m_healthCheckIdHasBeenSet; }
    template<typename HealthCheckIdT = Aws::String>
    void SetHealthCheckId(HealthCheckIdT&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = std::forward<HealthCheckIdT>(value); }
    template<typename HealthCheckIdT = Aws::String>
    GetHealthCheckRequest& WithHealthCheckId(HealthCheckIdT&& value) { SetHealthCheckId(std::forward<HealthCheckIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
