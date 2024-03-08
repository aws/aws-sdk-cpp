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
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails();
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Defines the secondary Region.</p>
     */
    inline const Aws::String& GetRoute() const{ return m_route; }

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline bool RouteHasBeenSet() const { return m_routeHasBeenSet; }

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline void SetRoute(const Aws::String& value) { m_routeHasBeenSet = true; m_route = value; }

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline void SetRoute(Aws::String&& value) { m_routeHasBeenSet = true; m_route = std::move(value); }

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline void SetRoute(const char* value) { m_routeHasBeenSet = true; m_route.assign(value); }

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& WithRoute(const Aws::String& value) { SetRoute(value); return *this;}

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& WithRoute(Aws::String&& value) { SetRoute(std::move(value)); return *this;}

    /**
     * <p> Defines the secondary Region.</p>
     */
    inline AwsEventsEndpointRoutingConfigFailoverConfigSecondaryDetails& WithRoute(const char* value) { SetRoute(value); return *this;}

  private:

    Aws::String m_route;
    bool m_routeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
