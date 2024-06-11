/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/nimble/model/StreamingSessionState.h>
#include <aws/nimble/model/StreamingSessionStatusCode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Information about the streaming session backup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamingSessionBackup">AWS
   * API Reference</a></p>
   */
  class StreamingSessionBackup
  {
  public:
    AWS_NIMBLESTUDIO_API StreamingSessionBackup();
    AWS_NIMBLESTUDIO_API StreamingSessionBackup(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamingSessionBackup& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline StreamingSessionBackup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StreamingSessionBackup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StreamingSessionBackup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the backup.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }
    inline StreamingSessionBackup& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}
    inline StreamingSessionBackup& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}
    inline StreamingSessionBackup& WithBackupId(const char* value) { SetBackupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO timestamp in for when the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StreamingSessionBackup& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StreamingSessionBackup& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the launch profile which allowed the backups for the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }
    inline StreamingSessionBackup& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}
    inline StreamingSessionBackup& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}
    inline StreamingSessionBackup& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }
    inline StreamingSessionBackup& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}
    inline StreamingSessionBackup& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}
    inline StreamingSessionBackup& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming session ID for the <code>StreamingSessionBackup</code>.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline StreamingSessionBackup& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StreamingSessionBackup& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StreamingSessionBackup& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamingSessionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StreamingSessionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StreamingSessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline StreamingSessionBackup& WithState(const StreamingSessionState& value) { SetState(value); return *this;}
    inline StreamingSessionBackup& WithState(StreamingSessionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code.</p>
     */
    inline const StreamingSessionStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const StreamingSessionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(StreamingSessionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline StreamingSessionBackup& WithStatusCode(const StreamingSessionStatusCode& value) { SetStatusCode(value); return *this;}
    inline StreamingSessionBackup& WithStatusCode(StreamingSessionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the streaming session backup.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline StreamingSessionBackup& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline StreamingSessionBackup& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline StreamingSessionBackup& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
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
    inline StreamingSessionBackup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StreamingSessionBackup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StreamingSessionBackup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StreamingSessionBackup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StreamingSessionBackup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StreamingSessionBackup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StreamingSessionBackup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StreamingSessionBackup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StreamingSessionBackup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    StreamingSessionState m_state;
    bool m_stateHasBeenSet = false;

    StreamingSessionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
