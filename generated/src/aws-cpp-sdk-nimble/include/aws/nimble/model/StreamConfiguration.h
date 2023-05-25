/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/AutomaticTerminationMode.h>
#include <aws/nimble/model/StreamingClipboardMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamConfigurationSessionBackup.h>
#include <aws/nimble/model/SessionPersistenceMode.h>
#include <aws/nimble/model/StreamConfigurationSessionStorage.h>
#include <aws/nimble/model/VolumeConfiguration.h>
#include <aws/nimble/model/StreamingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A configuration for a streaming session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamConfiguration">AWS
   * API Reference</a></p>
   */
  class StreamConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API StreamConfiguration();
    AWS_NIMBLESTUDIO_API StreamConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates if a streaming session created from this launch profile should be
     * terminated automatically or retained without termination after being in a
     * <code>STOPPED</code> state.</p> <ul> <li> <p>When <code>ACTIVATED</code>, the
     * streaming session is scheduled for termination after being in the
     * <code>STOPPED</code> state for the time specified in
     * <code>maxStoppedSessionLengthInMinutes</code>.</p> </li> <li> <p>When
     * <code>DEACTIVATED</code>, the streaming session can remain in the
     * <code>STOPPED</code> state indefinitely.</p> </li> </ul> <p>This parameter is
     * only allowed when <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.
     * When allowed, the default value for this parameter is
     * <code>DEACTIVATED</code>.</p>
     */
    inline const AutomaticTerminationMode& GetAutomaticTerminationMode() const{ return m_automaticTerminationMode; }

    /**
     * <p>Indicates if a streaming session created from this launch profile should be
     * terminated automatically or retained without termination after being in a
     * <code>STOPPED</code> state.</p> <ul> <li> <p>When <code>ACTIVATED</code>, the
     * streaming session is scheduled for termination after being in the
     * <code>STOPPED</code> state for the time specified in
     * <code>maxStoppedSessionLengthInMinutes</code>.</p> </li> <li> <p>When
     * <code>DEACTIVATED</code>, the streaming session can remain in the
     * <code>STOPPED</code> state indefinitely.</p> </li> </ul> <p>This parameter is
     * only allowed when <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.
     * When allowed, the default value for this parameter is
     * <code>DEACTIVATED</code>.</p>
     */
    inline bool AutomaticTerminationModeHasBeenSet() const { return m_automaticTerminationModeHasBeenSet; }

    /**
     * <p>Indicates if a streaming session created from this launch profile should be
     * terminated automatically or retained without termination after being in a
     * <code>STOPPED</code> state.</p> <ul> <li> <p>When <code>ACTIVATED</code>, the
     * streaming session is scheduled for termination after being in the
     * <code>STOPPED</code> state for the time specified in
     * <code>maxStoppedSessionLengthInMinutes</code>.</p> </li> <li> <p>When
     * <code>DEACTIVATED</code>, the streaming session can remain in the
     * <code>STOPPED</code> state indefinitely.</p> </li> </ul> <p>This parameter is
     * only allowed when <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.
     * When allowed, the default value for this parameter is
     * <code>DEACTIVATED</code>.</p>
     */
    inline void SetAutomaticTerminationMode(const AutomaticTerminationMode& value) { m_automaticTerminationModeHasBeenSet = true; m_automaticTerminationMode = value; }

    /**
     * <p>Indicates if a streaming session created from this launch profile should be
     * terminated automatically or retained without termination after being in a
     * <code>STOPPED</code> state.</p> <ul> <li> <p>When <code>ACTIVATED</code>, the
     * streaming session is scheduled for termination after being in the
     * <code>STOPPED</code> state for the time specified in
     * <code>maxStoppedSessionLengthInMinutes</code>.</p> </li> <li> <p>When
     * <code>DEACTIVATED</code>, the streaming session can remain in the
     * <code>STOPPED</code> state indefinitely.</p> </li> </ul> <p>This parameter is
     * only allowed when <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.
     * When allowed, the default value for this parameter is
     * <code>DEACTIVATED</code>.</p>
     */
    inline void SetAutomaticTerminationMode(AutomaticTerminationMode&& value) { m_automaticTerminationModeHasBeenSet = true; m_automaticTerminationMode = std::move(value); }

    /**
     * <p>Indicates if a streaming session created from this launch profile should be
     * terminated automatically or retained without termination after being in a
     * <code>STOPPED</code> state.</p> <ul> <li> <p>When <code>ACTIVATED</code>, the
     * streaming session is scheduled for termination after being in the
     * <code>STOPPED</code> state for the time specified in
     * <code>maxStoppedSessionLengthInMinutes</code>.</p> </li> <li> <p>When
     * <code>DEACTIVATED</code>, the streaming session can remain in the
     * <code>STOPPED</code> state indefinitely.</p> </li> </ul> <p>This parameter is
     * only allowed when <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.
     * When allowed, the default value for this parameter is
     * <code>DEACTIVATED</code>.</p>
     */
    inline StreamConfiguration& WithAutomaticTerminationMode(const AutomaticTerminationMode& value) { SetAutomaticTerminationMode(value); return *this;}

    /**
     * <p>Indicates if a streaming session created from this launch profile should be
     * terminated automatically or retained without termination after being in a
     * <code>STOPPED</code> state.</p> <ul> <li> <p>When <code>ACTIVATED</code>, the
     * streaming session is scheduled for termination after being in the
     * <code>STOPPED</code> state for the time specified in
     * <code>maxStoppedSessionLengthInMinutes</code>.</p> </li> <li> <p>When
     * <code>DEACTIVATED</code>, the streaming session can remain in the
     * <code>STOPPED</code> state indefinitely.</p> </li> </ul> <p>This parameter is
     * only allowed when <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.
     * When allowed, the default value for this parameter is
     * <code>DEACTIVATED</code>.</p>
     */
    inline StreamConfiguration& WithAutomaticTerminationMode(AutomaticTerminationMode&& value) { SetAutomaticTerminationMode(std::move(value)); return *this;}


    /**
     * <p>Allows or deactivates the use of the system clipboard to copy and paste
     * between the streaming session and streaming client.</p>
     */
    inline const StreamingClipboardMode& GetClipboardMode() const{ return m_clipboardMode; }

    /**
     * <p>Allows or deactivates the use of the system clipboard to copy and paste
     * between the streaming session and streaming client.</p>
     */
    inline bool ClipboardModeHasBeenSet() const { return m_clipboardModeHasBeenSet; }

    /**
     * <p>Allows or deactivates the use of the system clipboard to copy and paste
     * between the streaming session and streaming client.</p>
     */
    inline void SetClipboardMode(const StreamingClipboardMode& value) { m_clipboardModeHasBeenSet = true; m_clipboardMode = value; }

    /**
     * <p>Allows or deactivates the use of the system clipboard to copy and paste
     * between the streaming session and streaming client.</p>
     */
    inline void SetClipboardMode(StreamingClipboardMode&& value) { m_clipboardModeHasBeenSet = true; m_clipboardMode = std::move(value); }

    /**
     * <p>Allows or deactivates the use of the system clipboard to copy and paste
     * between the streaming session and streaming client.</p>
     */
    inline StreamConfiguration& WithClipboardMode(const StreamingClipboardMode& value) { SetClipboardMode(value); return *this;}

    /**
     * <p>Allows or deactivates the use of the system clipboard to copy and paste
     * between the streaming session and streaming client.</p>
     */
    inline StreamConfiguration& WithClipboardMode(StreamingClipboardMode&& value) { SetClipboardMode(std::move(value)); return *this;}


    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline const Aws::Vector<StreamingInstanceType>& GetEc2InstanceTypes() const{ return m_ec2InstanceTypes; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline bool Ec2InstanceTypesHasBeenSet() const { return m_ec2InstanceTypesHasBeenSet; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetEc2InstanceTypes(const Aws::Vector<StreamingInstanceType>& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes = value; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetEc2InstanceTypes(Aws::Vector<StreamingInstanceType>&& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes = std::move(value); }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& WithEc2InstanceTypes(const Aws::Vector<StreamingInstanceType>& value) { SetEc2InstanceTypes(value); return *this;}

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& WithEc2InstanceTypes(Aws::Vector<StreamingInstanceType>&& value) { SetEc2InstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& AddEc2InstanceTypes(const StreamingInstanceType& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes.push_back(value); return *this; }

    /**
     * <p>The EC2 instance types that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& AddEc2InstanceTypes(StreamingInstanceType&& value) { m_ec2InstanceTypesHasBeenSet = true; m_ec2InstanceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline int GetMaxSessionLengthInMinutes() const{ return m_maxSessionLengthInMinutes; }

    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline bool MaxSessionLengthInMinutesHasBeenSet() const { return m_maxSessionLengthInMinutesHasBeenSet; }

    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline void SetMaxSessionLengthInMinutes(int value) { m_maxSessionLengthInMinutesHasBeenSet = true; m_maxSessionLengthInMinutes = value; }

    /**
     * <p>The length of time, in minutes, that a streaming session can be active before
     * it is stopped or terminated. After this point, Nimble Studio automatically
     * terminates or stops the session. The default length of time is 690 minutes, and
     * the maximum length of time is 30 days.</p>
     */
    inline StreamConfiguration& WithMaxSessionLengthInMinutes(int value) { SetMaxSessionLengthInMinutes(value); return *this;}


    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the <code>STOPPED</code> state. The default value is 0.
     * The maximum value is 5760.</p> <p>This field is allowed only when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code> and
     * <code>automaticTerminationMode</code> is <code>ACTIVATED</code>.</p> <p>If the
     * value is set to 0, your sessions can’t be <code>STOPPED</code>. If you then call
     * <code>StopStreamingSession</code>, the session fails. If the time that a session
     * stays in the <code>READY</code> state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of <code>STOPPED</code>).</p> <p>If the value is set to a
     * positive number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the <code>READY</code>
     * state. If the time that a session stays in the <code>READY</code> state exceeds
     * the <code>maxSessionLengthInMinutes</code> value, the session will automatically
     * be stopped (instead of terminated).</p>
     */
    inline int GetMaxStoppedSessionLengthInMinutes() const{ return m_maxStoppedSessionLengthInMinutes; }

    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the <code>STOPPED</code> state. The default value is 0.
     * The maximum value is 5760.</p> <p>This field is allowed only when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code> and
     * <code>automaticTerminationMode</code> is <code>ACTIVATED</code>.</p> <p>If the
     * value is set to 0, your sessions can’t be <code>STOPPED</code>. If you then call
     * <code>StopStreamingSession</code>, the session fails. If the time that a session
     * stays in the <code>READY</code> state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of <code>STOPPED</code>).</p> <p>If the value is set to a
     * positive number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the <code>READY</code>
     * state. If the time that a session stays in the <code>READY</code> state exceeds
     * the <code>maxSessionLengthInMinutes</code> value, the session will automatically
     * be stopped (instead of terminated).</p>
     */
    inline bool MaxStoppedSessionLengthInMinutesHasBeenSet() const { return m_maxStoppedSessionLengthInMinutesHasBeenSet; }

    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the <code>STOPPED</code> state. The default value is 0.
     * The maximum value is 5760.</p> <p>This field is allowed only when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code> and
     * <code>automaticTerminationMode</code> is <code>ACTIVATED</code>.</p> <p>If the
     * value is set to 0, your sessions can’t be <code>STOPPED</code>. If you then call
     * <code>StopStreamingSession</code>, the session fails. If the time that a session
     * stays in the <code>READY</code> state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of <code>STOPPED</code>).</p> <p>If the value is set to a
     * positive number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the <code>READY</code>
     * state. If the time that a session stays in the <code>READY</code> state exceeds
     * the <code>maxSessionLengthInMinutes</code> value, the session will automatically
     * be stopped (instead of terminated).</p>
     */
    inline void SetMaxStoppedSessionLengthInMinutes(int value) { m_maxStoppedSessionLengthInMinutesHasBeenSet = true; m_maxStoppedSessionLengthInMinutes = value; }

    /**
     * <p>Integer that determines if you can start and stop your sessions and how long
     * a session can stay in the <code>STOPPED</code> state. The default value is 0.
     * The maximum value is 5760.</p> <p>This field is allowed only when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code> and
     * <code>automaticTerminationMode</code> is <code>ACTIVATED</code>.</p> <p>If the
     * value is set to 0, your sessions can’t be <code>STOPPED</code>. If you then call
     * <code>StopStreamingSession</code>, the session fails. If the time that a session
     * stays in the <code>READY</code> state exceeds the
     * <code>maxSessionLengthInMinutes</code> value, the session will automatically be
     * terminated (instead of <code>STOPPED</code>).</p> <p>If the value is set to a
     * positive number, the session can be stopped. You can call
     * <code>StopStreamingSession</code> to stop sessions in the <code>READY</code>
     * state. If the time that a session stays in the <code>READY</code> state exceeds
     * the <code>maxSessionLengthInMinutes</code> value, the session will automatically
     * be stopped (instead of terminated).</p>
     */
    inline StreamConfiguration& WithMaxStoppedSessionLengthInMinutes(int value) { SetMaxStoppedSessionLengthInMinutes(value); return *this;}


    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline const StreamConfigurationSessionBackup& GetSessionBackup() const{ return m_sessionBackup; }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline bool SessionBackupHasBeenSet() const { return m_sessionBackupHasBeenSet; }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline void SetSessionBackup(const StreamConfigurationSessionBackup& value) { m_sessionBackupHasBeenSet = true; m_sessionBackup = value; }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline void SetSessionBackup(StreamConfigurationSessionBackup&& value) { m_sessionBackupHasBeenSet = true; m_sessionBackup = std::move(value); }

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline StreamConfiguration& WithSessionBackup(const StreamConfigurationSessionBackup& value) { SetSessionBackup(value); return *this;}

    /**
     * <p>Information about the streaming session backup.</p>
     */
    inline StreamConfiguration& WithSessionBackup(StreamConfigurationSessionBackup&& value) { SetSessionBackup(std::move(value)); return *this;}


    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline const SessionPersistenceMode& GetSessionPersistenceMode() const{ return m_sessionPersistenceMode; }

    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline bool SessionPersistenceModeHasBeenSet() const { return m_sessionPersistenceModeHasBeenSet; }

    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline void SetSessionPersistenceMode(const SessionPersistenceMode& value) { m_sessionPersistenceModeHasBeenSet = true; m_sessionPersistenceMode = value; }

    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline void SetSessionPersistenceMode(SessionPersistenceMode&& value) { m_sessionPersistenceModeHasBeenSet = true; m_sessionPersistenceMode = std::move(value); }

    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline StreamConfiguration& WithSessionPersistenceMode(const SessionPersistenceMode& value) { SetSessionPersistenceMode(value); return *this;}

    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline StreamConfiguration& WithSessionPersistenceMode(SessionPersistenceMode&& value) { SetSessionPersistenceMode(std::move(value)); return *this;}


    /**
     * <p>The upload storage for a streaming session.</p>
     */
    inline const StreamConfigurationSessionStorage& GetSessionStorage() const{ return m_sessionStorage; }

    /**
     * <p>The upload storage for a streaming session.</p>
     */
    inline bool SessionStorageHasBeenSet() const { return m_sessionStorageHasBeenSet; }

    /**
     * <p>The upload storage for a streaming session.</p>
     */
    inline void SetSessionStorage(const StreamConfigurationSessionStorage& value) { m_sessionStorageHasBeenSet = true; m_sessionStorage = value; }

    /**
     * <p>The upload storage for a streaming session.</p>
     */
    inline void SetSessionStorage(StreamConfigurationSessionStorage&& value) { m_sessionStorageHasBeenSet = true; m_sessionStorage = std::move(value); }

    /**
     * <p>The upload storage for a streaming session.</p>
     */
    inline StreamConfiguration& WithSessionStorage(const StreamConfigurationSessionStorage& value) { SetSessionStorage(value); return *this;}

    /**
     * <p>The upload storage for a streaming session.</p>
     */
    inline StreamConfiguration& WithSessionStorage(StreamConfigurationSessionStorage&& value) { SetSessionStorage(std::move(value)); return *this;}


    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStreamingImageIds() const{ return m_streamingImageIds; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline bool StreamingImageIdsHasBeenSet() const { return m_streamingImageIdsHasBeenSet; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetStreamingImageIds(const Aws::Vector<Aws::String>& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds = value; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline void SetStreamingImageIds(Aws::Vector<Aws::String>&& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds = std::move(value); }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& WithStreamingImageIds(const Aws::Vector<Aws::String>& value) { SetStreamingImageIds(value); return *this;}

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& WithStreamingImageIds(Aws::Vector<Aws::String>&& value) { SetStreamingImageIds(std::move(value)); return *this;}

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& AddStreamingImageIds(const Aws::String& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds.push_back(value); return *this; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& AddStreamingImageIds(Aws::String&& value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The streaming images that users can select from when launching a streaming
     * session with this launch profile.</p>
     */
    inline StreamConfiguration& AddStreamingImageIds(const char* value) { m_streamingImageIdsHasBeenSet = true; m_streamingImageIds.push_back(value); return *this; }


    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline const VolumeConfiguration& GetVolumeConfiguration() const{ return m_volumeConfiguration; }

    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline bool VolumeConfigurationHasBeenSet() const { return m_volumeConfigurationHasBeenSet; }

    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline void SetVolumeConfiguration(const VolumeConfiguration& value) { m_volumeConfigurationHasBeenSet = true; m_volumeConfiguration = value; }

    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline void SetVolumeConfiguration(VolumeConfiguration&& value) { m_volumeConfigurationHasBeenSet = true; m_volumeConfiguration = std::move(value); }

    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline StreamConfiguration& WithVolumeConfiguration(const VolumeConfiguration& value) { SetVolumeConfiguration(value); return *this;}

    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline StreamConfiguration& WithVolumeConfiguration(VolumeConfiguration&& value) { SetVolumeConfiguration(std::move(value)); return *this;}

  private:

    AutomaticTerminationMode m_automaticTerminationMode;
    bool m_automaticTerminationModeHasBeenSet = false;

    StreamingClipboardMode m_clipboardMode;
    bool m_clipboardModeHasBeenSet = false;

    Aws::Vector<StreamingInstanceType> m_ec2InstanceTypes;
    bool m_ec2InstanceTypesHasBeenSet = false;

    int m_maxSessionLengthInMinutes;
    bool m_maxSessionLengthInMinutesHasBeenSet = false;

    int m_maxStoppedSessionLengthInMinutes;
    bool m_maxStoppedSessionLengthInMinutesHasBeenSet = false;

    StreamConfigurationSessionBackup m_sessionBackup;
    bool m_sessionBackupHasBeenSet = false;

    SessionPersistenceMode m_sessionPersistenceMode;
    bool m_sessionPersistenceModeHasBeenSet = false;

    StreamConfigurationSessionStorage m_sessionStorage;
    bool m_sessionStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_streamingImageIds;
    bool m_streamingImageIdsHasBeenSet = false;

    VolumeConfiguration m_volumeConfiguration;
    bool m_volumeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
