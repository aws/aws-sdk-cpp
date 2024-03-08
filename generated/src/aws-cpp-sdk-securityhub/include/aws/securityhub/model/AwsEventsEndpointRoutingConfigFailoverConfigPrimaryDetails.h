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
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline const Aws::String& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline void SetHealthCheck(const Aws::String& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline void SetHealthCheck(Aws::String&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline void SetHealthCheck(const char* value) { m_healthCheckHasBeenSet = true; m_healthCheck.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& WithHealthCheck(const Aws::String& value) { SetHealthCheck(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& WithHealthCheck(Aws::String&& value) { SetHealthCheck(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the health check used by the endpoint to
     * determine whether failover is triggered.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& WithHealthCheck(const char* value) { SetHealthCheck(value); return *this;}

  private:

    Aws::String m_healthCheck;
    bool m_healthCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
