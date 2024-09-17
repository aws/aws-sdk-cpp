/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/AutomaticTerminationMode.h>
#include <aws/nimble/model/SessionBackupMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/nimble/model/SessionPersistenceMode.h>
#include <aws/nimble/model/StreamingSessionState.h>
#include <aws/nimble/model/StreamingSessionStatusCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/nimble/model/VolumeConfiguration.h>
#include <aws/nimble/model/VolumeRetentionMode.h>
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
   * <p>A streaming session is a virtual workstation created using a particular
   * launch profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamingSession">AWS
   * API Reference</a></p>
   */
  class StreamingSession
  {
  public:
    AWS_NIMBLESTUDIO_API StreamingSession();
    AWS_NIMBLESTUDIO_API StreamingSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamingSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is assigned to a studio resource and
     * uniquely identifies it. ARNs are unique across all Regions.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StreamingSession& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StreamingSession& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StreamingSession& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
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
    inline bool AutomaticTerminationModeHasBeenSet() const { return m_automaticTerminationModeHasBeenSet; }
    inline void SetAutomaticTerminationMode(const AutomaticTerminationMode& value) { m_automaticTerminationModeHasBeenSet = true; m_automaticTerminationMode = value; }
    inline void SetAutomaticTerminationMode(AutomaticTerminationMode&& value) { m_automaticTerminationModeHasBeenSet = true; m_automaticTerminationMode = std::move(value); }
    inline StreamingSession& WithAutomaticTerminationMode(const AutomaticTerminationMode& value) { SetAutomaticTerminationMode(value); return *this;}
    inline StreamingSession& WithAutomaticTerminationMode(AutomaticTerminationMode&& value) { SetAutomaticTerminationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the current backup setting of the session.</p>
     */
    inline const SessionBackupMode& GetBackupMode() const{ return m_backupMode; }
    inline bool BackupModeHasBeenSet() const { return m_backupModeHasBeenSet; }
    inline void SetBackupMode(const SessionBackupMode& value) { m_backupModeHasBeenSet = true; m_backupMode = value; }
    inline void SetBackupMode(SessionBackupMode&& value) { m_backupModeHasBeenSet = true; m_backupMode = std::move(value); }
    inline StreamingSession& WithBackupMode(const SessionBackupMode& value) { SetBackupMode(value); return *this;}
    inline StreamingSession& WithBackupMode(SessionBackupMode&& value) { SetBackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in seconds for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StreamingSession& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StreamingSession& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that created the streaming session.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline StreamingSession& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline StreamingSession& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline StreamingSession& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline const Aws::String& GetEc2InstanceType() const{ return m_ec2InstanceType; }
    inline bool Ec2InstanceTypeHasBeenSet() const { return m_ec2InstanceTypeHasBeenSet; }
    inline void SetEc2InstanceType(const Aws::String& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = value; }
    inline void SetEc2InstanceType(Aws::String&& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = std::move(value); }
    inline void SetEc2InstanceType(const char* value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType.assign(value); }
    inline StreamingSession& WithEc2InstanceType(const Aws::String& value) { SetEc2InstanceType(value); return *this;}
    inline StreamingSession& WithEc2InstanceType(Aws::String&& value) { SetEc2InstanceType(std::move(value)); return *this;}
    inline StreamingSession& WithEc2InstanceType(const char* value) { SetEc2InstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }
    inline StreamingSession& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}
    inline StreamingSession& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}
    inline StreamingSession& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of backups of a streaming session that you can have. When
     * the maximum number of backups is reached, the oldest backup is deleted.</p>
     */
    inline int GetMaxBackupsToRetain() const{ return m_maxBackupsToRetain; }
    inline bool MaxBackupsToRetainHasBeenSet() const { return m_maxBackupsToRetainHasBeenSet; }
    inline void SetMaxBackupsToRetain(int value) { m_maxBackupsToRetainHasBeenSet = true; m_maxBackupsToRetain = value; }
    inline StreamingSession& WithMaxBackupsToRetain(int value) { SetMaxBackupsToRetain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that owns the streaming session. The user that owns
     * the session will be logging into the session and interacting with the virtual
     * workstation.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }
    inline StreamingSession& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}
    inline StreamingSession& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}
    inline StreamingSession& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline StreamingSession& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StreamingSession& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StreamingSession& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determine if a streaming session created from this launch profile can
     * configure persistent storage. This means that <code>volumeConfiguration</code>
     * and <code>automaticTerminationMode</code> are configured.</p>
     */
    inline const SessionPersistenceMode& GetSessionPersistenceMode() const{ return m_sessionPersistenceMode; }
    inline bool SessionPersistenceModeHasBeenSet() const { return m_sessionPersistenceModeHasBeenSet; }
    inline void SetSessionPersistenceMode(const SessionPersistenceMode& value) { m_sessionPersistenceModeHasBeenSet = true; m_sessionPersistenceMode = value; }
    inline void SetSessionPersistenceMode(SessionPersistenceMode&& value) { m_sessionPersistenceModeHasBeenSet = true; m_sessionPersistenceMode = std::move(value); }
    inline StreamingSession& WithSessionPersistenceMode(const SessionPersistenceMode& value) { SetSessionPersistenceMode(value); return *this;}
    inline StreamingSession& WithSessionPersistenceMode(SessionPersistenceMode&& value) { SetSessionPersistenceMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the session entered <code>START_IN_PROGRESS</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline StreamingSession& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline StreamingSession& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that started the streaming session.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }
    inline StreamingSession& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}
    inline StreamingSession& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}
    inline StreamingSession& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backup ID used to restore a streaming session.</p>
     */
    inline const Aws::String& GetStartedFromBackupId() const{ return m_startedFromBackupId; }
    inline bool StartedFromBackupIdHasBeenSet() const { return m_startedFromBackupIdHasBeenSet; }
    inline void SetStartedFromBackupId(const Aws::String& value) { m_startedFromBackupIdHasBeenSet = true; m_startedFromBackupId = value; }
    inline void SetStartedFromBackupId(Aws::String&& value) { m_startedFromBackupIdHasBeenSet = true; m_startedFromBackupId = std::move(value); }
    inline void SetStartedFromBackupId(const char* value) { m_startedFromBackupIdHasBeenSet = true; m_startedFromBackupId.assign(value); }
    inline StreamingSession& WithStartedFromBackupId(const Aws::String& value) { SetStartedFromBackupId(value); return *this;}
    inline StreamingSession& WithStartedFromBackupId(Aws::String&& value) { SetStartedFromBackupId(std::move(value)); return *this;}
    inline StreamingSession& WithStartedFromBackupId(const char* value) { SetStartedFromBackupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state.</p>
     */
    inline const StreamingSessionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StreamingSessionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StreamingSessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline StreamingSession& WithState(const StreamingSessionState& value) { SetState(value); return *this;}
    inline StreamingSession& WithState(StreamingSessionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code.</p>
     */
    inline const StreamingSessionStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const StreamingSessionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(StreamingSessionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline StreamingSession& WithStatusCode(const StreamingSessionStatusCode& value) { SetStatusCode(value); return *this;}
    inline StreamingSession& WithStatusCode(StreamingSessionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the streaming session.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline StreamingSession& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline StreamingSession& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline StreamingSession& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the streaming session will automatically be stopped if the user
     * doesn’t stop the session themselves. </p>
     */
    inline const Aws::Utils::DateTime& GetStopAt() const{ return m_stopAt; }
    inline bool StopAtHasBeenSet() const { return m_stopAtHasBeenSet; }
    inline void SetStopAt(const Aws::Utils::DateTime& value) { m_stopAtHasBeenSet = true; m_stopAt = value; }
    inline void SetStopAt(Aws::Utils::DateTime&& value) { m_stopAtHasBeenSet = true; m_stopAt = std::move(value); }
    inline StreamingSession& WithStopAt(const Aws::Utils::DateTime& value) { SetStopAt(value); return *this;}
    inline StreamingSession& WithStopAt(Aws::Utils::DateTime&& value) { SetStopAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the session entered <code>STOP_IN_PROGRESS</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::move(value); }
    inline StreamingSession& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}
    inline StreamingSession& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that stopped the streaming session.</p>
     */
    inline const Aws::String& GetStoppedBy() const{ return m_stoppedBy; }
    inline bool StoppedByHasBeenSet() const { return m_stoppedByHasBeenSet; }
    inline void SetStoppedBy(const Aws::String& value) { m_stoppedByHasBeenSet = true; m_stoppedBy = value; }
    inline void SetStoppedBy(Aws::String&& value) { m_stoppedByHasBeenSet = true; m_stoppedBy = std::move(value); }
    inline void SetStoppedBy(const char* value) { m_stoppedByHasBeenSet = true; m_stoppedBy.assign(value); }
    inline StreamingSession& WithStoppedBy(const Aws::String& value) { SetStoppedBy(value); return *this;}
    inline StreamingSession& WithStoppedBy(Aws::String&& value) { SetStoppedBy(std::move(value)); return *this;}
    inline StreamingSession& WithStoppedBy(const char* value) { SetStoppedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the streaming image.</p>
     */
    inline const Aws::String& GetStreamingImageId() const{ return m_streamingImageId; }
    inline bool StreamingImageIdHasBeenSet() const { return m_streamingImageIdHasBeenSet; }
    inline void SetStreamingImageId(const Aws::String& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = value; }
    inline void SetStreamingImageId(Aws::String&& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = std::move(value); }
    inline void SetStreamingImageId(const char* value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId.assign(value); }
    inline StreamingSession& WithStreamingImageId(const Aws::String& value) { SetStreamingImageId(value); return *this;}
    inline StreamingSession& WithStreamingImageId(Aws::String&& value) { SetStreamingImageId(std::move(value)); return *this;}
    inline StreamingSession& WithStreamingImageId(const char* value) { SetStreamingImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StreamingSession& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StreamingSession& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StreamingSession& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StreamingSession& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StreamingSession& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StreamingSession& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StreamingSession& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StreamingSession& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StreamingSession& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the streaming session will automatically terminate if not terminated
     * by the user.</p>
     */
    inline const Aws::Utils::DateTime& GetTerminateAt() const{ return m_terminateAt; }
    inline bool TerminateAtHasBeenSet() const { return m_terminateAtHasBeenSet; }
    inline void SetTerminateAt(const Aws::Utils::DateTime& value) { m_terminateAtHasBeenSet = true; m_terminateAt = value; }
    inline void SetTerminateAt(Aws::Utils::DateTime&& value) { m_terminateAtHasBeenSet = true; m_terminateAt = std::move(value); }
    inline StreamingSession& WithTerminateAt(const Aws::Utils::DateTime& value) { SetTerminateAt(value); return *this;}
    inline StreamingSession& WithTerminateAt(Aws::Utils::DateTime&& value) { SetTerminateAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in seconds for when the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline StreamingSession& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline StreamingSession& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that most recently updated the resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline StreamingSession& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline StreamingSession& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline StreamingSession& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom volume configuration for the root volumes that are attached to
     * streaming sessions.</p> <p>This parameter is only allowed when
     * <code>sessionPersistenceMode</code> is <code>ACTIVATED</code>.</p>
     */
    inline const VolumeConfiguration& GetVolumeConfiguration() const{ return m_volumeConfiguration; }
    inline bool VolumeConfigurationHasBeenSet() const { return m_volumeConfigurationHasBeenSet; }
    inline void SetVolumeConfiguration(const VolumeConfiguration& value) { m_volumeConfigurationHasBeenSet = true; m_volumeConfiguration = value; }
    inline void SetVolumeConfiguration(VolumeConfiguration&& value) { m_volumeConfigurationHasBeenSet = true; m_volumeConfiguration = std::move(value); }
    inline StreamingSession& WithVolumeConfiguration(const VolumeConfiguration& value) { SetVolumeConfiguration(value); return *this;}
    inline StreamingSession& WithVolumeConfiguration(VolumeConfiguration&& value) { SetVolumeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determine if an EBS volume created from this streaming session will be backed
     * up.</p>
     */
    inline const VolumeRetentionMode& GetVolumeRetentionMode() const{ return m_volumeRetentionMode; }
    inline bool VolumeRetentionModeHasBeenSet() const { return m_volumeRetentionModeHasBeenSet; }
    inline void SetVolumeRetentionMode(const VolumeRetentionMode& value) { m_volumeRetentionModeHasBeenSet = true; m_volumeRetentionMode = value; }
    inline void SetVolumeRetentionMode(VolumeRetentionMode&& value) { m_volumeRetentionModeHasBeenSet = true; m_volumeRetentionMode = std::move(value); }
    inline StreamingSession& WithVolumeRetentionMode(const VolumeRetentionMode& value) { SetVolumeRetentionMode(value); return *this;}
    inline StreamingSession& WithVolumeRetentionMode(VolumeRetentionMode&& value) { SetVolumeRetentionMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AutomaticTerminationMode m_automaticTerminationMode;
    bool m_automaticTerminationModeHasBeenSet = false;

    SessionBackupMode m_backupMode;
    bool m_backupModeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_ec2InstanceType;
    bool m_ec2InstanceTypeHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    int m_maxBackupsToRetain;
    bool m_maxBackupsToRetainHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    SessionPersistenceMode m_sessionPersistenceMode;
    bool m_sessionPersistenceModeHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::String m_startedFromBackupId;
    bool m_startedFromBackupIdHasBeenSet = false;

    StreamingSessionState m_state;
    bool m_stateHasBeenSet = false;

    StreamingSessionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_stopAt;
    bool m_stopAtHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_stoppedBy;
    bool m_stoppedByHasBeenSet = false;

    Aws::String m_streamingImageId;
    bool m_streamingImageIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_terminateAt;
    bool m_terminateAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    VolumeConfiguration m_volumeConfiguration;
    bool m_volumeConfigurationHasBeenSet = false;

    VolumeRetentionMode m_volumeRetentionMode;
    bool m_volumeRetentionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
