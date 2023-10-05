/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigFailoverConfigDetails.h>
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
   * <p> Provides details about the routing configuration of the
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointRoutingConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointRoutingConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline const AwsEventsEndpointRoutingConfigFailoverConfigDetails& GetFailoverConfig() const{ return m_failoverConfig; }

    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline bool FailoverConfigHasBeenSet() const { return m_failoverConfigHasBeenSet; }

    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline void SetFailoverConfig(const AwsEventsEndpointRoutingConfigFailoverConfigDetails& value) { m_failoverConfigHasBeenSet = true; m_failoverConfig = value; }

    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline void SetFailoverConfig(AwsEventsEndpointRoutingConfigFailoverConfigDetails&& value) { m_failoverConfigHasBeenSet = true; m_failoverConfig = std::move(value); }

    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline AwsEventsEndpointRoutingConfigDetails& WithFailoverConfig(const AwsEventsEndpointRoutingConfigFailoverConfigDetails& value) { SetFailoverConfig(value); return *this;}

    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline AwsEventsEndpointRoutingConfigDetails& WithFailoverConfig(AwsEventsEndpointRoutingConfigFailoverConfigDetails&& value) { SetFailoverConfig(std::move(value)); return *this;}

  private:

    AwsEventsEndpointRoutingConfigFailoverConfigDetails m_failoverConfig;
    bool m_failoverConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
