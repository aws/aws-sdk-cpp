/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/SetSourceRequest.h>
#include <aws/mediaconnect/model/FailoverConfig.h>
#include <aws/mediaconnect/model/AddMaintenance.h>
#include <aws/mediaconnect/model/MonitoringConfig.h>
#include <aws/mediaconnect/model/FlowSize.h>
#include <aws/mediaconnect/model/NdiConfig.h>
#include <aws/mediaconnect/model/GrantEntitlementRequest.h>
#include <aws/mediaconnect/model/AddMediaStreamRequest.h>
#include <aws/mediaconnect/model/AddOutputRequest.h>
#include <aws/mediaconnect/model/VpcInterfaceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class CreateFlowRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API CreateFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlow"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateFlowRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The entitlements that you want to grant on a flow.</p>
     */
    inline const Aws::Vector<GrantEntitlementRequest>& GetEntitlements() const { return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    template<typename EntitlementsT = Aws::Vector<GrantEntitlementRequest>>
    void SetEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::forward<EntitlementsT>(value); }
    template<typename EntitlementsT = Aws::Vector<GrantEntitlementRequest>>
    CreateFlowRequest& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = GrantEntitlementRequest>
    CreateFlowRequest& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The media streams that you want to add to the flow. You can associate these
     * media streams with sources and outputs on the flow.</p>
     */
    inline const Aws::Vector<AddMediaStreamRequest>& GetMediaStreams() const { return m_mediaStreams; }
    inline bool MediaStreamsHasBeenSet() const { return m_mediaStreamsHasBeenSet; }
    template<typename MediaStreamsT = Aws::Vector<AddMediaStreamRequest>>
    void SetMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::forward<MediaStreamsT>(value); }
    template<typename MediaStreamsT = Aws::Vector<AddMediaStreamRequest>>
    CreateFlowRequest& WithMediaStreams(MediaStreamsT&& value) { SetMediaStreams(std::forward<MediaStreamsT>(value)); return *this;}
    template<typename MediaStreamsT = AddMediaStreamRequest>
    CreateFlowRequest& AddMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.emplace_back(std::forward<MediaStreamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateFlowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The outputs that you want to add to this flow.</p>
     */
    inline const Aws::Vector<AddOutputRequest>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<AddOutputRequest>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<AddOutputRequest>>
    CreateFlowRequest& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = AddOutputRequest>
    CreateFlowRequest& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The settings for the source that you want to use for the new flow. </p>
     */
    inline const SetSourceRequest& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = SetSourceRequest>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = SetSourceRequest>
    CreateFlowRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for source failover. </p>
     */
    inline const FailoverConfig& GetSourceFailoverConfig() const { return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    template<typename SourceFailoverConfigT = FailoverConfig>
    void SetSourceFailoverConfig(SourceFailoverConfigT&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::forward<SourceFailoverConfigT>(value); }
    template<typename SourceFailoverConfigT = FailoverConfig>
    CreateFlowRequest& WithSourceFailoverConfig(SourceFailoverConfigT&& value) { SetSourceFailoverConfig(std::forward<SourceFailoverConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources that are assigned to the flow. </p>
     */
    inline const Aws::Vector<SetSourceRequest>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<SetSourceRequest>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<SetSourceRequest>>
    CreateFlowRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = SetSourceRequest>
    CreateFlowRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The VPC interfaces you want on the flow.</p>
     */
    inline const Aws::Vector<VpcInterfaceRequest>& GetVpcInterfaces() const { return m_vpcInterfaces; }
    inline bool VpcInterfacesHasBeenSet() const { return m_vpcInterfacesHasBeenSet; }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterfaceRequest>>
    void SetVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::forward<VpcInterfacesT>(value); }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterfaceRequest>>
    CreateFlowRequest& WithVpcInterfaces(VpcInterfacesT&& value) { SetVpcInterfaces(std::forward<VpcInterfacesT>(value)); return *this;}
    template<typename VpcInterfacesT = VpcInterfaceRequest>
    CreateFlowRequest& AddVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.emplace_back(std::forward<VpcInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maintenance settings you want to use for the flow. </p>
     */
    inline const AddMaintenance& GetMaintenance() const { return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    template<typename MaintenanceT = AddMaintenance>
    void SetMaintenance(MaintenanceT&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::forward<MaintenanceT>(value); }
    template<typename MaintenanceT = AddMaintenance>
    CreateFlowRequest& WithMaintenance(MaintenanceT&& value) { SetMaintenance(std::forward<MaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for source monitoring. </p>
     */
    inline const MonitoringConfig& GetSourceMonitoringConfig() const { return m_sourceMonitoringConfig; }
    inline bool SourceMonitoringConfigHasBeenSet() const { return m_sourceMonitoringConfigHasBeenSet; }
    template<typename SourceMonitoringConfigT = MonitoringConfig>
    void SetSourceMonitoringConfig(SourceMonitoringConfigT&& value) { m_sourceMonitoringConfigHasBeenSet = true; m_sourceMonitoringConfig = std::forward<SourceMonitoringConfigT>(value); }
    template<typename SourceMonitoringConfigT = MonitoringConfig>
    CreateFlowRequest& WithSourceMonitoringConfig(SourceMonitoringConfigT&& value) { SetSourceMonitoringConfig(std::forward<SourceMonitoringConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines the processing capacity and feature set of the flow. Set this
     * optional parameter to <code>LARGE</code> if you want to enable NDI outputs on
     * the flow. </p>
     */
    inline FlowSize GetFlowSize() const { return m_flowSize; }
    inline bool FlowSizeHasBeenSet() const { return m_flowSizeHasBeenSet; }
    inline void SetFlowSize(FlowSize value) { m_flowSizeHasBeenSet = true; m_flowSize = value; }
    inline CreateFlowRequest& WithFlowSize(FlowSize value) { SetFlowSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the configuration settings for NDI outputs. Required when the flow
     * includes NDI outputs. </p>
     */
    inline const NdiConfig& GetNdiConfig() const { return m_ndiConfig; }
    inline bool NdiConfigHasBeenSet() const { return m_ndiConfigHasBeenSet; }
    template<typename NdiConfigT = NdiConfig>
    void SetNdiConfig(NdiConfigT&& value) { m_ndiConfigHasBeenSet = true; m_ndiConfig = std::forward<NdiConfigT>(value); }
    template<typename NdiConfigT = NdiConfig>
    CreateFlowRequest& WithNdiConfig(NdiConfigT&& value) { SetNdiConfig(std::forward<NdiConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::Vector<GrantEntitlementRequest> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    Aws::Vector<AddMediaStreamRequest> m_mediaStreams;
    bool m_mediaStreamsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AddOutputRequest> m_outputs;
    bool m_outputsHasBeenSet = false;

    SetSourceRequest m_source;
    bool m_sourceHasBeenSet = false;

    FailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;

    Aws::Vector<SetSourceRequest> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<VpcInterfaceRequest> m_vpcInterfaces;
    bool m_vpcInterfacesHasBeenSet = false;

    AddMaintenance m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    MonitoringConfig m_sourceMonitoringConfig;
    bool m_sourceMonitoringConfigHasBeenSet = false;

    FlowSize m_flowSize{FlowSize::NOT_SET};
    bool m_flowSizeHasBeenSet = false;

    NdiConfig m_ndiConfig;
    bool m_ndiConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
