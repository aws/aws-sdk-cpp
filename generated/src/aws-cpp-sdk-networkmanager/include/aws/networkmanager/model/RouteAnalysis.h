/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/RouteAnalysisStatus.h>
#include <aws/networkmanager/model/RouteAnalysisEndpointOptions.h>
#include <aws/networkmanager/model/RouteAnalysisPath.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a route analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteAnalysis">AWS
   * API Reference</a></p>
   */
  class RouteAnalysis
  {
  public:
    AWS_NETWORKMANAGER_API RouteAnalysis() = default;
    AWS_NETWORKMANAGER_API RouteAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    RouteAnalysis& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    RouteAnalysis& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
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
    RouteAnalysis& WithRouteAnalysisId(RouteAnalysisIdT&& value) { SetRouteAnalysisId(std::forward<RouteAnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    RouteAnalysis& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the route analysis.</p>
     */
    inline RouteAnalysisStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RouteAnalysisStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RouteAnalysis& WithStatus(RouteAnalysisStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source.</p>
     */
    inline const RouteAnalysisEndpointOptions& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = RouteAnalysisEndpointOptions>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = RouteAnalysisEndpointOptions>
    RouteAnalysis& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination.</p>
     */
    inline const RouteAnalysisEndpointOptions& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = RouteAnalysisEndpointOptions>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = RouteAnalysisEndpointOptions>
    RouteAnalysis& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to analyze the return path. The return path is not analyzed
     * if the forward path analysis does not succeed.</p>
     */
    inline bool GetIncludeReturnPath() const { return m_includeReturnPath; }
    inline bool IncludeReturnPathHasBeenSet() const { return m_includeReturnPathHasBeenSet; }
    inline void SetIncludeReturnPath(bool value) { m_includeReturnPathHasBeenSet = true; m_includeReturnPath = value; }
    inline RouteAnalysis& WithIncludeReturnPath(bool value) { SetIncludeReturnPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis.</p>
     */
    inline bool GetUseMiddleboxes() const { return m_useMiddleboxes; }
    inline bool UseMiddleboxesHasBeenSet() const { return m_useMiddleboxesHasBeenSet; }
    inline void SetUseMiddleboxes(bool value) { m_useMiddleboxesHasBeenSet = true; m_useMiddleboxes = value; }
    inline RouteAnalysis& WithUseMiddleboxes(bool value) { SetUseMiddleboxes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forward path.</p>
     */
    inline const RouteAnalysisPath& GetForwardPath() const { return m_forwardPath; }
    inline bool ForwardPathHasBeenSet() const { return m_forwardPathHasBeenSet; }
    template<typename ForwardPathT = RouteAnalysisPath>
    void SetForwardPath(ForwardPathT&& value) { m_forwardPathHasBeenSet = true; m_forwardPath = std::forward<ForwardPathT>(value); }
    template<typename ForwardPathT = RouteAnalysisPath>
    RouteAnalysis& WithForwardPath(ForwardPathT&& value) { SetForwardPath(std::forward<ForwardPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The return path.</p>
     */
    inline const RouteAnalysisPath& GetReturnPath() const { return m_returnPath; }
    inline bool ReturnPathHasBeenSet() const { return m_returnPathHasBeenSet; }
    template<typename ReturnPathT = RouteAnalysisPath>
    void SetReturnPath(ReturnPathT&& value) { m_returnPathHasBeenSet = true; m_returnPath = std::forward<ReturnPathT>(value); }
    template<typename ReturnPathT = RouteAnalysisPath>
    RouteAnalysis& WithReturnPath(ReturnPathT&& value) { SetReturnPath(std::forward<ReturnPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_routeAnalysisId;
    bool m_routeAnalysisIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    RouteAnalysisStatus m_status{RouteAnalysisStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RouteAnalysisEndpointOptions m_source;
    bool m_sourceHasBeenSet = false;

    RouteAnalysisEndpointOptions m_destination;
    bool m_destinationHasBeenSet = false;

    bool m_includeReturnPath{false};
    bool m_includeReturnPathHasBeenSet = false;

    bool m_useMiddleboxes{false};
    bool m_useMiddleboxesHasBeenSet = false;

    RouteAnalysisPath m_forwardPath;
    bool m_forwardPathHasBeenSet = false;

    RouteAnalysisPath m_returnPath;
    bool m_returnPathHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
