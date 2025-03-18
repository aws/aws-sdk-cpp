/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ResourceDataSyncSourceWithState.h>
#include <aws/ssm/model/ResourceDataSyncS3Destination.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/LastResourceDataSyncStatus.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about a resource data sync configuration, including its current
   * status and last successful sync.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResourceDataSyncItem">AWS
   * API Reference</a></p>
   */
  class ResourceDataSyncItem
  {
  public:
    AWS_SSM_API ResourceDataSyncItem() = default;
    AWS_SSM_API ResourceDataSyncItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource data sync.</p>
     */
    inline const Aws::String& GetSyncName() const { return m_syncName; }
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }
    template<typename SyncNameT = Aws::String>
    void SetSyncName(SyncNameT&& value) { m_syncNameHasBeenSet = true; m_syncName = std::forward<SyncNameT>(value); }
    template<typename SyncNameT = Aws::String>
    ResourceDataSyncItem& WithSyncName(SyncNameT&& value) { SetSyncName(std::forward<SyncNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline const Aws::String& GetSyncType() const { return m_syncType; }
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }
    template<typename SyncTypeT = Aws::String>
    void SetSyncType(SyncTypeT&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::forward<SyncTypeT>(value); }
    template<typename SyncTypeT = Aws::String>
    ResourceDataSyncItem& WithSyncType(SyncTypeT&& value) { SetSyncType(std::forward<SyncTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline const ResourceDataSyncSourceWithState& GetSyncSource() const { return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    template<typename SyncSourceT = ResourceDataSyncSourceWithState>
    void SetSyncSource(SyncSourceT&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::forward<SyncSourceT>(value); }
    template<typename SyncSourceT = ResourceDataSyncSourceWithState>
    ResourceDataSyncItem& WithSyncSource(SyncSourceT&& value) { SetSyncSource(std::forward<SyncSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline const ResourceDataSyncS3Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = ResourceDataSyncS3Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = ResourceDataSyncS3Destination>
    ResourceDataSyncItem& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncTime() const { return m_lastSyncTime; }
    inline bool LastSyncTimeHasBeenSet() const { return m_lastSyncTimeHasBeenSet; }
    template<typename LastSyncTimeT = Aws::Utils::DateTime>
    void SetLastSyncTime(LastSyncTimeT&& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = std::forward<LastSyncTimeT>(value); }
    template<typename LastSyncTimeT = Aws::Utils::DateTime>
    ResourceDataSyncItem& WithLastSyncTime(LastSyncTimeT&& value) { SetLastSyncTime(std::forward<LastSyncTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulSyncTime() const { return m_lastSuccessfulSyncTime; }
    inline bool LastSuccessfulSyncTimeHasBeenSet() const { return m_lastSuccessfulSyncTimeHasBeenSet; }
    template<typename LastSuccessfulSyncTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulSyncTime(LastSuccessfulSyncTimeT&& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = std::forward<LastSuccessfulSyncTimeT>(value); }
    template<typename LastSuccessfulSyncTimeT = Aws::Utils::DateTime>
    ResourceDataSyncItem& WithLastSuccessfulSyncTime(LastSuccessfulSyncTimeT&& value) { SetLastSuccessfulSyncTime(std::forward<LastSuccessfulSyncTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline const Aws::Utils::DateTime& GetSyncLastModifiedTime() const { return m_syncLastModifiedTime; }
    inline bool SyncLastModifiedTimeHasBeenSet() const { return m_syncLastModifiedTimeHasBeenSet; }
    template<typename SyncLastModifiedTimeT = Aws::Utils::DateTime>
    void SetSyncLastModifiedTime(SyncLastModifiedTimeT&& value) { m_syncLastModifiedTimeHasBeenSet = true; m_syncLastModifiedTime = std::forward<SyncLastModifiedTimeT>(value); }
    template<typename SyncLastModifiedTimeT = Aws::Utils::DateTime>
    ResourceDataSyncItem& WithSyncLastModifiedTime(SyncLastModifiedTimeT&& value) { SetSyncLastModifiedTime(std::forward<SyncLastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reported by the last sync.</p>
     */
    inline LastResourceDataSyncStatus GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(LastResourceDataSyncStatus value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline ResourceDataSyncItem& WithLastStatus(LastResourceDataSyncStatus value) { SetLastStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSyncCreatedTime() const { return m_syncCreatedTime; }
    inline bool SyncCreatedTimeHasBeenSet() const { return m_syncCreatedTimeHasBeenSet; }
    template<typename SyncCreatedTimeT = Aws::Utils::DateTime>
    void SetSyncCreatedTime(SyncCreatedTimeT&& value) { m_syncCreatedTimeHasBeenSet = true; m_syncCreatedTime = std::forward<SyncCreatedTimeT>(value); }
    template<typename SyncCreatedTimeT = Aws::Utils::DateTime>
    ResourceDataSyncItem& WithSyncCreatedTime(SyncCreatedTimeT&& value) { SetSyncCreatedTime(std::forward<SyncCreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline const Aws::String& GetLastSyncStatusMessage() const { return m_lastSyncStatusMessage; }
    inline bool LastSyncStatusMessageHasBeenSet() const { return m_lastSyncStatusMessageHasBeenSet; }
    template<typename LastSyncStatusMessageT = Aws::String>
    void SetLastSyncStatusMessage(LastSyncStatusMessageT&& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = std::forward<LastSyncStatusMessageT>(value); }
    template<typename LastSyncStatusMessageT = Aws::String>
    ResourceDataSyncItem& WithLastSyncStatusMessage(LastSyncStatusMessageT&& value) { SetLastSyncStatusMessage(std::forward<LastSyncStatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    ResourceDataSyncSourceWithState m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    ResourceDataSyncS3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;

    Aws::Utils::DateTime m_lastSyncTime{};
    bool m_lastSyncTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulSyncTime{};
    bool m_lastSuccessfulSyncTimeHasBeenSet = false;

    Aws::Utils::DateTime m_syncLastModifiedTime{};
    bool m_syncLastModifiedTimeHasBeenSet = false;

    LastResourceDataSyncStatus m_lastStatus{LastResourceDataSyncStatus::NOT_SET};
    bool m_lastStatusHasBeenSet = false;

    Aws::Utils::DateTime m_syncCreatedTime{};
    bool m_syncCreatedTimeHasBeenSet = false;

    Aws::String m_lastSyncStatusMessage;
    bool m_lastSyncStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
