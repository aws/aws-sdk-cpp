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
    AWS_MEDIACONVERT_API EsamSettings();
    AWS_MEDIACONVERT_API EsamSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API EsamSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML (mccXml).
     */
    inline const EsamManifestConfirmConditionNotification& GetManifestConfirmConditionNotification() const{ return m_manifestConfirmConditionNotification; }

    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML (mccXml).
     */
    inline bool ManifestConfirmConditionNotificationHasBeenSet() const { return m_manifestConfirmConditionNotificationHasBeenSet; }

    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML (mccXml).
     */
    inline void SetManifestConfirmConditionNotification(const EsamManifestConfirmConditionNotification& value) { m_manifestConfirmConditionNotificationHasBeenSet = true; m_manifestConfirmConditionNotification = value; }

    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML (mccXml).
     */
    inline void SetManifestConfirmConditionNotification(EsamManifestConfirmConditionNotification&& value) { m_manifestConfirmConditionNotificationHasBeenSet = true; m_manifestConfirmConditionNotification = std::move(value); }

    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML (mccXml).
     */
    inline EsamSettings& WithManifestConfirmConditionNotification(const EsamManifestConfirmConditionNotification& value) { SetManifestConfirmConditionNotification(value); return *this;}

    /**
     * Specifies an ESAM ManifestConfirmConditionNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the manifest conditioning
     * instructions that you provide in the setting MCC XML (mccXml).
     */
    inline EsamSettings& WithManifestConfirmConditionNotification(EsamManifestConfirmConditionNotification&& value) { SetManifestConfirmConditionNotification(std::move(value)); return *this;}


    /**
     * Specifies the stream distance, in milliseconds, between the SCTE 35 messages
     * that the transcoder places and the splice points that they refer to. If the time
     * between the start of the asset and the SCTE-35 message is less than this value,
     * then the transcoder places the SCTE-35 marker at the beginning of the stream.
     */
    inline int GetResponseSignalPreroll() const{ return m_responseSignalPreroll; }

    /**
     * Specifies the stream distance, in milliseconds, between the SCTE 35 messages
     * that the transcoder places and the splice points that they refer to. If the time
     * between the start of the asset and the SCTE-35 message is less than this value,
     * then the transcoder places the SCTE-35 marker at the beginning of the stream.
     */
    inline bool ResponseSignalPrerollHasBeenSet() const { return m_responseSignalPrerollHasBeenSet; }

    /**
     * Specifies the stream distance, in milliseconds, between the SCTE 35 messages
     * that the transcoder places and the splice points that they refer to. If the time
     * between the start of the asset and the SCTE-35 message is less than this value,
     * then the transcoder places the SCTE-35 marker at the beginning of the stream.
     */
    inline void SetResponseSignalPreroll(int value) { m_responseSignalPrerollHasBeenSet = true; m_responseSignalPreroll = value; }

    /**
     * Specifies the stream distance, in milliseconds, between the SCTE 35 messages
     * that the transcoder places and the splice points that they refer to. If the time
     * between the start of the asset and the SCTE-35 message is less than this value,
     * then the transcoder places the SCTE-35 marker at the beginning of the stream.
     */
    inline EsamSettings& WithResponseSignalPreroll(int value) { SetResponseSignalPreroll(value); return *this;}


    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML (sccXml).
     */
    inline const EsamSignalProcessingNotification& GetSignalProcessingNotification() const{ return m_signalProcessingNotification; }

    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML (sccXml).
     */
    inline bool SignalProcessingNotificationHasBeenSet() const { return m_signalProcessingNotificationHasBeenSet; }

    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML (sccXml).
     */
    inline void SetSignalProcessingNotification(const EsamSignalProcessingNotification& value) { m_signalProcessingNotificationHasBeenSet = true; m_signalProcessingNotification = value; }

    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML (sccXml).
     */
    inline void SetSignalProcessingNotification(EsamSignalProcessingNotification&& value) { m_signalProcessingNotificationHasBeenSet = true; m_signalProcessingNotification = std::move(value); }

    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML (sccXml).
     */
    inline EsamSettings& WithSignalProcessingNotification(const EsamSignalProcessingNotification& value) { SetSignalProcessingNotification(value); return *this;}

    /**
     * Specifies an ESAM SignalProcessingNotification XML as per
     * OC-SP-ESAM-API-I03-131025. The transcoder uses the signal processing
     * instructions that you provide in the setting SCC XML (sccXml).
     */
    inline EsamSettings& WithSignalProcessingNotification(EsamSignalProcessingNotification&& value) { SetSignalProcessingNotification(std::move(value)); return *this;}

  private:

    EsamManifestConfirmConditionNotification m_manifestConfirmConditionNotification;
    bool m_manifestConfirmConditionNotificationHasBeenSet = false;

    int m_responseSignalPreroll;
    bool m_responseSignalPrerollHasBeenSet = false;

    EsamSignalProcessingNotification m_signalProcessingNotification;
    bool m_signalProcessingNotificationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
