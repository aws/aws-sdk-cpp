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
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigDetails() = default;
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The failover configuration for an endpoint. This includes what triggers
     * failover and what happens when it's triggered.</p>
     */
    inline const AwsEventsEndpointRoutingConfigFailoverConfigDetails& GetFailoverConfig() const { return m_failoverConfig; }
    inline bool FailoverConfigHasBeenSet() const { return m_failoverConfigHasBeenSet; }
    template<typename FailoverConfigT = AwsEventsEndpointRoutingConfigFailoverConfigDetails>
    void SetFailoverConfig(FailoverConfigT&& value) { m_failoverConfigHasBeenSet = true; m_failoverConfig = std::forward<FailoverConfigT>(value); }
    template<typename FailoverConfigT = AwsEventsEndpointRoutingConfigFailoverConfigDetails>
    AwsEventsEndpointRoutingConfigDetails& WithFailoverConfig(FailoverConfigT&& value) { SetFailoverConfig(std::forward<FailoverConfigT>(value)); return *this;}
    ///@}
  private:

    AwsEventsEndpointRoutingConfigFailoverConfigDetails m_failoverConfig;
    bool m_failoverConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
