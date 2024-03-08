/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Database Migration Service (DMS) replication task.
   * A replication task moves a set of data from the source endpoint to the target
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDmsReplicationTaskDetails">AWS
   * API Reference</a></p>
   */
  class AwsDmsReplicationTaskDetails
  {
  public:
    AWS_SECURITYHUB_API AwsDmsReplicationTaskDetails();
    AWS_SECURITYHUB_API AwsDmsReplicationTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDmsReplicationTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}

    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}


    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline const Aws::String& GetCdcStartTime() const{ return m_cdcStartTime; }

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline void SetCdcStartTime(const Aws::String& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline void SetCdcStartTime(Aws::String&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline void SetCdcStartTime(const char* value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime.assign(value); }

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStartTime(const Aws::String& value) { SetCdcStartTime(value); return *this;}

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStartTime(Aws::String&& value) { SetCdcStartTime(std::move(value)); return *this;}

    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStartTime(const char* value) { SetCdcStartTime(value); return *this;}


    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}

    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}


    /**
     * <p> The migration type. </p>
     */
    inline const Aws::String& GetMigrationType() const{ return m_migrationType; }

    /**
     * <p> The migration type. </p>
     */
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }

    /**
     * <p> The migration type. </p>
     */
    inline void SetMigrationType(const Aws::String& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }

    /**
     * <p> The migration type. </p>
     */
    inline void SetMigrationType(Aws::String&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }

    /**
     * <p> The migration type. </p>
     */
    inline void SetMigrationType(const char* value) { m_migrationTypeHasBeenSet = true; m_migrationType.assign(value); }

    /**
     * <p> The migration type. </p>
     */
    inline AwsDmsReplicationTaskDetails& WithMigrationType(const Aws::String& value) { SetMigrationType(value); return *this;}

    /**
     * <p> The migration type. </p>
     */
    inline AwsDmsReplicationTaskDetails& WithMigrationType(Aws::String&& value) { SetMigrationType(std::move(value)); return *this;}

    /**
     * <p> The migration type. </p>
     */
    inline AwsDmsReplicationTaskDetails& WithMigrationType(const char* value) { SetMigrationType(value); return *this;}


    /**
     * <p> The identifier of the replication task.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The identifier of the replication task.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}


    /**
     * <p> The settings for the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const{ return m_replicationTaskSettings; }

    /**
     * <p> The settings for the replication task.</p>
     */
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }

    /**
     * <p> The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }

    /**
     * <p> The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::move(value); }

    /**
     * <p> The settings for the replication task.</p>
     */
    inline void SetReplicationTaskSettings(const char* value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings.assign(value); }

    /**
     * <p> The settings for the replication task.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(const Aws::String& value) { SetReplicationTaskSettings(value); return *this;}

    /**
     * <p> The settings for the replication task.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(std::move(value)); return *this;}

    /**
     * <p> The settings for the replication task.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}


    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}


    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}

    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}


    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}


    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline const Aws::String& GetTaskData() const{ return m_taskData; }

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline bool TaskDataHasBeenSet() const { return m_taskDataHasBeenSet; }

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline void SetTaskData(const Aws::String& value) { m_taskDataHasBeenSet = true; m_taskData = value; }

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline void SetTaskData(Aws::String&& value) { m_taskDataHasBeenSet = true; m_taskData = std::move(value); }

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline void SetTaskData(const char* value) { m_taskDataHasBeenSet = true; m_taskData.assign(value); }

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTaskData(const Aws::String& value) { SetTaskData(value); return *this;}

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTaskData(Aws::String&& value) { SetTaskData(std::move(value)); return *this;}

    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline AwsDmsReplicationTaskDetails& WithTaskData(const char* value) { SetTaskData(value); return *this;}

  private:

    Aws::String m_cdcStartPosition;
    bool m_cdcStartPositionHasBeenSet = false;

    Aws::String m_cdcStartTime;
    bool m_cdcStartTimeHasBeenSet = false;

    Aws::String m_cdcStopPosition;
    bool m_cdcStopPositionHasBeenSet = false;

    Aws::String m_migrationType;
    bool m_migrationTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet = false;

    Aws::String m_replicationTaskSettings;
    bool m_replicationTaskSettingsHasBeenSet = false;

    Aws::String m_sourceEndpointArn;
    bool m_sourceEndpointArnHasBeenSet = false;

    Aws::String m_tableMappings;
    bool m_tableMappingsHasBeenSet = false;

    Aws::String m_targetEndpointArn;
    bool m_targetEndpointArnHasBeenSet = false;

    Aws::String m_taskData;
    bool m_taskDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
