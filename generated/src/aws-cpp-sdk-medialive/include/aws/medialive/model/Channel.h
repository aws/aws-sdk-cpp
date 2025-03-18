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
    AWS_MEDIALIVE_API Channel() = default;
    AWS_MEDIALIVE_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Channel& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specification of CDI inputs for this channel
     */
    inline const CdiInputSpecification& GetCdiInputSpecification() const { return m_cdiInputSpecification; }
    inline bool CdiInputSpecificationHasBeenSet() const { return m_cdiInputSpecificationHasBeenSet; }
    template<typename CdiInputSpecificationT = CdiInputSpecification>
    void SetCdiInputSpecification(CdiInputSpecificationT&& value) { m_cdiInputSpecificationHasBeenSet = true; m_cdiInputSpecification = std::forward<CdiInputSpecificationT>(value); }
    template<typename CdiInputSpecificationT = CdiInputSpecification>
    Channel& WithCdiInputSpecification(CdiInputSpecificationT&& value) { SetCdiInputSpecification(std::forward<CdiInputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline ChannelClass GetChannelClass() const { return m_channelClass; }
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }
    inline void SetChannelClass(ChannelClass value) { m_channelClassHasBeenSet = true; m_channelClass = value; }
    inline Channel& WithChannelClass(ChannelClass value) { SetChannelClass(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of destinations of the channel. For UDP outputs, there is one
destination
     * per output. For other types (HLS, for example), there is
one destination per
     * packager.
     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<OutputDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<OutputDestination>>
    Channel& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = OutputDestination>
    Channel& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const { return m_egressEndpoints; }
    inline bool EgressEndpointsHasBeenSet() const { return m_egressEndpointsHasBeenSet; }
    template<typename EgressEndpointsT = Aws::Vector<ChannelEgressEndpoint>>
    void SetEgressEndpoints(EgressEndpointsT&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints = std::forward<EgressEndpointsT>(value); }
    template<typename EgressEndpointsT = Aws::Vector<ChannelEgressEndpoint>>
    Channel& WithEgressEndpoints(EgressEndpointsT&& value) { SetEgressEndpoints(std::forward<EgressEndpointsT>(value)); return *this;}
    template<typename EgressEndpointsT = ChannelEgressEndpoint>
    Channel& AddEgressEndpoints(EgressEndpointsT&& value) { m_egressEndpointsHasBeenSet = true; m_egressEndpoints.emplace_back(std::forward<EgressEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const EncoderSettings& GetEncoderSettings() const { return m_encoderSettings; }
    inline bool EncoderSettingsHasBeenSet() const { return m_encoderSettingsHasBeenSet; }
    template<typename EncoderSettingsT = EncoderSettings>
    void SetEncoderSettings(EncoderSettingsT&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::forward<EncoderSettingsT>(value); }
    template<typename EncoderSettingsT = EncoderSettings>
    Channel& WithEncoderSettings(EncoderSettingsT&& value) { SetEncoderSettings(std::forward<EncoderSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Channel& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const { return m_inputAttachments; }
    inline bool InputAttachmentsHasBeenSet() const { return m_inputAttachmentsHasBeenSet; }
    template<typename InputAttachmentsT = Aws::Vector<InputAttachment>>
    void SetInputAttachments(InputAttachmentsT&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = std::forward<InputAttachmentsT>(value); }
    template<typename InputAttachmentsT = Aws::Vector<InputAttachment>>
    Channel& WithInputAttachments(InputAttachmentsT&& value) { SetInputAttachments(std::forward<InputAttachmentsT>(value)); return *this;}
    template<typename InputAttachmentsT = InputAttachment>
    Channel& AddInputAttachments(InputAttachmentsT&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.emplace_back(std::forward<InputAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specification of network and file inputs for this channel
     */
    inline const InputSpecification& GetInputSpecification() const { return m_inputSpecification; }
    inline bool InputSpecificationHasBeenSet() const { return m_inputSpecificationHasBeenSet; }
    template<typename InputSpecificationT = InputSpecification>
    void SetInputSpecification(InputSpecificationT&& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = std::forward<InputSpecificationT>(value); }
    template<typename InputSpecificationT = InputSpecification>
    Channel& WithInputSpecification(InputSpecificationT&& value) { SetInputSpecification(std::forward<InputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The log level being written to CloudWatch Logs.
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline Channel& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Maintenance settings for this channel.
     */
    inline const MaintenanceStatus& GetMaintenance() const { return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    template<typename MaintenanceT = MaintenanceStatus>
    void SetMaintenance(MaintenanceT&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::forward<MaintenanceT>(value); }
    template<typename MaintenanceT = MaintenanceStatus>
    Channel& WithMaintenance(MaintenanceT&& value) { SetMaintenance(std::forward<MaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Channel& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline const Aws::Vector<PipelineDetail>& GetPipelineDetails() const { return m_pipelineDetails; }
    inline bool PipelineDetailsHasBeenSet() const { return m_pipelineDetailsHasBeenSet; }
    template<typename PipelineDetailsT = Aws::Vector<PipelineDetail>>
    void SetPipelineDetails(PipelineDetailsT&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails = std::forward<PipelineDetailsT>(value); }
    template<typename PipelineDetailsT = Aws::Vector<PipelineDetail>>
    Channel& WithPipelineDetails(PipelineDetailsT&& value) { SetPipelineDetails(std::forward<PipelineDetailsT>(value)); return *this;}
    template<typename PipelineDetailsT = PipelineDetail>
    Channel& AddPipelineDetails(PipelineDetailsT&& value) { m_pipelineDetailsHasBeenSet = true; m_pipelineDetails.emplace_back(std::forward<PipelineDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const { return m_pipelinesRunningCount; }
    inline bool PipelinesRunningCountHasBeenSet() const { return m_pipelinesRunningCountHasBeenSet; }
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCountHasBeenSet = true; m_pipelinesRunningCount = value; }
    inline Channel& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    Channel& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ChannelState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ChannelState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Channel& WithState(ChannelState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Channel& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Channel& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Settings for VPC output
     */
    inline const VpcOutputSettingsDescription& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = VpcOutputSettingsDescription>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = VpcOutputSettingsDescription>
    Channel& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Anywhere settings for this channel.
     */
    inline const DescribeAnywhereSettings& GetAnywhereSettings() const { return m_anywhereSettings; }
    inline bool AnywhereSettingsHasBeenSet() const { return m_anywhereSettingsHasBeenSet; }
    template<typename AnywhereSettingsT = DescribeAnywhereSettings>
    void SetAnywhereSettings(AnywhereSettingsT&& value) { m_anywhereSettingsHasBeenSet = true; m_anywhereSettings = std::forward<AnywhereSettingsT>(value); }
    template<typename AnywhereSettingsT = DescribeAnywhereSettings>
    Channel& WithAnywhereSettings(AnywhereSettingsT&& value) { SetAnywhereSettings(std::forward<AnywhereSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Requested engine version for this channel.
     */
    inline const ChannelEngineVersionResponse& GetChannelEngineVersion() const { return m_channelEngineVersion; }
    inline bool ChannelEngineVersionHasBeenSet() const { return m_channelEngineVersionHasBeenSet; }
    template<typename ChannelEngineVersionT = ChannelEngineVersionResponse>
    void SetChannelEngineVersion(ChannelEngineVersionT&& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = std::forward<ChannelEngineVersionT>(value); }
    template<typename ChannelEngineVersionT = ChannelEngineVersionResponse>
    Channel& WithChannelEngineVersion(ChannelEngineVersionT&& value) { SetChannelEngineVersion(std::forward<ChannelEngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    CdiInputSpecification m_cdiInputSpecification;
    bool m_cdiInputSpecificationHasBeenSet = false;

    ChannelClass m_channelClass{ChannelClass::NOT_SET};
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

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    MaintenanceStatus m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<PipelineDetail> m_pipelineDetails;
    bool m_pipelineDetailsHasBeenSet = false;

    int m_pipelinesRunningCount{0};
    bool m_pipelinesRunningCountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ChannelState m_state{ChannelState::NOT_SET};
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
