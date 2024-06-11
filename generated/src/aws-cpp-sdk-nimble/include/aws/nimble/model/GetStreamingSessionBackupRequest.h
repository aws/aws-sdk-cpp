/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class GetStreamingSessionBackupRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API GetStreamingSessionBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetStreamingSessionBackup"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the backup.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }
    inline GetStreamingSessionBackupRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}
    inline GetStreamingSessionBackupRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}
    inline GetStreamingSessionBackupRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline GetStreamingSessionBackupRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline GetStreamingSessionBackupRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline GetStreamingSessionBackupRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
