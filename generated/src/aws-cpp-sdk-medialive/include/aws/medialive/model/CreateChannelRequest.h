/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/CdiInputSpecification.h>
#include <aws/medialive/model/ChannelClass.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/MaintenanceCreateSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/VpcOutputSettings.h>
#include <aws/medialive/model/AnywhereSettings.h>
#include <aws/medialive/model/ChannelEngineVersionRequest.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/InputAttachment.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to create a channel<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateChannelRequest">AWS
   * API Reference</a></p>
   */
  class CreateChannelRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Specification of CDI inputs for this channel
     */
    inline const CdiInputSpecification& GetCdiInputSpecification() const { return m_cdiInputSpecification; }
    inline bool CdiInputSpecificationHasBeenSet() const { return m_cdiInputSpecificationHasBeenSet; }
    template<typename CdiInputSpecificationT = CdiInputSpecification>
    void SetCdiInputSpecification(CdiInputSpecificationT&& value) { m_cdiInputSpecificationHasBeenSet = true; m_cdiInputSpecification = std::forward<CdiInputSpecificationT>(value); }
    template<typename CdiInputSpecificationT = CdiInputSpecification>
    CreateChannelRequest& WithCdiInputSpecification(CdiInputSpecificationT&& value) { SetCdiInputSpecification(std::forward<CdiInputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The class for this channel. STANDARD for a channel with two pipelines or
     * SINGLE_PIPELINE for a channel with one pipeline.
     */
    inline ChannelClass GetChannelClass() const { return m_channelClass; }
    inline bool ChannelClassHasBeenSet() const { return m_channelClassHasBeenSet; }
    inline void SetChannelClass(ChannelClass value) { m_channelClassHasBeenSet = true; m_channelClass = value; }
    inline CreateChannelRequest& WithChannelClass(ChannelClass value) { SetChannelClass(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<OutputDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<OutputDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<OutputDestination>>
    CreateChannelRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = OutputDestination>
    CreateChannelRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const EncoderSettings& GetEncoderSettings() const { return m_encoderSettings; }
    inline bool EncoderSettingsHasBeenSet() const { return m_encoderSettingsHasBeenSet; }
    template<typename EncoderSettingsT = EncoderSettings>
    void SetEncoderSettings(EncoderSettingsT&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::forward<EncoderSettingsT>(value); }
    template<typename EncoderSettingsT = EncoderSettings>
    CreateChannelRequest& WithEncoderSettings(EncoderSettingsT&& value) { SetEncoderSettings(std::forward<EncoderSettingsT>(value)); return *this;}
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
    CreateChannelRequest& WithInputAttachments(InputAttachmentsT&& value) { SetInputAttachments(std::forward<InputAttachmentsT>(value)); return *this;}
    template<typename InputAttachmentsT = InputAttachment>
    CreateChannelRequest& AddInputAttachments(InputAttachmentsT&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.emplace_back(std::forward<InputAttachmentsT>(value)); return *this; }
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
    CreateChannelRequest& WithInputSpecification(InputSpecificationT&& value) { SetInputSpecification(std::forward<InputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The log level to write to CloudWatch Logs.
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline CreateChannelRequest& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Maintenance settings for this channel.
     */
    inline const MaintenanceCreateSettings& GetMaintenance() const { return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    template<typename MaintenanceT = MaintenanceCreateSettings>
    void SetMaintenance(MaintenanceT&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::forward<MaintenanceT>(value); }
    template<typename MaintenanceT = MaintenanceCreateSettings>
    CreateChannelRequest& WithMaintenance(MaintenanceT&& value) { SetMaintenance(std::forward<MaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Name of channel.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateChannelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Unique request ID to be specified. This is needed to prevent retries
     * from
creating multiple resources.
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateChannelRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateChannelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    CreateChannelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateChannelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Settings for the VPC outputs
     */
    inline const VpcOutputSettings& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = VpcOutputSettings>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = VpcOutputSettings>
    CreateChannelRequest& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Elemental Anywhere settings for this channel.
     */
    inline const AnywhereSettings& GetAnywhereSettings() const { return m_anywhereSettings; }
    inline bool AnywhereSettingsHasBeenSet() const { return m_anywhereSettingsHasBeenSet; }
    template<typename AnywhereSettingsT = AnywhereSettings>
    void SetAnywhereSettings(AnywhereSettingsT&& value) { m_anywhereSettingsHasBeenSet = true; m_anywhereSettings = std::forward<AnywhereSettingsT>(value); }
    template<typename AnywhereSettingsT = AnywhereSettings>
    CreateChannelRequest& WithAnywhereSettings(AnywhereSettingsT&& value) { SetAnywhereSettings(std::forward<AnywhereSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The desired engine version for this channel.
     */
    inline const ChannelEngineVersionRequest& GetChannelEngineVersion() const { return m_channelEngineVersion; }
    inline bool ChannelEngineVersionHasBeenSet() const { return m_channelEngineVersionHasBeenSet; }
    template<typename ChannelEngineVersionT = ChannelEngineVersionRequest>
    void SetChannelEngineVersion(ChannelEngineVersionT&& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = std::forward<ChannelEngineVersionT>(value); }
    template<typename ChannelEngineVersionT = ChannelEngineVersionRequest>
    CreateChannelRequest& WithChannelEngineVersion(ChannelEngineVersionT&& value) { SetChannelEngineVersion(std::forward<ChannelEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateChannelRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    CdiInputSpecification m_cdiInputSpecification;
    bool m_cdiInputSpecificationHasBeenSet = false;

    ChannelClass m_channelClass{ChannelClass::NOT_SET};
    bool m_channelClassHasBeenSet = false;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    EncoderSettings m_encoderSettings;
    bool m_encoderSettingsHasBeenSet = false;

    Aws::Vector<InputAttachment> m_inputAttachments;
    bool m_inputAttachmentsHasBeenSet = false;

    InputSpecification m_inputSpecification;
    bool m_inputSpecificationHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    MaintenanceCreateSettings m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_requestIdHasBeenSet = true;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VpcOutputSettings m_vpc;
    bool m_vpcHasBeenSet = false;

    AnywhereSettings m_anywhereSettings;
    bool m_anywhereSettingsHasBeenSet = false;

    ChannelEngineVersionRequest m_channelEngineVersion;
    bool m_channelEngineVersionHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
