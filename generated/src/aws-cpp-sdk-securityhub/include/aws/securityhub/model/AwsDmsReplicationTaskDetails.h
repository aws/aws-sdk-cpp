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


    ///@{
    /**
     * <p> Indicates when you want a change data capture (CDC) operation to start.
     * <code>CCdcStartPosition</code> or <code>CCdcStartTime</code> specifies when you
     * want a CDC operation to start. Only a value for one of these fields is
     * included.</p>
     */
    inline const Aws::String& GetCdcStartPosition() const{ return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    inline void SetCdcStartPosition(const Aws::String& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = value; }
    inline void SetCdcStartPosition(Aws::String&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::move(value); }
    inline void SetCdcStartPosition(const char* value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithCdcStartPosition(const Aws::String& value) { SetCdcStartPosition(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithCdcStartPosition(Aws::String&& value) { SetCdcStartPosition(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithCdcStartPosition(const char* value) { SetCdcStartPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline const Aws::String& GetCdcStartTime() const{ return m_cdcStartTime; }
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }
    inline void SetCdcStartTime(const Aws::String& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = value; }
    inline void SetCdcStartTime(Aws::String&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::move(value); }
    inline void SetCdcStartTime(const char* value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithCdcStartTime(const Aws::String& value) { SetCdcStartTime(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithCdcStartTime(Aws::String&& value) { SetCdcStartTime(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithCdcStartTime(const char* value) { SetCdcStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const{ return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    inline void SetCdcStopPosition(const Aws::String& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = value; }
    inline void SetCdcStopPosition(Aws::String&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::move(value); }
    inline void SetCdcStopPosition(const char* value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithCdcStopPosition(const Aws::String& value) { SetCdcStopPosition(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithCdcStopPosition(Aws::String&& value) { SetCdcStopPosition(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithCdcStopPosition(const char* value) { SetCdcStopPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The migration type. </p>
     */
    inline const Aws::String& GetMigrationType() const{ return m_migrationType; }
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }
    inline void SetMigrationType(const Aws::String& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }
    inline void SetMigrationType(Aws::String&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }
    inline void SetMigrationType(const char* value) { m_migrationTypeHasBeenSet = true; m_migrationType.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithMigrationType(const Aws::String& value) { SetMigrationType(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithMigrationType(Aws::String&& value) { SetMigrationType(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithMigrationType(const char* value) { SetMigrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the replication task.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const{ return m_replicationTaskSettings; }
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }
    inline void SetReplicationTaskSettings(const Aws::String& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = value; }
    inline void SetReplicationTaskSettings(Aws::String&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::move(value); }
    inline void SetReplicationTaskSettings(const char* value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(const Aws::String& value) { SetReplicationTaskSettings(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(Aws::String&& value) { SetReplicationTaskSettings(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(const char* value) { SetReplicationTaskSettings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const{ return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    inline void SetSourceEndpointArn(const Aws::String& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = value; }
    inline void SetSourceEndpointArn(Aws::String&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::move(value); }
    inline void SetSourceEndpointArn(const char* value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithSourceEndpointArn(const Aws::String& value) { SetSourceEndpointArn(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithSourceEndpointArn(Aws::String&& value) { SetSourceEndpointArn(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithSourceEndpointArn(const char* value) { SetSourceEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline const Aws::String& GetTableMappings() const{ return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    inline void SetTableMappings(const Aws::String& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = value; }
    inline void SetTableMappings(Aws::String&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::move(value); }
    inline void SetTableMappings(const char* value) { m_tableMappingsHasBeenSet = true; m_tableMappings.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithTableMappings(const Aws::String& value) { SetTableMappings(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithTableMappings(Aws::String&& value) { SetTableMappings(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithTableMappings(const char* value) { SetTableMappings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const{ return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    inline void SetTargetEndpointArn(const Aws::String& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = value; }
    inline void SetTargetEndpointArn(Aws::String&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::move(value); }
    inline void SetTargetEndpointArn(const char* value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithTargetEndpointArn(const Aws::String& value) { SetTargetEndpointArn(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithTargetEndpointArn(Aws::String&& value) { SetTargetEndpointArn(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithTargetEndpointArn(const char* value) { SetTargetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline const Aws::String& GetTaskData() const{ return m_taskData; }
    inline bool TaskDataHasBeenSet() const { return m_taskDataHasBeenSet; }
    inline void SetTaskData(const Aws::String& value) { m_taskDataHasBeenSet = true; m_taskData = value; }
    inline void SetTaskData(Aws::String&& value) { m_taskDataHasBeenSet = true; m_taskData = std::move(value); }
    inline void SetTaskData(const char* value) { m_taskDataHasBeenSet = true; m_taskData.assign(value); }
    inline AwsDmsReplicationTaskDetails& WithTaskData(const Aws::String& value) { SetTaskData(value); return *this;}
    inline AwsDmsReplicationTaskDetails& WithTaskData(Aws::String&& value) { SetTaskData(std::move(value)); return *this;}
    inline AwsDmsReplicationTaskDetails& WithTaskData(const char* value) { SetTaskData(value); return *this;}
    ///@}
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
