/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/CdiInputSpecification.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/MaintenanceStatus.h>
#include <aws/medialive/model/ChannelState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/VpcOutputSettingsDescription.h>
#include <aws/medialive/model/DescribeAnywhereSettings.h>
#include <aws/medialive/model/ChannelEngineVersionResponse.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/ChannelEgressEndpoint.h>
#include <aws/medialive/model/InputAttachment.h>
#include <aws/medialive/model/PipelineDetail.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for Channel<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_MEDIALIVE_API Channel();
    AWS_MEDIALIVE_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Specification of CDI inputs for this channel
     */
    inline const CdiInputSpecification& GetCdiInputSpecification() const{ return m_cdiInputSpecification; }
    inline bool CdiInputSpecificationHasBeenSet() const { return m_cdiInputSpecificationHasBeenSet; }
    inline void SetCdiInputSpecification(const CdiInputSpecification& value) { m_cdiInputSpecificationHasBeenSet = true; m_cdiInputSpecification = value; }
    inline void SetCdiInputSpecification(CdiInputSpecification&& value) { m_cdiInputSpecificationHasBeenSet = true; m_cdiInputSpecification = std::move(value); }
    inline Channel& WithCdiInputSpecification(const CdiInputSpecification& value) { SetCdiInputSpecification(value); return *this;}
    inline Channel& WithCdiInputSpecification(CdiInputSpecification&& value) { SetCdiInputSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }
    inline void SetChannelClass(const ChannelClass& value) { m_channelClassHasBeenSet = true; m_channelClass = value; }
    inline void SetChannelClass(ChannelClass&& value) { m_channelClassHasBeenSet = true; m_channelClass = std::move(value); }
    inline Channel& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}
    inline Channel& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.
     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline Channel& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}
    inline Channel& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline Channel& AddDestinations(const OutputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline Channel& AddDestinations(OutputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }
    inline bool EgressEndpointsHasBeenSet() const { return m_egressEndpointsHasBeenSet; }
    inline void SetEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints = value; }
    inline void SetEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints = std::move(value); }
    inline Channel& WithEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}
    inline Channel& WithEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}
    inline Channel& AddEgressEndpoints(const ChannelEgressEndpoint& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.push_back(value); return *this; }
    inline Channel& AddEgressEndpoints(ChannelEgressEndpoint&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }
    inline bool EncoderSettingsHasBeenSet() const { return m_encoderSettingsHasBeenSet; }
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = value; }
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::move(value); }
    inline Channel& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}
    inline Channel& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Channel& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Channel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Channel& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }
    inline bool InputAttachmentsHasBeenSet() const { return m_inputAttachmentsHasBeenSet; }
    inline void SetInputAttachments(const Aws::Vector<InputAttachment>& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = value; }
    inline void SetInputAttachments(Aws::Vector<InputAttachment>&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = std::move(value); }
    inline Channel& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}
    inline Channel& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}
    inline Channel& AddInputAttachments(const InputAttachment& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(value); return *this; }
    inline Channel& AddInputAttachments(InputAttachment&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specification of network and file inputs for this channel
     */
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }
    inline bool InputSpecificationHasBeenSet() const { return m_inputSpecificationHasBeenSet; }
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = value; }
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = std::move(value); }
    inline Channel& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}
    inline Channel& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The log level being written to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline Channel& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline Channel& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Maintenance settings for this channel.
     */
    inline const MaintenanceStatus& GetMaintenance() const{ return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    inline void SetMaintenance(const MaintenanceStatus& value) { m_maintenanceHasBeenSet = true; m_maintenance = value; }
    inline void SetMaintenance(MaintenanceStatus&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::move(value); }
    inline Channel& WithMaintenance(const MaintenanceStatus& value) { SetMaintenance(value); return *this;}
    inline Channel& WithMaintenance(MaintenanceStatus&& value) { SetMaintenance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Channel& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline const Aws::Vector<PipelineDetail>& GetPipelineDetails() const{ return m_pipelineDetails; }
    inline bool PipelineDetailsHasBeenSet() const { return m_pipelineDetailsHasBeenSet; }
    inline void SetPipelineDetails(const Aws::Vector<PipelineDetail>& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails = value; }
    inline void SetPipelineDetails(Aws::Vector<PipelineDetail>&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails = std::move(value); }
    inline Channel& WithPipelineDetails(const Aws::Vector<PipelineDetail>& value) { SetPipelineDetails(value); return *this;}
    inline Channel& WithPipelineDetails(Aws::Vector<PipelineDetail>&& value) { SetPipelineDetails(std::move(value)); return *this;}
    inline Channel& AddPipelineDetails(const PipelineDetail& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails.push_back(value); return *this; }
    inline Channel& AddPipelineDetails(PipelineDetail&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }
    inline bool PipelinesRunningCountHasBeenSet() const { return m_pipelinesRunningCountHasBeenSet; }
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCountHasBeenSet = true; m_pipelinesRunningCount = value; }
    inline Channel& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Channel& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Channel& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Channel& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ChannelState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ChannelState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ChannelState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Channel& WithState(const ChannelState& value) { SetState(value); return *this;}
    inline Channel& WithState(ChannelState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Channel& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Channel& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Channel& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Channel& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Channel& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Channel& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Channel& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Channel& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Channel& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Settings for VPC output
     */
    inline const VpcOutputSettingsDescription& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const VpcOutputSettingsDescription& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(VpcOutputSettingsDescription&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline Channel& WithVpc(const VpcOutputSettingsDescription& value) { SetVpc(value); return *this;}
    inline Channel& WithVpc(VpcOutputSettingsDescription&& value) { SetVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Anywhere settings for this channel.
     */
    inline const DescribeAnywhereSettings& GetAnywhereSettings() const{ return m_anywhereSettings; }
    inline bool AnywhereSettingsHasBeenSet() const { return m_anywhereSettingsHasBeenSet; }
    inline void SetAnywhereSettings(const DescribeAnywhereSettings& value) { m_anywhereSettingsHasBeenSet = true; m_anywhereSettings = value; }
    inline void SetAnywhereSettings(DescribeAnywhereSettings&& value) { m_anywhereSettingsHasBeenSet = true; m_anywhereSettings = std::move(value); }
    inline Channel& WithAnywhereSettings(const DescribeAnywhereSettings& value) { SetAnywhereSettings(value); return *this;}
    inline Channel& WithAnywhereSettings(DescribeAnywhereSettings&& value) { SetAnywhereSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Requested engine version for this channel.
     */
    inline const ChannelEngineVersionResponse& GetChannelEngineVersion() const{ return m_channelEngineVersion; }
    inline bool ChannelEngineVersionHasBeenSet() const { return m_channelEngineVersionHasBeenSet; }
    inline void SetChannelEngineVersion(const ChannelEngineVersionResponse& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = value; }
    inline void SetChannelEngineVersion(ChannelEngineVersionResponse&& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = std::move(value); }
    inline Channel& WithChannelEngineVersion(const ChannelEngineVersionResponse& value) { SetChannelEngineVersion(value); return *this;}
    inline Channel& WithChannelEngineVersion(ChannelEngineVersionResponse&& value) { SetChannelEngineVersion(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CdiInputSpecification m_cdiInputSpecification;
    bool m_cdiInputSpecificationHasBeenSet = false;

    ChannelClass m_channelClass;
    bool m_channelClassHasBeenSet = false;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<ChannelEgressEndpoint> m_egressEndpoints;
    bool m_egressEndpointsHasBeenSet = false;

    EncoderSettings m_encoderSettings;
    bool m_encoderSettingsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<InputAttachment> m_inputAttachments;
    bool m_inputAttachmentsHasBeenSet = false;

    InputSpecification m_inputSpecification;
    bool m_inputSpecificationHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    MaintenanceStatus m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<PipelineDetail> m_pipelineDetails;
    bool m_pipelineDetailsHasBeenSet = false;

    int m_pipelinesRunningCount;
    bool m_pipelinesRunningCountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ChannelState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VpcOutputSettingsDescription m_vpc;
    bool m_vpcHasBeenSet = false;

    DescribeAnywhereSettings m_anywhereSettings;
    bool m_anywhereSettingsHasBeenSet = false;

    ChannelEngineVersionResponse m_channelEngineVersion;
    bool m_channelEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
