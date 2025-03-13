/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about the primary Amazon Web Services Region of the
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails() = default;
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline const Aws::String& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = Aws::String>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = Aws::String>
    AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
