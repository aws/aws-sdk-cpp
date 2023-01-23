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
    AWS_SSM_API ResourceDataSyncItem();
    AWS_SSM_API ResourceDataSyncItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResourceDataSyncItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource data sync.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline ResourceDataSyncItem& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline ResourceDataSyncItem& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource data sync.</p>
     */
    inline ResourceDataSyncItem& WithSyncName(const char* value) { SetSyncName(value); return *this;}


    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline const Aws::String& GetSyncType() const{ return m_syncType; }

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline void SetSyncType(const Aws::String& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline void SetSyncType(Aws::String&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline void SetSyncType(const char* value) { m_syncTypeHasBeenSet = true; m_syncType.assign(value); }

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline ResourceDataSyncItem& WithSyncType(const Aws::String& value) { SetSyncType(value); return *this;}

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline ResourceDataSyncItem& WithSyncType(Aws::String&& value) { SetSyncType(std::move(value)); return *this;}

    /**
     * <p>The type of resource data sync. If <code>SyncType</code> is
     * <code>SyncToDestination</code>, then the resource data sync synchronizes data to
     * an S3 bucket. If the <code>SyncType</code> is <code>SyncFromSource</code> then
     * the resource data sync synchronizes data from Organizations or from multiple
     * Amazon Web Services Regions.</p>
     */
    inline ResourceDataSyncItem& WithSyncType(const char* value) { SetSyncType(value); return *this;}


    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline const ResourceDataSyncSourceWithState& GetSyncSource() const{ return m_syncSource; }

    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }

    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline void SetSyncSource(const ResourceDataSyncSourceWithState& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }

    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline void SetSyncSource(ResourceDataSyncSourceWithState&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }

    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline ResourceDataSyncItem& WithSyncSource(const ResourceDataSyncSourceWithState& value) { SetSyncSource(value); return *this;}

    /**
     * <p>Information about the source where the data was synchronized. </p>
     */
    inline ResourceDataSyncItem& WithSyncSource(ResourceDataSyncSourceWithState&& value) { SetSyncSource(std::move(value)); return *this;}


    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline const ResourceDataSyncS3Destination& GetS3Destination() const{ return m_s3Destination; }

    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }

    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline void SetS3Destination(const ResourceDataSyncS3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }

    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline void SetS3Destination(ResourceDataSyncS3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }

    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline ResourceDataSyncItem& WithS3Destination(const ResourceDataSyncS3Destination& value) { SetS3Destination(value); return *this;}

    /**
     * <p>Configuration information for the target S3 bucket.</p>
     */
    inline ResourceDataSyncItem& WithS3Destination(ResourceDataSyncS3Destination&& value) { SetS3Destination(std::move(value)); return *this;}


    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncTime() const{ return m_lastSyncTime; }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline bool LastSyncTimeHasBeenSet() const { return m_lastSyncTimeHasBeenSet; }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline void SetLastSyncTime(const Aws::Utils::DateTime& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = value; }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline void SetLastSyncTime(Aws::Utils::DateTime&& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = std::move(value); }

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSyncTime(const Aws::Utils::DateTime& value) { SetLastSyncTime(value); return *this;}

    /**
     * <p>The last time the configuration attempted to sync (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSyncTime(Aws::Utils::DateTime&& value) { SetLastSyncTime(std::move(value)); return *this;}


    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulSyncTime() const{ return m_lastSuccessfulSyncTime; }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline bool LastSuccessfulSyncTimeHasBeenSet() const { return m_lastSuccessfulSyncTimeHasBeenSet; }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline void SetLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = value; }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline void SetLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = std::move(value); }

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulSyncTime(value); return *this;}

    /**
     * <p>The last time the sync operations returned a status of
     * <code>SUCCESSFUL</code> (UTC).</p>
     */
    inline ResourceDataSyncItem& WithLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulSyncTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline const Aws::Utils::DateTime& GetSyncLastModifiedTime() const{ return m_syncLastModifiedTime; }

    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline bool SyncLastModifiedTimeHasBeenSet() const { return m_syncLastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline void SetSyncLastModifiedTime(const Aws::Utils::DateTime& value) { m_syncLastModifiedTimeHasBeenSet = true; m_syncLastModifiedTime = value; }

    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline void SetSyncLastModifiedTime(Aws::Utils::DateTime&& value) { m_syncLastModifiedTimeHasBeenSet = true; m_syncLastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline ResourceDataSyncItem& WithSyncLastModifiedTime(const Aws::Utils::DateTime& value) { SetSyncLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the resource data sync was changed. </p>
     */
    inline ResourceDataSyncItem& WithSyncLastModifiedTime(Aws::Utils::DateTime&& value) { SetSyncLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status reported by the last sync.</p>
     */
    inline const LastResourceDataSyncStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline void SetLastStatus(const LastResourceDataSyncStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline void SetLastStatus(LastResourceDataSyncStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastStatus(const LastResourceDataSyncStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The status reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastStatus(LastResourceDataSyncStatus&& value) { SetLastStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSyncCreatedTime() const{ return m_syncCreatedTime; }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline bool SyncCreatedTimeHasBeenSet() const { return m_syncCreatedTimeHasBeenSet; }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline void SetSyncCreatedTime(const Aws::Utils::DateTime& value) { m_syncCreatedTimeHasBeenSet = true; m_syncCreatedTime = value; }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline void SetSyncCreatedTime(Aws::Utils::DateTime&& value) { m_syncCreatedTimeHasBeenSet = true; m_syncCreatedTime = std::move(value); }

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline ResourceDataSyncItem& WithSyncCreatedTime(const Aws::Utils::DateTime& value) { SetSyncCreatedTime(value); return *this;}

    /**
     * <p>The date and time the configuration was created (UTC).</p>
     */
    inline ResourceDataSyncItem& WithSyncCreatedTime(Aws::Utils::DateTime&& value) { SetSyncCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline const Aws::String& GetLastSyncStatusMessage() const{ return m_lastSyncStatusMessage; }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline bool LastSyncStatusMessageHasBeenSet() const { return m_lastSyncStatusMessageHasBeenSet; }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline void SetLastSyncStatusMessage(const Aws::String& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = value; }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline void SetLastSyncStatusMessage(Aws::String&& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = std::move(value); }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline void SetLastSyncStatusMessage(const char* value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage.assign(value); }

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastSyncStatusMessage(const Aws::String& value) { SetLastSyncStatusMessage(value); return *this;}

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastSyncStatusMessage(Aws::String&& value) { SetLastSyncStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message details reported by the last sync.</p>
     */
    inline ResourceDataSyncItem& WithLastSyncStatusMessage(const char* value) { SetLastSyncStatusMessage(value); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet = false;

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    ResourceDataSyncSourceWithState m_syncSource;
    bool m_syncSourceHasBeenSet = false;

    ResourceDataSyncS3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;

    Aws::Utils::DateTime m_lastSyncTime;
    bool m_lastSyncTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulSyncTime;
    bool m_lastSuccessfulSyncTimeHasBeenSet = false;

    Aws::Utils::DateTime m_syncLastModifiedTime;
    bool m_syncLastModifiedTimeHasBeenSet = false;

    LastResourceDataSyncStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    Aws::Utils::DateTime m_syncCreatedTime;
    bool m_syncCreatedTimeHasBeenSet = false;

    Aws::String m_lastSyncStatusMessage;
    bool m_lastSyncStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
