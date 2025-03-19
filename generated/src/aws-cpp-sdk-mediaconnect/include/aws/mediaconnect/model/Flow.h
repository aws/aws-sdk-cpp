/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Source.h>
#include <aws/mediaconnect/model/FailoverConfig.h>
#include <aws/mediaconnect/model/Status.h>
#include <aws/mediaconnect/model/Maintenance.h>
#include <aws/mediaconnect/model/MonitoringConfig.h>
#include <aws/mediaconnect/model/FlowSize.h>
#include <aws/mediaconnect/model/NdiConfig.h>
#include <aws/mediaconnect/model/Entitlement.h>
#include <aws/mediaconnect/model/MediaStream.h>
#include <aws/mediaconnect/model/Output.h>
#include <aws/mediaconnect/model/VpcInterface.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The settings for a flow, including its source, outputs, and
   * entitlements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Flow">AWS
   * API Reference</a></p>
   */
  class Flow
  {
  public:
    AWS_MEDIACONNECT_API Flow() = default;
    AWS_MEDIACONNECT_API Flow(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Flow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    Flow& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the flow. This value is not used or seen outside of the
     * current MediaConnect account.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Flow& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address from which video will be sent to output destinations.</p>
     */
    inline const Aws::String& GetEgressIp() const { return m_egressIp; }
    inline bool EgressIpHasBeenSet() const { return m_egressIpHasBeenSet; }
    template<typename EgressIpT = Aws::String>
    void SetEgressIp(EgressIpT&& value) { m_egressIpHasBeenSet = true; m_egressIp = std::forward<EgressIpT>(value); }
    template<typename EgressIpT = Aws::String>
    Flow& WithEgressIp(EgressIpT&& value) { SetEgressIp(std::forward<EgressIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The entitlements in this flow.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const { return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    template<typename EntitlementsT = Aws::Vector<Entitlement>>
    void SetEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::forward<EntitlementsT>(value); }
    template<typename EntitlementsT = Aws::Vector<Entitlement>>
    Flow& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = Entitlement>
    Flow& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    Flow& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The media streams that are associated with the flow. After you associate a
     * media stream with a source, you can also associate it with outputs on the
     * flow.</p>
     */
    inline const Aws::Vector<MediaStream>& GetMediaStreams() const { return m_mediaStreams; }
    inline bool MediaStreamsHasBeenSet() const { return m_mediaStreamsHasBeenSet; }
    template<typename MediaStreamsT = Aws::Vector<MediaStream>>
    void SetMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::forward<MediaStreamsT>(value); }
    template<typename MediaStreamsT = Aws::Vector<MediaStream>>
    Flow& WithMediaStreams(MediaStreamsT&& value) { SetMediaStreams(std::forward<MediaStreamsT>(value)); return *this;}
    template<typename MediaStreamsT = MediaStream>
    Flow& AddMediaStreams(MediaStreamsT&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.emplace_back(std::forward<MediaStreamsT>(value)); return *this; }
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
    Flow& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The outputs in this flow.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    Flow& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    Flow& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The source for the flow. </p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    Flow& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for the source failover. </p>
     */
    inline const FailoverConfig& GetSourceFailoverConfig() const { return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    template<typename SourceFailoverConfigT = FailoverConfig>
    void SetSourceFailoverConfig(SourceFailoverConfigT&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::forward<SourceFailoverConfigT>(value); }
    template<typename SourceFailoverConfigT = FailoverConfig>
    Flow& WithSourceFailoverConfig(SourceFailoverConfigT&& value) { SetSourceFailoverConfig(std::forward<SourceFailoverConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the sources that are assigned to the flow. </p>
     */
    inline const Aws::Vector<Source>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<Source>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<Source>>
    Flow& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = Source>
    Flow& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The current status of the flow.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline Flow& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC Interfaces for this flow.</p>
     */
    inline const Aws::Vector<VpcInterface>& GetVpcInterfaces() const { return m_vpcInterfaces; }
    inline bool VpcInterfacesHasBeenSet() const { return m_vpcInterfacesHasBeenSet; }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterface>>
    void SetVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::forward<VpcInterfacesT>(value); }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterface>>
    Flow& WithVpcInterfaces(VpcInterfacesT&& value) { SetVpcInterfaces(std::forward<VpcInterfacesT>(value)); return *this;}
    template<typename VpcInterfacesT = VpcInterface>
    Flow& AddVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.emplace_back(std::forward<VpcInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maintenance settings for the flow. </p>
     */
    inline const Maintenance& GetMaintenance() const { return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    template<typename MaintenanceT = Maintenance>
    void SetMaintenance(MaintenanceT&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::forward<MaintenanceT>(value); }
    template<typename MaintenanceT = Maintenance>
    Flow& WithMaintenance(MaintenanceT&& value) { SetMaintenance(std::forward<MaintenanceT>(value)); return *this;}
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
    Flow& WithSourceMonitoringConfig(SourceMonitoringConfigT&& value) { SetSourceMonitoringConfig(std::forward<SourceMonitoringConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines the processing capacity and feature set of the flow. Set this
     * optional parameter to LARGE if you want to enable NDI outputs on the flow. </p>
     */
    inline FlowSize GetFlowSize() const { return m_flowSize; }
    inline bool FlowSizeHasBeenSet() const { return m_flowSizeHasBeenSet; }
    inline void SetFlowSize(FlowSize value) { m_flowSizeHasBeenSet = true; m_flowSize = value; }
    inline Flow& WithFlowSize(FlowSize value) { SetFlowSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration settings for NDI outputs. Required when the flow
     * includes NDI outputs. </p>
     */
    inline const NdiConfig& GetNdiConfig() const { return m_ndiConfig; }
    inline bool NdiConfigHasBeenSet() const { return m_ndiConfigHasBeenSet; }
    template<typename NdiConfigT = NdiConfig>
    void SetNdiConfig(NdiConfigT&& value) { m_ndiConfigHasBeenSet = true; m_ndiConfig = std::forward<NdiConfigT>(value); }
    template<typename NdiConfigT = NdiConfig>
    Flow& WithNdiConfig(NdiConfigT&& value) { SetNdiConfig(std::forward<NdiConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_egressIp;
    bool m_egressIpHasBeenSet = false;

    Aws::Vector<Entitlement> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<MediaStream> m_mediaStreams;
    bool m_mediaStreamsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    FailoverConfig m_sourceFailoverConfig;
    bool m_sourceFailoverConfigHasBeenSet = false;

    Aws::Vector<Source> m_sources;
    bool m_sourcesHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<VpcInterface> m_vpcInterfaces;
    bool m_vpcInterfacesHasBeenSet = false;

    Maintenance m_maintenance;
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
