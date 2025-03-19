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
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigDetails() = default;
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The main Region of the endpoint.</p>
     */
    inline const AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails& GetPrimary() const { return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    template<typename PrimaryT = AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails>
    void SetPrimary(PrimaryT&& value) { m_primaryHasBeenSet = true; m_primary = std::forward<PrimaryT>(value); }
    template<typename PrimaryT = AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails>
    AwsEventsEndpointRoutingConfigFailoverConfigDetails& WithPrimary(PrimaryT&& value) { SetPrimary(std::forward<PrimaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Region that events are routed to when failover is triggered or event
     * replication is enabled.</p>
     */
    inline const AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& GetSecondary() const { return m_secondary; }
    inline bool SecondaryHasBeenSet() const { return m_secondaryHasBeenSet; }
    template<typename SecondaryT = AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails>
    void SetSecondary(SecondaryT&& value) { m_secondaryHasBeenSet = true; m_secondary = std::forward<SecondaryT>(value); }
    template<typename SecondaryT = AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails>
    AwsEventsEndpointRoutingConfigFailoverConfigDetails& WithSecondary(SecondaryT&& value) { SetSecondary(std::forward<SecondaryT>(value)); return *this;}
    ///@}
  private:

    AwsEventsEndpointRoutingConfigFailoverConfigPrimaryDetails m_primary;
    bool m_primaryHasBeenSet = false;

    AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails m_secondary;
    bool m_secondaryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
