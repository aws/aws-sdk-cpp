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
   * Creates a new flow. The request must include one source. The request optionally
   * can include outputs (up to 50) and entitlements (up to 50).<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/CreateFlowRequest">AWS
   * API Reference</a></p>
   */
  class CreateFlowRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API CreateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlow"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS Region.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateFlowRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateFlowRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateFlowRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * The entitlements that you want to grant on a flow.
     */
    inline const Aws::Vector<GrantEntitlementRequest>& GetEntitlements() const{ return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    inline void SetEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }
    inline void SetEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }
    inline CreateFlowRequest& WithEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { SetEntitlements(value); return *this;}
    inline CreateFlowRequest& WithEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { SetEntitlements(std::move(value)); return *this;}
    inline CreateFlowRequest& AddEntitlements(const GrantEntitlementRequest& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }
    inline CreateFlowRequest& AddEntitlements(GrantEntitlementRequest&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The media streams that you want to add to the flow. You can associate these
     * media streams with sources and outputs on the flow.
     */
    inline const Aws::Vector<AddMediaStreamRequest>& GetMediaStreams() const{ return m_mediaStreams; }
    inline bool MediaStreamsHasBeenSet() const { return m_mediaStreamsHasBeenSet; }
    inline void SetMediaStreams(const Aws::Vector<AddMediaStreamRequest>& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = value; }
    inline void SetMediaStreams(Aws::Vector<AddMediaStreamRequest>&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::move(value); }
    inline CreateFlowRequest& WithMediaStreams(const Aws::Vector<AddMediaStreamRequest>& value) { SetMediaStreams(value); return *this;}
    inline CreateFlowRequest& WithMediaStreams(Aws::Vector<AddMediaStreamRequest>&& value) { SetMediaStreams(std::move(value)); return *this;}
    inline CreateFlowRequest& AddMediaStreams(const AddMediaStreamRequest& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.push_back(value); return *this; }
    inline CreateFlowRequest& AddMediaStreams(AddMediaStreamRequest&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFlowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The outputs that you want to add to this flow.
     */
    inline const Aws::Vector<AddOutputRequest>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<AddOutputRequest>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<AddOutputRequest>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline CreateFlowRequest& WithOutputs(const Aws::Vector<AddOutputRequest>& value) { SetOutputs(value); return *this;}
    inline CreateFlowRequest& WithOutputs(Aws::Vector<AddOutputRequest>&& value) { SetOutputs(std::move(value)); return *this;}
    inline CreateFlowRequest& AddOutputs(const AddOutputRequest& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline CreateFlowRequest& AddOutputs(AddOutputRequest&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const SetSourceRequest& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const SetSourceRequest& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(SetSourceRequest&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CreateFlowRequest& WithSource(const SetSourceRequest& value) { SetSource(value); return *this;}
    inline CreateFlowRequest& WithSource(SetSourceRequest&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FailoverConfig& GetSourceFailoverConfig() const{ return m_sourceFailoverConfig; }
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }
    inline void SetSourceFailoverConfig(const FailoverConfig& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = value; }
    inline void SetSourceFailoverConfig(FailoverConfig&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::move(value); }
    inline CreateFlowRequest& WithSourceFailoverConfig(const FailoverConfig& value) { SetSourceFailoverConfig(value); return *this;}
    inline CreateFlowRequest& WithSourceFailoverConfig(FailoverConfig&& value) { SetSourceFailoverConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<SetSourceRequest>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<SetSourceRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<SetSourceRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline CreateFlowRequest& WithSources(const Aws::Vector<SetSourceRequest>& value) { SetSources(value); return *this;}
    inline CreateFlowRequest& WithSources(Aws::Vector<SetSourceRequest>&& value) { SetSources(std::move(value)); return *this;}
    inline CreateFlowRequest& AddSources(const SetSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline CreateFlowRequest& AddSources(SetSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The VPC interfaces you want on the flow.
     */
    inline const Aws::Vector<VpcInterfaceRequest>& GetVpcInterfaces() const{ return m_vpcInterfaces; }
    inline bool VpcInterfacesHasBeenSet() const { return m_vpcInterfacesHasBeenSet; }
    inline void SetVpcInterfaces(const Aws::Vector<VpcInterfaceRequest>& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = value; }
    inline void SetVpcInterfaces(Aws::Vector<VpcInterfaceRequest>&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::move(value); }
    inline CreateFlowRequest& WithVpcInterfaces(const Aws::Vector<VpcInterfaceRequest>& value) { SetVpcInterfaces(value); return *this;}
    inline CreateFlowRequest& WithVpcInterfaces(Aws::Vector<VpcInterfaceRequest>&& value) { SetVpcInterfaces(std::move(value)); return *this;}
    inline CreateFlowRequest& AddVpcInterfaces(const VpcInterfaceRequest& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.push_back(value); return *this; }
    inline CreateFlowRequest& AddVpcInterfaces(VpcInterfaceRequest&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const AddMaintenance& GetMaintenance() const{ return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    inline void SetMaintenance(const AddMaintenance& value) { m_maintenanceHasBeenSet = true; m_maintenance = value; }
    inline void SetMaintenance(AddMaintenance&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::move(value); }
    inline CreateFlowRequest& WithMaintenance(const AddMaintenance& value) { SetMaintenance(value); return *this;}
    inline CreateFlowRequest& WithMaintenance(AddMaintenance&& value) { SetMaintenance(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringConfig& GetSourceMonitoringConfig() const{ return m_sourceMonitoringConfig; }
    inline bool SourceMonitoringConfigHasBeenSet() const { return m_sourceMonitoringConfigHasBeenSet; }
    inline void SetSourceMonitoringConfig(const MonitoringConfig& value) { m_sourceMonitoringConfigHasBeenSet = true; m_sourceMonitoringConfig = value; }
    inline void SetSourceMonitoringConfig(MonitoringConfig&& value) { m_sourceMonitoringConfigHasBeenSet = true; m_sourceMonitoringConfig = std::move(value); }
    inline CreateFlowRequest& WithSourceMonitoringConfig(const MonitoringConfig& value) { SetSourceMonitoringConfig(value); return *this;}
    inline CreateFlowRequest& WithSourceMonitoringConfig(MonitoringConfig&& value) { SetSourceMonitoringConfig(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
