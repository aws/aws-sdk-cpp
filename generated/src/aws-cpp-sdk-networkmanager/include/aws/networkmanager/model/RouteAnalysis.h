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
    AWS_NETWORKMANAGER_API RouteAnalysis();
    AWS_NETWORKMANAGER_API RouteAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline RouteAnalysis& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline RouteAnalysis& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline RouteAnalysis& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline RouteAnalysis& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline RouteAnalysis& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that created the route analysis.</p>
     */
    inline RouteAnalysis& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


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
    inline RouteAnalysis& WithRouteAnalysisId(const Aws::String& value) { SetRouteAnalysisId(value); return *this;}

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline RouteAnalysis& WithRouteAnalysisId(Aws::String&& value) { SetRouteAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route analysis.</p>
     */
    inline RouteAnalysis& WithRouteAnalysisId(const char* value) { SetRouteAnalysisId(value); return *this;}


    /**
     * <p>The time that the analysis started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>The time that the analysis started.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>The time that the analysis started.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>The time that the analysis started.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>The time that the analysis started.</p>
     */
    inline RouteAnalysis& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>The time that the analysis started.</p>
     */
    inline RouteAnalysis& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the route analysis.</p>
     */
    inline const RouteAnalysisStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the route analysis.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the route analysis.</p>
     */
    inline void SetStatus(const RouteAnalysisStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the route analysis.</p>
     */
    inline void SetStatus(RouteAnalysisStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the route analysis.</p>
     */
    inline RouteAnalysis& WithStatus(const RouteAnalysisStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the route analysis.</p>
     */
    inline RouteAnalysis& WithStatus(RouteAnalysisStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The source.</p>
     */
    inline const RouteAnalysisEndpointOptions& GetSource() const{ return m_source; }

    /**
     * <p>The source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source.</p>
     */
    inline void SetSource(const RouteAnalysisEndpointOptions& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source.</p>
     */
    inline void SetSource(RouteAnalysisEndpointOptions&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source.</p>
     */
    inline RouteAnalysis& WithSource(const RouteAnalysisEndpointOptions& value) { SetSource(value); return *this;}

    /**
     * <p>The source.</p>
     */
    inline RouteAnalysis& WithSource(RouteAnalysisEndpointOptions&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The destination.</p>
     */
    inline const RouteAnalysisEndpointOptions& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(const RouteAnalysisEndpointOptions& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination.</p>
     */
    inline void SetDestination(RouteAnalysisEndpointOptions&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination.</p>
     */
    inline RouteAnalysis& WithDestination(const RouteAnalysisEndpointOptions& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination.</p>
     */
    inline RouteAnalysis& WithDestination(RouteAnalysisEndpointOptions&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to analyze the return path. The return path is not analyzed
     * if the forward path analysis does not succeed.</p>
     */
    inline bool GetIncludeReturnPath() const{ return m_includeReturnPath; }

    /**
     * <p>Indicates whether to analyze the return path. The return path is not analyzed
     * if the forward path analysis does not succeed.</p>
     */
    inline bool IncludeReturnPathHasBeenSet() const { return m_includeReturnPathHasBeenSet; }

    /**
     * <p>Indicates whether to analyze the return path. The return path is not analyzed
     * if the forward path analysis does not succeed.</p>
     */
    inline void SetIncludeReturnPath(bool value) { m_includeReturnPathHasBeenSet = true; m_includeReturnPath = value; }

    /**
     * <p>Indicates whether to analyze the return path. The return path is not analyzed
     * if the forward path analysis does not succeed.</p>
     */
    inline RouteAnalysis& WithIncludeReturnPath(bool value) { SetIncludeReturnPath(value); return *this;}


    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis.</p>
     */
    inline bool GetUseMiddleboxes() const{ return m_useMiddleboxes; }

    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis.</p>
     */
    inline bool UseMiddleboxesHasBeenSet() const { return m_useMiddleboxesHasBeenSet; }

    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis.</p>
     */
    inline void SetUseMiddleboxes(bool value) { m_useMiddleboxesHasBeenSet = true; m_useMiddleboxes = value; }

    /**
     * <p>Indicates whether to include the location of middlebox appliances in the
     * route analysis.</p>
     */
    inline RouteAnalysis& WithUseMiddleboxes(bool value) { SetUseMiddleboxes(value); return *this;}


    /**
     * <p>The forward path.</p>
     */
    inline const RouteAnalysisPath& GetForwardPath() const{ return m_forwardPath; }

    /**
     * <p>The forward path.</p>
     */
    inline bool ForwardPathHasBeenSet() const { return m_forwardPathHasBeenSet; }

    /**
     * <p>The forward path.</p>
     */
    inline void SetForwardPath(const RouteAnalysisPath& value) { m_forwardPathHasBeenSet = true; m_forwardPath = value; }

    /**
     * <p>The forward path.</p>
     */
    inline void SetForwardPath(RouteAnalysisPath&& value) { m_forwardPathHasBeenSet = true; m_forwardPath = std::move(value); }

    /**
     * <p>The forward path.</p>
     */
    inline RouteAnalysis& WithForwardPath(const RouteAnalysisPath& value) { SetForwardPath(value); return *this;}

    /**
     * <p>The forward path.</p>
     */
    inline RouteAnalysis& WithForwardPath(RouteAnalysisPath&& value) { SetForwardPath(std::move(value)); return *this;}


    /**
     * <p>The return path.</p>
     */
    inline const RouteAnalysisPath& GetReturnPath() const{ return m_returnPath; }

    /**
     * <p>The return path.</p>
     */
    inline bool ReturnPathHasBeenSet() const { return m_returnPathHasBeenSet; }

    /**
     * <p>The return path.</p>
     */
    inline void SetReturnPath(const RouteAnalysisPath& value) { m_returnPathHasBeenSet = true; m_returnPath = value; }

    /**
     * <p>The return path.</p>
     */
    inline void SetReturnPath(RouteAnalysisPath&& value) { m_returnPathHasBeenSet = true; m_returnPath = std::move(value); }

    /**
     * <p>The return path.</p>
     */
    inline RouteAnalysis& WithReturnPath(const RouteAnalysisPath& value) { SetReturnPath(value); return *this;}

    /**
     * <p>The return path.</p>
     */
    inline RouteAnalysis& WithReturnPath(RouteAnalysisPath&& value) { SetReturnPath(std::move(value)); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_routeAnalysisId;
    bool m_routeAnalysisIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet = false;

    RouteAnalysisStatus m_status;
    bool m_statusHasBeenSet = false;

    RouteAnalysisEndpointOptions m_source;
    bool m_sourceHasBeenSet = false;

    RouteAnalysisEndpointOptions m_destination;
    bool m_destinationHasBeenSet = false;

    bool m_includeReturnPath;
    bool m_includeReturnPathHasBeenSet = false;

    bool m_useMiddleboxes;
    bool m_useMiddleboxesHasBeenSet = false;

    RouteAnalysisPath m_forwardPath;
    bool m_forwardPathHasBeenSet = false;

    RouteAnalysisPath m_returnPath;
    bool m_returnPathHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
