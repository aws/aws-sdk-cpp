/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/RouteAnalysisEndpointOptionsSpecification.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class StartRouteAnalysisRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API StartRouteAnalysisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartRouteAnalysis"; }

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
    StartRouteAnalysisRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source from which traffic originates.</p>
     */
    inline const RouteAnalysisEndpointOptionsSpecification& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = RouteAnalysisEndpointOptionsSpecification>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = RouteAnalysisEndpointOptionsSpecification>
    StartRouteAnalysisRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination.</p>
     */
    inline const RouteAnalysisEndpointOptionsSpecification& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = RouteAnalysisEndpointOptionsSpecification>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = RouteAnalysisEndpointOptionsSpecification>
    StartRouteAnalysisRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to analyze the return path. The default is
     * <code>false</code>.</p>
     */
    inline bool GetIncludeReturnPath() const { return m_includeReturnPath; }
    inline bool IncludeReturnPathHasBeenSet() const { return m_includeReturnPathHasBeenSet; }
    inline void SetIncludeReturnPath(bool value) { m_includeReturnPathHasBeenSet = true; m_includeReturnPath = value; }
    inline StartRouteAnalysisRequest& WithIncludeReturnPath(bool value) { SetIncludeReturnPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis. The default is <code>false</code>.</p>
     */
    inline bool GetUseMiddleboxes() const { return m_useMiddleboxes; }
    inline bool UseMiddleboxesHasBeenSet() const { return m_useMiddleboxesHasBeenSet; }
    inline void SetUseMiddleboxes(bool value) { m_useMiddleboxesHasBeenSet = true; m_useMiddleboxes = value; }
    inline StartRouteAnalysisRequest& WithUseMiddleboxes(bool value) { SetUseMiddleboxes(value); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    RouteAnalysisEndpointOptionsSpecification m_source;
    bool m_sourceHasBeenSet = false;

    RouteAnalysisEndpointOptionsSpecification m_destination;
    bool m_destinationHasBeenSet = false;

    bool m_includeReturnPath{false};
    bool m_includeReturnPathHasBeenSet = false;

    bool m_useMiddleboxes{false};
    bool m_useMiddleboxesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
