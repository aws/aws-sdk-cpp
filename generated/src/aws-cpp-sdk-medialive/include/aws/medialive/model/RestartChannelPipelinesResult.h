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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for RestartChannelPipelinesResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RestartChannelPipelinesResponse">AWS
   * API Reference</a></p>
   */
  class RestartChannelPipelinesResult
  {
  public:
    AWS_MEDIALIVE_API RestartChannelPipelinesResult();
    AWS_MEDIALIVE_API RestartChannelPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API RestartChannelPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The unique arn of the channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline RestartChannelPipelinesResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RestartChannelPipelinesResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Specification of CDI inputs for this channel
     */
    inline const CdiInputSpecification& GetCdiInputSpecification() const{ return m_cdiInputSpecification; }
    inline void SetCdiInputSpecification(const CdiInputSpecification& value) { m_cdiInputSpecification = value; }
    inline void SetCdiInputSpecification(CdiInputSpecification&& value) { m_cdiInputSpecification = std::move(value); }
    inline RestartChannelPipelinesResult& WithCdiInputSpecification(const CdiInputSpecification& value) { SetCdiInputSpecification(value); return *this;}
    inline RestartChannelPipelinesResult& WithCdiInputSpecification(CdiInputSpecification&& value) { SetCdiInputSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline const ChannelClass& GetChannelClass() const{ return m_channelClass; }
    inline void SetChannelClass(const ChannelClass& value) { m_channelClass = value; }
    inline void SetChannelClass(ChannelClass&& value) { m_channelClass = std::move(value); }
    inline RestartChannelPipelinesResult& WithChannelClass(const ChannelClass& value) { SetChannelClass(value); return *this;}
    inline RestartChannelPipelinesResult& WithChannelClass(ChannelClass&& value) { SetChannelClass(std::move(value)); return *this;}
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
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinations = value; }
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinations = std::move(value); }
    inline RestartChannelPipelinesResult& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}
    inline RestartChannelPipelinesResult& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& AddDestinations(const OutputDestination& value) { m_destinations.push_back(value); return *this; }
    inline RestartChannelPipelinesResult& AddDestinations(OutputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The endpoints where outgoing connections initiate from
     */
    inline const Aws::Vector<ChannelEgressEndpoint>& GetEgressEndpoints() const{ return m_egressEndpoints; }
    inline void SetEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { m_egressEndpoints = value; }
    inline void SetEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { m_egressEndpoints = std::move(value); }
    inline RestartChannelPipelinesResult& WithEgressEndpoints(const Aws::Vector<ChannelEgressEndpoint>& value) { SetEgressEndpoints(value); return *this;}
    inline RestartChannelPipelinesResult& WithEgressEndpoints(Aws::Vector<ChannelEgressEndpoint>&& value) { SetEgressEndpoints(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& AddEgressEndpoints(const ChannelEgressEndpoint& value) { m_egressEndpoints.push_back(value); return *this; }
    inline RestartChannelPipelinesResult& AddEgressEndpoints(ChannelEgressEndpoint&& value) { m_egressEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettings = value; }
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettings = std::move(value); }
    inline RestartChannelPipelinesResult& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}
    inline RestartChannelPipelinesResult& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The unique id of the channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline RestartChannelPipelinesResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RestartChannelPipelinesResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * List of input attachments for channel.
     */
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }
    inline void SetInputAttachments(const Aws::Vector<InputAttachment>& value) { m_inputAttachments = value; }
    inline void SetInputAttachments(Aws::Vector<InputAttachment>&& value) { m_inputAttachments = std::move(value); }
    inline RestartChannelPipelinesResult& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}
    inline RestartChannelPipelinesResult& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& AddInputAttachments(const InputAttachment& value) { m_inputAttachments.push_back(value); return *this; }
    inline RestartChannelPipelinesResult& AddInputAttachments(InputAttachment&& value) { m_inputAttachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specification of network and file inputs for this channel
     */
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecification = value; }
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecification = std::move(value); }
    inline RestartChannelPipelinesResult& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}
    inline RestartChannelPipelinesResult& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The log level being written to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevel = std::move(value); }
    inline RestartChannelPipelinesResult& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline RestartChannelPipelinesResult& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Maintenance settings for this channel.
     */
    inline const MaintenanceStatus& GetMaintenance() const{ return m_maintenance; }
    inline void SetMaintenance(const MaintenanceStatus& value) { m_maintenance = value; }
    inline void SetMaintenance(MaintenanceStatus&& value) { m_maintenance = std::move(value); }
    inline RestartChannelPipelinesResult& WithMaintenance(const MaintenanceStatus& value) { SetMaintenance(value); return *this;}
    inline RestartChannelPipelinesResult& WithMaintenance(MaintenanceStatus&& value) { SetMaintenance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time in milliseconds by when the PVRE restart must occur.
     */
    inline const Aws::String& GetMaintenanceStatus() const{ return m_maintenanceStatus; }
    inline void SetMaintenanceStatus(const Aws::String& value) { m_maintenanceStatus = value; }
    inline void SetMaintenanceStatus(Aws::String&& value) { m_maintenanceStatus = std::move(value); }
    inline void SetMaintenanceStatus(const char* value) { m_maintenanceStatus.assign(value); }
    inline RestartChannelPipelinesResult& WithMaintenanceStatus(const Aws::String& value) { SetMaintenanceStatus(value); return *this;}
    inline RestartChannelPipelinesResult& WithMaintenanceStatus(Aws::String&& value) { SetMaintenanceStatus(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& WithMaintenanceStatus(const char* value) { SetMaintenanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the channel. (user-mutable)
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline RestartChannelPipelinesResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RestartChannelPipelinesResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Runtime details for the pipelines of a running channel.
     */
    inline const Aws::Vector<PipelineDetail>& GetPipelineDetails() const{ return m_pipelineDetails; }
    inline void SetPipelineDetails(const Aws::Vector<PipelineDetail>& value) { m_pipelineDetails = value; }
    inline void SetPipelineDetails(Aws::Vector<PipelineDetail>&& value) { m_pipelineDetails = std::move(value); }
    inline RestartChannelPipelinesResult& WithPipelineDetails(const Aws::Vector<PipelineDetail>& value) { SetPipelineDetails(value); return *this;}
    inline RestartChannelPipelinesResult& WithPipelineDetails(Aws::Vector<PipelineDetail>&& value) { SetPipelineDetails(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& AddPipelineDetails(const PipelineDetail& value) { m_pipelineDetails.push_back(value); return *this; }
    inline RestartChannelPipelinesResult& AddPipelineDetails(PipelineDetail&& value) { m_pipelineDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCount = value; }
    inline RestartChannelPipelinesResult& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role assumed when running the Channel.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline RestartChannelPipelinesResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RestartChannelPipelinesResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ChannelState& GetState() const{ return m_state; }
    inline void SetState(const ChannelState& value) { m_state = value; }
    inline void SetState(ChannelState&& value) { m_state = std::move(value); }
    inline RestartChannelPipelinesResult& WithState(const ChannelState& value) { SetState(value); return *this;}
    inline RestartChannelPipelinesResult& WithState(ChannelState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline RestartChannelPipelinesResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RestartChannelPipelinesResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline RestartChannelPipelinesResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline RestartChannelPipelinesResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline RestartChannelPipelinesResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RestartChannelPipelinesResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline RestartChannelPipelinesResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline RestartChannelPipelinesResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Settings for VPC output
     */
    inline const VpcOutputSettingsDescription& GetVpc() const{ return m_vpc; }
    inline void SetVpc(const VpcOutputSettingsDescription& value) { m_vpc = value; }
    inline void SetVpc(VpcOutputSettingsDescription&& value) { m_vpc = std::move(value); }
    inline RestartChannelPipelinesResult& WithVpc(const VpcOutputSettingsDescription& value) { SetVpc(value); return *this;}
    inline RestartChannelPipelinesResult& WithVpc(VpcOutputSettingsDescription&& value) { SetVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Anywhere settings for this channel.
     */
    inline const DescribeAnywhereSettings& GetAnywhereSettings() const{ return m_anywhereSettings; }
    inline void SetAnywhereSettings(const DescribeAnywhereSettings& value) { m_anywhereSettings = value; }
    inline void SetAnywhereSettings(DescribeAnywhereSettings&& value) { m_anywhereSettings = std::move(value); }
    inline RestartChannelPipelinesResult& WithAnywhereSettings(const DescribeAnywhereSettings& value) { SetAnywhereSettings(value); return *this;}
    inline RestartChannelPipelinesResult& WithAnywhereSettings(DescribeAnywhereSettings&& value) { SetAnywhereSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Requested engine version for this channel.
     */
    inline const ChannelEngineVersionResponse& GetChannelEngineVersion() const{ return m_channelEngineVersion; }
    inline void SetChannelEngineVersion(const ChannelEngineVersionResponse& value) { m_channelEngineVersion = value; }
    inline void SetChannelEngineVersion(ChannelEngineVersionResponse&& value) { m_channelEngineVersion = std::move(value); }
    inline RestartChannelPipelinesResult& WithChannelEngineVersion(const ChannelEngineVersionResponse& value) { SetChannelEngineVersion(value); return *this;}
    inline RestartChannelPipelinesResult& WithChannelEngineVersion(ChannelEngineVersionResponse&& value) { SetChannelEngineVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RestartChannelPipelinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestartChannelPipelinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestartChannelPipelinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    CdiInputSpecification m_cdiInputSpecification;

    ChannelClass m_channelClass;

    Aws::Vector<OutputDestination> m_destinations;

    Aws::Vector<ChannelEgressEndpoint> m_egressEndpoints;

    EncoderSettings m_encoderSettings;

    Aws::String m_id;

    Aws::Vector<InputAttachment> m_inputAttachments;

    InputSpecification m_inputSpecification;

    LogLevel m_logLevel;

    MaintenanceStatus m_maintenance;

    Aws::String m_maintenanceStatus;

    Aws::String m_name;

    Aws::Vector<PipelineDetail> m_pipelineDetails;

    int m_pipelinesRunningCount;

    Aws::String m_roleArn;

    ChannelState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    VpcOutputSettingsDescription m_vpc;

    DescribeAnywhereSettings m_anywhereSettings;

    ChannelEngineVersionResponse m_channelEngineVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
