/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/EsamManifestConfirmConditionNotification.h>
#include <aws/mediaconvert/model/EsamSignalProcessingNotification.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
   * you can ignore these settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EsamSettings">AWS
   * API Reference</a></p>
   */
  class EsamSettings
  {
  public:
    AWS_MEDIACONVERT_API EsamSettings() = default;
    AWS_MEDIACONVERT_API EsamSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API EsamSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML.
     */
    inline const EsamManifestConfirmConditionNotification& GetManifestConfirmConditionNotification() const { return m_manifestConfirmConditionNotification; }
    inline bool ManifestConfirmConditionNotificationHasBeenSet() const { return m_manifestConfirmConditionNotificationHasBeenSet; }
    template<typename ManifestConfirmConditionNotificationT = EsamManifestConfirmConditionNotification>
    void SetManifestConfirmConditionNotification(ManifestConfirmConditionNotificationT&& value) { m_manifestConfirmConditionNotificationHasBeenSet = true; m_manifestConfirmConditionNotification = std::forward<ManifestConfirmConditionNotificationT>(value); }
    template<typename ManifestConfirmConditionNotificationT = EsamManifestConfirmConditionNotification>
    EsamSettings& WithManifestConfirmConditionNotification(ManifestConfirmConditionNotificationT&& value) { SetManifestConfirmConditionNotification(std::forward<ManifestConfirmConditionNotificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the stream distance, in milliseconds, between the SCTE 35 messages
     * that the transcoder places and the splice points that they refer to. If the time
     * between the start of the asset and the SCTE-35 message is less than this value,
     * then the transcoder places the SCTE-35 marker at the beginning of the stream.
     */
    inline int GetResponseSignalPreroll() const { return m_responseSignalPreroll; }
    inline bool ResponseSignalPrerollHasBeenSet() const { return m_responseSignalPrerollHasBeenSet; }
    inline void SetResponseSignalPreroll(int value) { m_responseSignalPrerollHasBeenSet = true; m_responseSignalPreroll = value; }
    inline EsamSettings& WithResponseSignalPreroll(int value) { SetResponseSignalPreroll(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML.
     */
    inline const EsamSignalProcessingNotification& GetSignalProcessingNotification() const { return m_signalProcessingNotification; }
    inline bool SignalProcessingNotificationHasBeenSet() const { return m_signalProcessingNotificationHasBeenSet; }
    template<typename SignalProcessingNotificationT = EsamSignalProcessingNotification>
    void SetSignalProcessingNotification(SignalProcessingNotificationT&& value) { m_signalProcessingNotificationHasBeenSet = true; m_signalProcessingNotification = std::forward<SignalProcessingNotificationT>(value); }
    template<typename SignalProcessingNotificationT = EsamSignalProcessingNotification>
    EsamSettings& WithSignalProcessingNotification(SignalProcessingNotificationT&& value) { SetSignalProcessingNotification(std::forward<SignalProcessingNotificationT>(value)); return *this;}
    ///@}
  private:

    EsamManifestConfirmConditionNotification m_manifestConfirmConditionNotification;
    bool m_manifestConfirmConditionNotificationHasBeenSet = false;

    int m_responseSignalPreroll{0};
    bool m_responseSignalPrerollHasBeenSet = false;

    EsamSignalProcessingNotification m_signalProcessingNotification;
    bool m_signalProcessingNotificationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
