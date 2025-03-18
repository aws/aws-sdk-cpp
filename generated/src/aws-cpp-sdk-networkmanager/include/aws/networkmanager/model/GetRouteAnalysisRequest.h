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
    AWS_NETWORKMANAGER_API GetRouteAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRouteAnalysis"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    GetRouteAnalysisRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route analysis.</p>
     */
    inline const Aws::String& GetRouteAnalysisId() const { return m_routeAnalysisId; }
    inline bool RouteAnalysisIdHasBeenSet() const { return m_routeAnalysisIdHasBeenSet; }
    template<typename RouteAnalysisIdT = Aws::String>
    void SetRouteAnalysisId(RouteAnalysisIdT&& value) { m_routeAnalysisIdHasBeenSet = true; m_routeAnalysisId = std::forward<RouteAnalysisIdT>(value); }
    template<typename RouteAnalysisIdT = Aws::String>
    GetRouteAnalysisRequest& WithRouteAnalysisId(RouteAnalysisIdT&& value) { SetRouteAnalysisId(std::forward<RouteAnalysisIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_routeAnalysisId;
    bool m_routeAnalysisIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
