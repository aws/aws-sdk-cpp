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
   * The settings for a flow, including its source, outputs, and
   * entitlements.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Flow">AWS
   * API Reference</a></p>
   */
  class Flow
  {
  public:
    AWS_MEDIACONNECT_API Flow();
    AWS_MEDIACONNECT_API Flow(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Flow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline Flow& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline Flow& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * The Availability Zone that you want to create the flow in. These options are
     * limited to the Availability Zones within the current AWS.
     */
    inline Flow& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline Flow& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline Flow& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the flow. This value is not used or seen outside of the current
     * AWS Elemental MediaConnect account.
     */
    inline Flow& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline const Aws::String& GetEgressIp() const{ return m_egressIp; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline bool EgressIpHasBeenSet() const { return m_egressIpHasBeenSet; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetEgressIp(const Aws::String& value) { m_egressIpHasBeenSet = true; m_egressIp = value; }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetEgressIp(Aws::String&& value) { m_egressIpHasBeenSet = true; m_egressIp = std::move(value); }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline void SetEgressIp(const char* value) { m_egressIpHasBeenSet = true; m_egressIp.assign(value); }

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline Flow& WithEgressIp(const Aws::String& value) { SetEgressIp(value); return *this;}

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline Flow& WithEgressIp(Aws::String&& value) { SetEgressIp(std::move(value)); return *this;}

    /**
     * The IP address from which video will be sent to output destinations.
     */
    inline Flow& WithEgressIp(const char* value) { SetEgressIp(value); return *this;}


    /**
     * The entitlements in this flow.
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }

    /**
     * The entitlements in this flow.
     */
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }

    /**
     * The entitlements in this flow.
     */
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }

    /**
     * The entitlements in this flow.
     */
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }

    /**
     * The entitlements in this flow.
     */
    inline Flow& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * The entitlements in this flow.
     */
    inline Flow& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * The entitlements in this flow.
     */
    inline Flow& AddEntitlements(const Entitlement& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * The entitlements in this flow.
     */
    inline Flow& AddEntitlements(Entitlement&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline Flow& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline Flow& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN), a unique identifier for any AWS resource, of the
     * flow.
     */
    inline Flow& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline const Aws::Vector<MediaStream>& GetMediaStreams() const{ return m_mediaStreams; }

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline bool MediaStreamsHasBeenSet() const { return m_mediaStreamsHasBeenSet; }

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline void SetMediaStreams(const Aws::Vector<MediaStream>& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = value; }

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline void SetMediaStreams(Aws::Vector<MediaStream>&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams = std::move(value); }

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline Flow& WithMediaStreams(const Aws::Vector<MediaStream>& value) { SetMediaStreams(value); return *this;}

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline Flow& WithMediaStreams(Aws::Vector<MediaStream>&& value) { SetMediaStreams(std::move(value)); return *this;}

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline Flow& AddMediaStreams(const MediaStream& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.push_back(value); return *this; }

    /**
     * The media streams that are associated with the flow. After you associate a media
     * stream with a source, you can also associate it with outputs on the flow.
     */
    inline Flow& AddMediaStreams(MediaStream&& value) { m_mediaStreamsHasBeenSet = true; m_mediaStreams.push_back(std::move(value)); return *this; }


    /**
     * The name of the flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the flow.
     */
    inline Flow& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the flow.
     */
    inline Flow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the flow.
     */
    inline Flow& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The outputs in this flow.
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * The outputs in this flow.
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * The outputs in this flow.
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * The outputs in this flow.
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * The outputs in this flow.
     */
    inline Flow& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * The outputs in this flow.
     */
    inline Flow& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * The outputs in this flow.
     */
    inline Flow& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * The outputs in this flow.
     */
    inline Flow& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    
    inline const Source& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline Flow& WithSource(const Source& value) { SetSource(value); return *this;}

    
    inline Flow& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    
    inline const FailoverConfig& GetSourceFailoverConfig() const{ return m_sourceFailoverConfig; }

    
    inline bool SourceFailoverConfigHasBeenSet() const { return m_sourceFailoverConfigHasBeenSet; }

    
    inline void SetSourceFailoverConfig(const FailoverConfig& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = value; }

    
    inline void SetSourceFailoverConfig(FailoverConfig&& value) { m_sourceFailoverConfigHasBeenSet = true; m_sourceFailoverConfig = std::move(value); }

    
    inline Flow& WithSourceFailoverConfig(const FailoverConfig& value) { SetSourceFailoverConfig(value); return *this;}

    
    inline Flow& WithSourceFailoverConfig(FailoverConfig&& value) { SetSourceFailoverConfig(std::move(value)); return *this;}


    
    inline const Aws::Vector<Source>& GetSources() const{ return m_sources; }

    
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    
    inline void SetSources(const Aws::Vector<Source>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    
    inline void SetSources(Aws::Vector<Source>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    
    inline Flow& WithSources(const Aws::Vector<Source>& value) { SetSources(value); return *this;}

    
    inline Flow& WithSources(Aws::Vector<Source>&& value) { SetSources(std::move(value)); return *this;}

    
    inline Flow& AddSources(const Source& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    
    inline Flow& AddSources(Source&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * The current status of the flow.
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * The current status of the flow.
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * The current status of the flow.
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The current status of the flow.
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * The current status of the flow.
     */
    inline Flow& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * The current status of the flow.
     */
    inline Flow& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * The VPC Interfaces for this flow.
     */
    inline const Aws::Vector<VpcInterface>& GetVpcInterfaces() const{ return m_vpcInterfaces; }

    /**
     * The VPC Interfaces for this flow.
     */
    inline bool VpcInterfacesHasBeenSet() const { return m_vpcInterfacesHasBeenSet; }

    /**
     * The VPC Interfaces for this flow.
     */
    inline void SetVpcInterfaces(const Aws::Vector<VpcInterface>& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = value; }

    /**
     * The VPC Interfaces for this flow.
     */
    inline void SetVpcInterfaces(Aws::Vector<VpcInterface>&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::move(value); }

    /**
     * The VPC Interfaces for this flow.
     */
    inline Flow& WithVpcInterfaces(const Aws::Vector<VpcInterface>& value) { SetVpcInterfaces(value); return *this;}

    /**
     * The VPC Interfaces for this flow.
     */
    inline Flow& WithVpcInterfaces(Aws::Vector<VpcInterface>&& value) { SetVpcInterfaces(std::move(value)); return *this;}

    /**
     * The VPC Interfaces for this flow.
     */
    inline Flow& AddVpcInterfaces(const VpcInterface& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.push_back(value); return *this; }

    /**
     * The VPC Interfaces for this flow.
     */
    inline Flow& AddVpcInterfaces(VpcInterface&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.push_back(std::move(value)); return *this; }


    
    inline const Maintenance& GetMaintenance() const{ return m_maintenance; }

    
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }

    
    inline void SetMaintenance(const Maintenance& value) { m_maintenanceHasBeenSet = true; m_maintenance = value; }

    
    inline void SetMaintenance(Maintenance&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::move(value); }

    
    inline Flow& WithMaintenance(const Maintenance& value) { SetMaintenance(value); return *this;}

    
    inline Flow& WithMaintenance(Maintenance&& value) { SetMaintenance(std::move(value)); return *this;}

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

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<VpcInterface> m_vpcInterfaces;
    bool m_vpcInterfacesHasBeenSet = false;

    Maintenance m_maintenance;
    bool m_maintenanceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
