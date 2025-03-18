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
   * <p> The Amazon Web Services Region that events are routed to when failover is
   * triggered or event replication is enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails() = default;
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Defines the secondary Region.</p>
     */
    inline const Aws::String& GetRoute() const { return m_route; }
    inline bool RouteHasBeenSet() const { return m_routeHasBeenSet; }
    template<typename RouteT = Aws::String>
    void SetRoute(RouteT&& value) { m_routeHasBeenSet = true; m_route = std::forward<RouteT>(value); }
    template<typename RouteT = Aws::String>
    AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& WithRoute(RouteT&& value) { SetRoute(std::forward<RouteT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_route;
    bool m_routeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
