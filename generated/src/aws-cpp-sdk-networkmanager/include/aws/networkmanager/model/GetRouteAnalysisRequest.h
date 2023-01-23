/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetRouteAnalysisRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetRouteAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRouteAnalysis"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetRouteAnalysisRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetRouteAnalysisRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetRouteAnalysisRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the route analysis.</p>
     */
    inline const Aws::String& GetRouteAnalysisId() const{ return m_routeAnalysisId; }

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline bool RouteAnalysisIdHasBeenSet() const { return m_routeAnalysisIdHasBeenSet; }

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline void SetRouteAnalysisId(const Aws::String& value) { m_routeAnalysisIdHasBeenSet = true; m_routeAnalysisId = value; }

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline void SetRouteAnalysisId(Aws::String&& value) { m_routeAnalysisIdHasBeenSet = true; m_routeAnalysisId = std::move(value); }

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline void SetRouteAnalysisId(const char* value) { m_routeAnalysisIdHasBeenSet = true; m_routeAnalysisId.assign(value); }

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline GetRouteAnalysisRequest& WithRouteAnalysisId(const Aws::String& value) { SetRouteAnalysisId(value); return *this;}

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline GetRouteAnalysisRequest& WithRouteAnalysisId(Aws::String&& value) { SetRouteAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline GetRouteAnalysisRequest& WithRouteAnalysisId(const char* value) { SetRouteAnalysisId(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_routeAnalysisId;
    bool m_routeAnalysisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
