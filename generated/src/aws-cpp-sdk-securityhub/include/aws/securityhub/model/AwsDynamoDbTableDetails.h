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
    AWS_SECURITYHUB_API AwsDynamoDbTableDetails() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& GetAttributeDefinitions() const { return m_attributeDefinitions; }
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }
    template<typename AttributeDefinitionsT = Aws::Vector<AwsDynamoDbTableAttributeDefinition>>
    void SetAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::forward<AttributeDefinitionsT>(value); }
    template<typename AttributeDefinitionsT = Aws::Vector<AwsDynamoDbTableAttributeDefinition>>
    AwsDynamoDbTableDetails& WithAttributeDefinitions(AttributeDefinitionsT&& value) { SetAttributeDefinitions(std::forward<AttributeDefinitionsT>(value)); return *this;}
    template<typename AttributeDefinitionsT = AwsDynamoDbTableAttributeDefinition>
    AwsDynamoDbTableDetails& AddAttributeDefinitions(AttributeDefinitionsT&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.emplace_back(std::forward<AttributeDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline const AwsDynamoDbTableBillingModeSummary& GetBillingModeSummary() const { return m_billingModeSummary; }
    inline bool BillingModeSummaryHasBeenSet() const { return m_billingModeSummaryHasBeenSet; }
    template<typename BillingModeSummaryT = AwsDynamoDbTableBillingModeSummary>
    void SetBillingModeSummary(BillingModeSummaryT&& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = std::forward<BillingModeSummaryT>(value); }
    template<typename BillingModeSummaryT = AwsDynamoDbTableBillingModeSummary>
    AwsDynamoDbTableDetails& WithBillingModeSummary(BillingModeSummaryT&& value) { SetBillingModeSummary(std::forward<BillingModeSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the table was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::String>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::String>
    AwsDynamoDbTableDetails& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>>
    AwsDynamoDbTableDetails& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = AwsDynamoDbTableGlobalSecondaryIndex>
    AwsDynamoDbTableDetails& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of global tables being used.</p>
     */
    inline const Aws::String& GetGlobalTableVersion() const { return m_globalTableVersion; }
    inline bool GlobalTableVersionHasBeenSet() const { return m_globalTableVersionHasBeenSet; }
    template<typename GlobalTableVersionT = Aws::String>
    void SetGlobalTableVersion(GlobalTableVersionT&& value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion = std::forward<GlobalTableVersionT>(value); }
    template<typename GlobalTableVersionT = Aws::String>
    AwsDynamoDbTableDetails& WithGlobalTableVersion(GlobalTableVersionT&& value) { SetGlobalTableVersion(std::forward<GlobalTableVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the table.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline AwsDynamoDbTableDetails& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key structure for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<AwsDynamoDbTableKeySchema>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<AwsDynamoDbTableKeySchema>>
    AwsDynamoDbTableDetails& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = AwsDynamoDbTableKeySchema>
    AwsDynamoDbTableDetails& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline const Aws::String& GetLatestStreamArn() const { return m_latestStreamArn; }
    inline bool LatestStreamArnHasBeenSet() const { return m_latestStreamArnHasBeenSet; }
    template<typename LatestStreamArnT = Aws::String>
    void SetLatestStreamArn(LatestStreamArnT&& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = std::forward<LatestStreamArnT>(value); }
    template<typename LatestStreamArnT = Aws::String>
    AwsDynamoDbTableDetails& WithLatestStreamArn(LatestStreamArnT&& value) { SetLatestStreamArn(std::forward<LatestStreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline const Aws::String& GetLatestStreamLabel() const { return m_latestStreamLabel; }
    inline bool LatestStreamLabelHasBeenSet() const { return m_latestStreamLabelHasBeenSet; }
    template<typename LatestStreamLabelT = Aws::String>
    void SetLatestStreamLabel(LatestStreamLabelT&& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = std::forward<LatestStreamLabelT>(value); }
    template<typename LatestStreamLabelT = Aws::String>
    AwsDynamoDbTableDetails& WithLatestStreamLabel(LatestStreamLabelT&& value) { SetLatestStreamLabel(std::forward<LatestStreamLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& GetLocalSecondaryIndexes() const { return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    template<typename LocalSecondaryIndexesT = Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>>
    void SetLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::forward<LocalSecondaryIndexesT>(value); }
    template<typename LocalSecondaryIndexesT = Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>>
    AwsDynamoDbTableDetails& WithLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { SetLocalSecondaryIndexes(std::forward<LocalSecondaryIndexesT>(value)); return *this;}
    template<typename LocalSecondaryIndexesT = AwsDynamoDbTableLocalSecondaryIndex>
    AwsDynamoDbTableDetails& AddLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace_back(std::forward<LocalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = AwsDynamoDbTableProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = AwsDynamoDbTableProvisionedThroughput>
    AwsDynamoDbTableDetails& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of replicas of this table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableReplica>& GetReplicas() const { return m_replicas; }
    inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }
    template<typename ReplicasT = Aws::Vector<AwsDynamoDbTableReplica>>
    void SetReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas = std::forward<ReplicasT>(value); }
    template<typename ReplicasT = Aws::Vector<AwsDynamoDbTableReplica>>
    AwsDynamoDbTableDetails& WithReplicas(ReplicasT&& value) { SetReplicas(std::forward<ReplicasT>(value)); return *this;}
    template<typename ReplicasT = AwsDynamoDbTableReplica>
    AwsDynamoDbTableDetails& AddReplicas(ReplicasT&& value) { m_replicasHasBeenSet = true; m_replicas.emplace_back(std::forward<ReplicasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the restore for the table.</p>
     */
    inline const AwsDynamoDbTableRestoreSummary& GetRestoreSummary() const { return m_restoreSummary; }
    inline bool RestoreSummaryHasBeenSet() const { return m_restoreSummaryHasBeenSet; }
    template<typename RestoreSummaryT = AwsDynamoDbTableRestoreSummary>
    void SetRestoreSummary(RestoreSummaryT&& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = std::forward<RestoreSummaryT>(value); }
    template<typename RestoreSummaryT = AwsDynamoDbTableRestoreSummary>
    AwsDynamoDbTableDetails& WithRestoreSummary(RestoreSummaryT&& value) { SetRestoreSummary(std::forward<RestoreSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline const AwsDynamoDbTableSseDescription& GetSseDescription() const { return m_sseDescription; }
    inline bool SseDescriptionHasBeenSet() const { return m_sseDescriptionHasBeenSet; }
    template<typename SseDescriptionT = AwsDynamoDbTableSseDescription>
    void SetSseDescription(SseDescriptionT&& value) { m_sseDescriptionHasBeenSet = true; m_sseDescription = std::forward<SseDescriptionT>(value); }
    template<typename SseDescriptionT = AwsDynamoDbTableSseDescription>
    AwsDynamoDbTableDetails& WithSseDescription(SseDescriptionT&& value) { SetSseDescription(std::forward<SseDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline const AwsDynamoDbTableStreamSpecification& GetStreamSpecification() const { return m_streamSpecification; }
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }
    template<typename StreamSpecificationT = AwsDynamoDbTableStreamSpecification>
    void SetStreamSpecification(StreamSpecificationT&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::forward<StreamSpecificationT>(value); }
    template<typename StreamSpecificationT = AwsDynamoDbTableStreamSpecification>
    AwsDynamoDbTableDetails& WithStreamSpecification(StreamSpecificationT&& value) { SetStreamSpecification(std::forward<StreamSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the table.</p>
     */
    inline const Aws::String& GetTableId() const { return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    template<typename TableIdT = Aws::String>
    void SetTableId(TableIdT&& value) { m_tableIdHasBeenSet = true; m_tableId = std::forward<TableIdT>(value); }
    template<typename TableIdT = Aws::String>
    AwsDynamoDbTableDetails& WithTableId(TableIdT&& value) { SetTableId(std::forward<TableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    AwsDynamoDbTableDetails& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the table in bytes.</p>
     */
    inline long long GetTableSizeBytes() const { return m_tableSizeBytes; }
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
    inline const Aws::String& GetTableStatus() const { return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    template<typename TableStatusT = Aws::String>
    void SetTableStatus(TableStatusT&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::forward<TableStatusT>(value); }
    template<typename TableStatusT = Aws::String>
    AwsDynamoDbTableDetails& WithTableStatus(TableStatusT&& value) { SetTableStatus(std::forward<TableStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether deletion protection is to be enabled (true) or disabled
     * (false) on the table. </p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
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

    int m_itemCount{0};
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

    long long m_tableSizeBytes{0};
    bool m_tableSizeBytesHasBeenSet = false;

    Aws::String m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
