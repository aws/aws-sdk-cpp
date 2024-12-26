/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsDynamoDbTableBillingModeSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughput.h>
#include <aws/securityhub/model/AwsDynamoDbTableRestoreSummary.h>
#include <aws/securityhub/model/AwsDynamoDbTableSseDescription.h>
#include <aws/securityhub/model/AwsDynamoDbTableStreamSpecification.h>
#include <aws/securityhub/model/AwsDynamoDbTableAttributeDefinition.h>
#include <aws/securityhub/model/AwsDynamoDbTableGlobalSecondaryIndex.h>
#include <aws/securityhub/model/AwsDynamoDbTableKeySchema.h>
#include <aws/securityhub/model/AwsDynamoDbTableLocalSecondaryIndex.h>
#include <aws/securityhub/model/AwsDynamoDbTableReplica.h>
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
   * <p>Provides details about a DynamoDB table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableDetails">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableDetails
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableDetails();
    AWS_SECURITYHUB_API AwsDynamoDbTableDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }
    inline void SetAttributeDefinitions(const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }
    inline void SetAttributeDefinitions(Aws::Vector<AwsDynamoDbTableAttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }
    inline AwsDynamoDbTableDetails& WithAttributeDefinitions(const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}
    inline AwsDynamoDbTableDetails& WithAttributeDefinitions(Aws::Vector<AwsDynamoDbTableAttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& AddAttributeDefinitions(const AwsDynamoDbTableAttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }
    inline AwsDynamoDbTableDetails& AddAttributeDefinitions(AwsDynamoDbTableAttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline const AwsDynamoDbTableBillingModeSummary& GetBillingModeSummary() const{ return m_billingModeSummary; }
    inline bool BillingModeSummaryHasBeenSet() const { return m_billingModeSummaryHasBeenSet; }
    inline void SetBillingModeSummary(const AwsDynamoDbTableBillingModeSummary& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = value; }
    inline void SetBillingModeSummary(AwsDynamoDbTableBillingModeSummary&& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = std::move(value); }
    inline AwsDynamoDbTableDetails& WithBillingModeSummary(const AwsDynamoDbTableBillingModeSummary& value) { SetBillingModeSummary(value); return *this;}
    inline AwsDynamoDbTableDetails& WithBillingModeSummary(AwsDynamoDbTableBillingModeSummary&& value) { SetBillingModeSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the table was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }
    inline AwsDynamoDbTableDetails& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}
    inline AwsDynamoDbTableDetails& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }
    inline void SetGlobalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }
    inline AwsDynamoDbTableDetails& WithGlobalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexes(value); return *this;}
    inline AwsDynamoDbTableDetails& WithGlobalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& AddGlobalSecondaryIndexes(const AwsDynamoDbTableGlobalSecondaryIndex& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }
    inline AwsDynamoDbTableDetails& AddGlobalSecondaryIndexes(AwsDynamoDbTableGlobalSecondaryIndex&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of global tables being used.</p>
     */
    inline const Aws::String& GetGlobalTableVersion() const{ return m_globalTableVersion; }
    inline bool GlobalTableVersionHasBeenSet() const { return m_globalTableVersionHasBeenSet; }
    inline void SetGlobalTableVersion(const Aws::String& value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion = value; }
    inline void SetGlobalTableVersion(Aws::String&& value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion = std::move(value); }
    inline void SetGlobalTableVersion(const char* value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion.assign(value); }
    inline AwsDynamoDbTableDetails& WithGlobalTableVersion(const Aws::String& value) { SetGlobalTableVersion(value); return *this;}
    inline AwsDynamoDbTableDetails& WithGlobalTableVersion(Aws::String&& value) { SetGlobalTableVersion(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithGlobalTableVersion(const char* value) { SetGlobalTableVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the table.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline AwsDynamoDbTableDetails& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key structure for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline AwsDynamoDbTableDetails& WithKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { SetKeySchema(value); return *this;}
    inline AwsDynamoDbTableDetails& WithKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { SetKeySchema(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& AddKeySchema(const AwsDynamoDbTableKeySchema& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }
    inline AwsDynamoDbTableDetails& AddKeySchema(AwsDynamoDbTableKeySchema&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline const Aws::String& GetLatestStreamArn() const{ return m_latestStreamArn; }
    inline bool LatestStreamArnHasBeenSet() const { return m_latestStreamArnHasBeenSet; }
    inline void SetLatestStreamArn(const Aws::String& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = value; }
    inline void SetLatestStreamArn(Aws::String&& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = std::move(value); }
    inline void SetLatestStreamArn(const char* value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn.assign(value); }
    inline AwsDynamoDbTableDetails& WithLatestStreamArn(const Aws::String& value) { SetLatestStreamArn(value); return *this;}
    inline AwsDynamoDbTableDetails& WithLatestStreamArn(Aws::String&& value) { SetLatestStreamArn(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithLatestStreamArn(const char* value) { SetLatestStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline const Aws::String& GetLatestStreamLabel() const{ return m_latestStreamLabel; }
    inline bool LatestStreamLabelHasBeenSet() const { return m_latestStreamLabelHasBeenSet; }
    inline void SetLatestStreamLabel(const Aws::String& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = value; }
    inline void SetLatestStreamLabel(Aws::String&& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = std::move(value); }
    inline void SetLatestStreamLabel(const char* value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel.assign(value); }
    inline AwsDynamoDbTableDetails& WithLatestStreamLabel(const Aws::String& value) { SetLatestStreamLabel(value); return *this;}
    inline AwsDynamoDbTableDetails& WithLatestStreamLabel(Aws::String&& value) { SetLatestStreamLabel(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithLatestStreamLabel(const char* value) { SetLatestStreamLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    inline void SetLocalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }
    inline void SetLocalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }
    inline AwsDynamoDbTableDetails& WithLocalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& value) { SetLocalSecondaryIndexes(value); return *this;}
    inline AwsDynamoDbTableDetails& WithLocalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& AddLocalSecondaryIndexes(const AwsDynamoDbTableLocalSecondaryIndex& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(value); return *this; }
    inline AwsDynamoDbTableDetails& AddLocalSecondaryIndexes(AwsDynamoDbTableLocalSecondaryIndex&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const AwsDynamoDbTableProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(AwsDynamoDbTableProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline AwsDynamoDbTableDetails& WithProvisionedThroughput(const AwsDynamoDbTableProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline AwsDynamoDbTableDetails& WithProvisionedThroughput(AwsDynamoDbTableProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of replicas of this table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableReplica>& GetReplicas() const{ return m_replicas; }
    inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }
    inline void SetReplicas(const Aws::Vector<AwsDynamoDbTableReplica>& value) { m_replicasHasBeenSet = true; m_replicas = value; }
    inline void SetReplicas(Aws::Vector<AwsDynamoDbTableReplica>&& value) { m_replicasHasBeenSet = true; m_replicas = std::move(value); }
    inline AwsDynamoDbTableDetails& WithReplicas(const Aws::Vector<AwsDynamoDbTableReplica>& value) { SetReplicas(value); return *this;}
    inline AwsDynamoDbTableDetails& WithReplicas(Aws::Vector<AwsDynamoDbTableReplica>&& value) { SetReplicas(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& AddReplicas(const AwsDynamoDbTableReplica& value) { m_replicasHasBeenSet = true; m_replicas.push_back(value); return *this; }
    inline AwsDynamoDbTableDetails& AddReplicas(AwsDynamoDbTableReplica&& value) { m_replicasHasBeenSet = true; m_replicas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the restore for the table.</p>
     */
    inline const AwsDynamoDbTableRestoreSummary& GetRestoreSummary() const{ return m_restoreSummary; }
    inline bool RestoreSummaryHasBeenSet() const { return m_restoreSummaryHasBeenSet; }
    inline void SetRestoreSummary(const AwsDynamoDbTableRestoreSummary& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = value; }
    inline void SetRestoreSummary(AwsDynamoDbTableRestoreSummary&& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = std::move(value); }
    inline AwsDynamoDbTableDetails& WithRestoreSummary(const AwsDynamoDbTableRestoreSummary& value) { SetRestoreSummary(value); return *this;}
    inline AwsDynamoDbTableDetails& WithRestoreSummary(AwsDynamoDbTableRestoreSummary&& value) { SetRestoreSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline const AwsDynamoDbTableSseDescription& GetSseDescription() const{ return m_sseDescription; }
    inline bool SseDescriptionHasBeenSet() const { return m_sseDescriptionHasBeenSet; }
    inline void SetSseDescription(const AwsDynamoDbTableSseDescription& value) { m_sseDescriptionHasBeenSet = true; m_sseDescription = value; }
    inline void SetSseDescription(AwsDynamoDbTableSseDescription&& value) { m_sseDescriptionHasBeenSet = true; m_sseDescription = std::move(value); }
    inline AwsDynamoDbTableDetails& WithSseDescription(const AwsDynamoDbTableSseDescription& value) { SetSseDescription(value); return *this;}
    inline AwsDynamoDbTableDetails& WithSseDescription(AwsDynamoDbTableSseDescription&& value) { SetSseDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline const AwsDynamoDbTableStreamSpecification& GetStreamSpecification() const{ return m_streamSpecification; }
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }
    inline void SetStreamSpecification(const AwsDynamoDbTableStreamSpecification& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = value; }
    inline void SetStreamSpecification(AwsDynamoDbTableStreamSpecification&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::move(value); }
    inline AwsDynamoDbTableDetails& WithStreamSpecification(const AwsDynamoDbTableStreamSpecification& value) { SetStreamSpecification(value); return *this;}
    inline AwsDynamoDbTableDetails& WithStreamSpecification(AwsDynamoDbTableStreamSpecification&& value) { SetStreamSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the table.</p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }
    inline AwsDynamoDbTableDetails& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}
    inline AwsDynamoDbTableDetails& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithTableId(const char* value) { SetTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline AwsDynamoDbTableDetails& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline AwsDynamoDbTableDetails& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the table in bytes.</p>
     */
    inline long long GetTableSizeBytes() const{ return m_tableSizeBytes; }
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }
    inline AwsDynamoDbTableDetails& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTableStatus() const{ return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    inline void SetTableStatus(const Aws::String& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }
    inline void SetTableStatus(Aws::String&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }
    inline void SetTableStatus(const char* value) { m_tableStatusHasBeenSet = true; m_tableStatus.assign(value); }
    inline AwsDynamoDbTableDetails& WithTableStatus(const Aws::String& value) { SetTableStatus(value); return *this;}
    inline AwsDynamoDbTableDetails& WithTableStatus(Aws::String&& value) { SetTableStatus(std::move(value)); return *this;}
    inline AwsDynamoDbTableDetails& WithTableStatus(const char* value) { SetTableStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table. </p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline AwsDynamoDbTableDetails& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<AwsDynamoDbTableAttributeDefinition> m_attributeDefinitions;
    bool m_attributeDefinitionsHasBeenSet = false;

    AwsDynamoDbTableBillingModeSummary m_billingModeSummary;
    bool m_billingModeSummaryHasBeenSet = false;

    Aws::String m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    Aws::String m_globalTableVersion;
    bool m_globalTableVersionHasBeenSet = false;

    int m_itemCount;
    bool m_itemCountHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableKeySchema> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    Aws::String m_latestStreamArn;
    bool m_latestStreamArnHasBeenSet = false;

    Aws::String m_latestStreamLabel;
    bool m_latestStreamLabelHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet = false;

    AwsDynamoDbTableProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableReplica> m_replicas;
    bool m_replicasHasBeenSet = false;

    AwsDynamoDbTableRestoreSummary m_restoreSummary;
    bool m_restoreSummaryHasBeenSet = false;

    AwsDynamoDbTableSseDescription m_sseDescription;
    bool m_sseDescriptionHasBeenSet = false;

    AwsDynamoDbTableStreamSpecification m_streamSpecification;
    bool m_streamSpecificationHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    long long m_tableSizeBytes;
    bool m_tableSizeBytesHasBeenSet = false;

    Aws::String m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
