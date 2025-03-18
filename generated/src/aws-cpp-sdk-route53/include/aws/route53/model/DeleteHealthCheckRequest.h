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
   * <p>This action deletes a health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteHealthCheckRequest">AWS
   * API Reference</a></p>
   */
  class DeleteHealthCheckRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API DeleteHealthCheckRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHealthCheck"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the health check that you want to delete.</p>
     */
    inline const Aws::String& GetHealthCheckId() const { return m_healthCheckId; }
    inline bool HealthCheckIdHasBeenSet() const { return m_healthCheckIdHasBeenSet; }
    template<typename HealthCheckIdT = Aws::String>
    void SetHealthCheckId(HealthCheckIdT&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = std::forward<HealthCheckIdT>(value); }
    template<typename HealthCheckIdT = Aws::String>
    DeleteHealthCheckRequest& WithHealthCheckId(HealthCheckIdT&& value) { SetHealthCheckId(std::forward<HealthCheckIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
