/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails.h>
#include <aws/securityhub/model/AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails.h>
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
   * <p> The failover configuration for an endpoint. This includes what triggers
   * failover and what happens when it's triggered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointRoutingConfigFailoverConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointRoutingConfigFailoverConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline const AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& GetPrimary() const{ return m_primary; }

    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline void SetPrimary(const AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline void SetPrimary(AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails&& value) { m_primaryHasBeenSet = true; m_primary = std::move(value); }

    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigDetails& WithPrimary(const AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& value) { SetPrimary(value); return *this;}

    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigDetails& WithPrimary(AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails&& value) { SetPrimary(std::move(value)); return *this;}


    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline const AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& GetSecondary() const{ return m_secondary; }

    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline bool SecondaryHasBeenSet() const { return m_secondaryHasBeenSet; }

    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline void SetSecondary(const AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& value) { m_secondaryHasBeenSet = true; m_secondary = value; }

    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline void SetSecondary(AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails&& value) { m_secondaryHasBeenSet = true; m_secondary = std::move(value); }

    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigDetails& WithSecondary(const AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& value) { SetSecondary(value); return *this;}

    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigDetails& WithSecondary(AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails&& value) { SetSecondary(std::move(value)); return *this;}

  private:

    AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails m_primary;
    bool m_primaryHasBeenSet = false;

    AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails m_secondary;
    bool m_secondaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
