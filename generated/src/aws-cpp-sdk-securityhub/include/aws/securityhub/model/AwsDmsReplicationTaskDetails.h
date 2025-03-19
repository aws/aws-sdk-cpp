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
    AWS_SECURITYHUB_API AwsDmsReplicationTaskDetails() = default;
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
    inline const Aws::String& GetCdcStartPosition() const { return m_cdcStartPosition; }
    inline bool CdcStartPositionHasBeenSet() const { return m_cdcStartPositionHasBeenSet; }
    template<typename CdcStartPositionT = Aws::String>
    void SetCdcStartPosition(CdcStartPositionT&& value) { m_cdcStartPositionHasBeenSet = true; m_cdcStartPosition = std::forward<CdcStartPositionT>(value); }
    template<typename CdcStartPositionT = Aws::String>
    AwsDmsReplicationTaskDetails& WithCdcStartPosition(CdcStartPositionT&& value) { SetCdcStartPosition(std::forward<CdcStartPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the start time for a CDC operation. <code>CdcStartPosition</code>
     * or <code>CCdcStartTime</code> specifies when you want a CDC operation to start.
     * Only a value for one of these fields is included.</p>
     */
    inline const Aws::String& GetCdcStartTime() const { return m_cdcStartTime; }
    inline bool CdcStartTimeHasBeenSet() const { return m_cdcStartTimeHasBeenSet; }
    template<typename CdcStartTimeT = Aws::String>
    void SetCdcStartTime(CdcStartTimeT&& value) { m_cdcStartTimeHasBeenSet = true; m_cdcStartTime = std::forward<CdcStartTimeT>(value); }
    template<typename CdcStartTimeT = Aws::String>
    AwsDmsReplicationTaskDetails& WithCdcStartTime(CdcStartTimeT&& value) { SetCdcStartTime(std::forward<CdcStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates when you want a CDC operation to stop. The value can be either
     * server time or commit time.</p>
     */
    inline const Aws::String& GetCdcStopPosition() const { return m_cdcStopPosition; }
    inline bool CdcStopPositionHasBeenSet() const { return m_cdcStopPositionHasBeenSet; }
    template<typename CdcStopPositionT = Aws::String>
    void SetCdcStopPosition(CdcStopPositionT&& value) { m_cdcStopPositionHasBeenSet = true; m_cdcStopPosition = std::forward<CdcStopPositionT>(value); }
    template<typename CdcStopPositionT = Aws::String>
    AwsDmsReplicationTaskDetails& WithCdcStopPosition(CdcStopPositionT&& value) { SetCdcStopPosition(std::forward<CdcStopPositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The migration type. </p>
     */
    inline const Aws::String& GetMigrationType() const { return m_migrationType; }
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }
    template<typename MigrationTypeT = Aws::String>
    void SetMigrationType(MigrationTypeT&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::forward<MigrationTypeT>(value); }
    template<typename MigrationTypeT = Aws::String>
    AwsDmsReplicationTaskDetails& WithMigrationType(MigrationTypeT&& value) { SetMigrationType(std::forward<MigrationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier of the replication task.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsDmsReplicationTaskDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A display name for the resource identifier at the end of the
     * <code>EndpointArn</code> response parameter. If you don't specify a
     * <code>ResourceIdentifier</code> value, DMS generates a default identifier value
     * for the end of <code>EndpointArn</code>.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    AwsDmsReplicationTaskDetails& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a replication instance. </p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    AwsDmsReplicationTaskDetails& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user-defined replication task identifier or name.</p>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const { return m_replicationTaskIdentifier; }
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }
    template<typename ReplicationTaskIdentifierT = Aws::String>
    void SetReplicationTaskIdentifier(ReplicationTaskIdentifierT&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::forward<ReplicationTaskIdentifierT>(value); }
    template<typename ReplicationTaskIdentifierT = Aws::String>
    AwsDmsReplicationTaskDetails& WithReplicationTaskIdentifier(ReplicationTaskIdentifierT&& value) { SetReplicationTaskIdentifier(std::forward<ReplicationTaskIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The settings for the replication task.</p>
     */
    inline const Aws::String& GetReplicationTaskSettings() const { return m_replicationTaskSettings; }
    inline bool ReplicationTaskSettingsHasBeenSet() const { return m_replicationTaskSettingsHasBeenSet; }
    template<typename ReplicationTaskSettingsT = Aws::String>
    void SetReplicationTaskSettings(ReplicationTaskSettingsT&& value) { m_replicationTaskSettingsHasBeenSet = true; m_replicationTaskSettings = std::forward<ReplicationTaskSettingsT>(value); }
    template<typename ReplicationTaskSettingsT = Aws::String>
    AwsDmsReplicationTaskDetails& WithReplicationTaskSettings(ReplicationTaskSettingsT&& value) { SetReplicationTaskSettings(std::forward<ReplicationTaskSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the source endpoint.</p>
     */
    inline const Aws::String& GetSourceEndpointArn() const { return m_sourceEndpointArn; }
    inline bool SourceEndpointArnHasBeenSet() const { return m_sourceEndpointArnHasBeenSet; }
    template<typename SourceEndpointArnT = Aws::String>
    void SetSourceEndpointArn(SourceEndpointArnT&& value) { m_sourceEndpointArnHasBeenSet = true; m_sourceEndpointArn = std::forward<SourceEndpointArnT>(value); }
    template<typename SourceEndpointArnT = Aws::String>
    AwsDmsReplicationTaskDetails& WithSourceEndpointArn(SourceEndpointArnT&& value) { SetSourceEndpointArn(std::forward<SourceEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table mappings for the replication task, in JSON format.</p>
     */
    inline const Aws::String& GetTableMappings() const { return m_tableMappings; }
    inline bool TableMappingsHasBeenSet() const { return m_tableMappingsHasBeenSet; }
    template<typename TableMappingsT = Aws::String>
    void SetTableMappings(TableMappingsT&& value) { m_tableMappingsHasBeenSet = true; m_tableMappings = std::forward<TableMappingsT>(value); }
    template<typename TableMappingsT = Aws::String>
    AwsDmsReplicationTaskDetails& WithTableMappings(TableMappingsT&& value) { SetTableMappings(std::forward<TableMappingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the target endpoint.</p>
     */
    inline const Aws::String& GetTargetEndpointArn() const { return m_targetEndpointArn; }
    inline bool TargetEndpointArnHasBeenSet() const { return m_targetEndpointArnHasBeenSet; }
    template<typename TargetEndpointArnT = Aws::String>
    void SetTargetEndpointArn(TargetEndpointArnT&& value) { m_targetEndpointArnHasBeenSet = true; m_targetEndpointArn = std::forward<TargetEndpointArnT>(value); }
    template<typename TargetEndpointArnT = Aws::String>
    AwsDmsReplicationTaskDetails& WithTargetEndpointArn(TargetEndpointArnT&& value) { SetTargetEndpointArn(std::forward<TargetEndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Supplemental information that the task requires to migrate the data for
     * certain source and target endpoints.</p>
     */
    inline const Aws::String& GetTaskData() const { return m_taskData; }
    inline bool TaskDataHasBeenSet() const { return m_taskDataHasBeenSet; }
    template<typename TaskDataT = Aws::String>
    void SetTaskData(TaskDataT&& value) { m_taskDataHasBeenSet = true; m_taskData = std::forward<TaskDataT>(value); }
    template<typename TaskDataT = Aws::String>
    AwsDmsReplicationTaskDetails& WithTaskData(TaskDataT&& value) { SetTaskData(std::forward<TaskDataT>(value)); return *this;}
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
