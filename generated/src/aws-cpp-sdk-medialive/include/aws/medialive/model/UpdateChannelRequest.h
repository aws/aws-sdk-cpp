/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/CdiInputSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/MaintenanceUpdateSettings.h>
#include <aws/medialive/model/ChannelEngineVersionRequest.h>
#include <aws/medialive/model/AnywhereSettings.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/InputAttachment.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update a channel.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelRequest">AWS
   * API Reference</a></p>
   */
  class UpdateChannelRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

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
    UpdateChannelRequest& WithCdiInputSpecification(CdiInputSpecificationT&& value) { SetCdiInputSpecification(std::forward<CdiInputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * channel ID
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    UpdateChannelRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of output destinations for this channel.
     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<OutputDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<OutputDestination>>
    UpdateChannelRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = OutputDestination>
    UpdateChannelRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The encoder settings for this channel.
     */
    inline const EncoderSettings& GetEncoderSettings() const { return m_encoderSettings; }
    inline bool EncoderSettingsHasBeenSet() const { return m_encoderSettingsHasBeenSet; }
    template<typename EncoderSettingsT = EncoderSettings>
    void SetEncoderSettings(EncoderSettingsT&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::forward<EncoderSettingsT>(value); }
    template<typename EncoderSettingsT = EncoderSettings>
    UpdateChannelRequest& WithEncoderSettings(EncoderSettingsT&& value) { SetEncoderSettings(std::forward<EncoderSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const { return m_inputAttachments; }
    inline bool InputAttachmentsHasBeenSet() const { return m_inputAttachmentsHasBeenSet; }
    template<typename InputAttachmentsT = Aws::Vector<InputAttachment>>
    void SetInputAttachments(InputAttachmentsT&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = std::forward<InputAttachmentsT>(value); }
    template<typename InputAttachmentsT = Aws::Vector<InputAttachment>>
    UpdateChannelRequest& WithInputAttachments(InputAttachmentsT&& value) { SetInputAttachments(std::forward<InputAttachmentsT>(value)); return *this;}
    template<typename InputAttachmentsT = InputAttachment>
    UpdateChannelRequest& AddInputAttachments(InputAttachmentsT&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.emplace_back(std::forward<InputAttachmentsT>(value)); return *this; }
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
    UpdateChannelRequest& WithInputSpecification(InputSpecificationT&& value) { SetInputSpecification(std::forward<InputSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The log level to write to CloudWatch Logs.
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline UpdateChannelRequest& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * Maintenance settings for this channel.
     */
    inline const MaintenanceUpdateSettings& GetMaintenance() const { return m_maintenance; }
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }
    template<typename MaintenanceT = MaintenanceUpdateSettings>
    void SetMaintenance(MaintenanceT&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::forward<MaintenanceT>(value); }
    template<typename MaintenanceT = MaintenanceUpdateSettings>
    UpdateChannelRequest& WithMaintenance(MaintenanceT&& value) { SetMaintenance(std::forward<MaintenanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the channel.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateChannelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateChannelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Channel engine version for this channel
     */
    inline const ChannelEngineVersionRequest& GetChannelEngineVersion() const { return m_channelEngineVersion; }
    inline bool ChannelEngineVersionHasBeenSet() const { return m_channelEngineVersionHasBeenSet; }
    template<typename ChannelEngineVersionT = ChannelEngineVersionRequest>
    void SetChannelEngineVersion(ChannelEngineVersionT&& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = std::forward<ChannelEngineVersionT>(value); }
    template<typename ChannelEngineVersionT = ChannelEngineVersionRequest>
    UpdateChannelRequest& WithChannelEngineVersion(ChannelEngineVersionT&& value) { SetChannelEngineVersion(std::forward<ChannelEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline UpdateChannelRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    UpdateChannelRequest& WithAnywhereSettings(AnywhereSettingsT&& value) { SetAnywhereSettings(std::forward<AnywhereSettingsT>(value)); return *this;}
    ///@}
  private:

    CdiInputSpecification m_cdiInputSpecification;
    bool m_cdiInputSpecificationHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

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

    MaintenanceUpdateSettings m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ChannelEngineVersionRequest m_channelEngineVersion;
    bool m_channelEngineVersionHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    AnywhereSettings m_anywhereSettings;
    bool m_anywhereSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
