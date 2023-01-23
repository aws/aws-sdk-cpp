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


    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& GetAttributeDefinitions() const{ return m_attributeDefinitions; }

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline bool AttributeDefinitionsHasBeenSet() const { return m_attributeDefinitionsHasBeenSet; }

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline void SetAttributeDefinitions(const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = value; }

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline void SetAttributeDefinitions(Aws::Vector<AwsDynamoDbTableAttributeDefinition>&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions = std::move(value); }

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithAttributeDefinitions(const Aws::Vector<AwsDynamoDbTableAttributeDefinition>& value) { SetAttributeDefinitions(value); return *this;}

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithAttributeDefinitions(Aws::Vector<AwsDynamoDbTableAttributeDefinition>&& value) { SetAttributeDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddAttributeDefinitions(const AwsDynamoDbTableAttributeDefinition& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of attribute definitions for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddAttributeDefinitions(AwsDynamoDbTableAttributeDefinition&& value) { m_attributeDefinitionsHasBeenSet = true; m_attributeDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline const AwsDynamoDbTableBillingModeSummary& GetBillingModeSummary() const{ return m_billingModeSummary; }

    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline bool BillingModeSummaryHasBeenSet() const { return m_billingModeSummaryHasBeenSet; }

    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline void SetBillingModeSummary(const AwsDynamoDbTableBillingModeSummary& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = value; }

    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline void SetBillingModeSummary(AwsDynamoDbTableBillingModeSummary&& value) { m_billingModeSummaryHasBeenSet = true; m_billingModeSummary = std::move(value); }

    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithBillingModeSummary(const AwsDynamoDbTableBillingModeSummary& value) { SetBillingModeSummary(value); return *this;}

    /**
     * <p>Information about the billing for read/write capacity on the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithBillingModeSummary(AwsDynamoDbTableBillingModeSummary&& value) { SetBillingModeSummary(std::move(value)); return *this;}


    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreationDateTime(const char* value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime.assign(value); }

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsDynamoDbTableDetails& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsDynamoDbTableDetails& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the table was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsDynamoDbTableDetails& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}


    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithGlobalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithGlobalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableGlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddGlobalSecondaryIndexes(const AwsDynamoDbTableGlobalSecondaryIndex& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>List of global secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddGlobalSecondaryIndexes(AwsDynamoDbTableGlobalSecondaryIndex&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>The version of global tables being used.</p>
     */
    inline const Aws::String& GetGlobalTableVersion() const{ return m_globalTableVersion; }

    /**
     * <p>The version of global tables being used.</p>
     */
    inline bool GlobalTableVersionHasBeenSet() const { return m_globalTableVersionHasBeenSet; }

    /**
     * <p>The version of global tables being used.</p>
     */
    inline void SetGlobalTableVersion(const Aws::String& value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion = value; }

    /**
     * <p>The version of global tables being used.</p>
     */
    inline void SetGlobalTableVersion(Aws::String&& value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion = std::move(value); }

    /**
     * <p>The version of global tables being used.</p>
     */
    inline void SetGlobalTableVersion(const char* value) { m_globalTableVersionHasBeenSet = true; m_globalTableVersion.assign(value); }

    /**
     * <p>The version of global tables being used.</p>
     */
    inline AwsDynamoDbTableDetails& WithGlobalTableVersion(const Aws::String& value) { SetGlobalTableVersion(value); return *this;}

    /**
     * <p>The version of global tables being used.</p>
     */
    inline AwsDynamoDbTableDetails& WithGlobalTableVersion(Aws::String&& value) { SetGlobalTableVersion(std::move(value)); return *this;}

    /**
     * <p>The version of global tables being used.</p>
     */
    inline AwsDynamoDbTableDetails& WithGlobalTableVersion(const char* value) { SetGlobalTableVersion(value); return *this;}


    /**
     * <p>The number of items in the table.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The number of items in the table.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>The number of items in the table.</p>
     */
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The number of items in the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>The primary key structure for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const{ return m_keySchema; }

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline void SetKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline void SetKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { SetKeySchema(value); return *this;}

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { SetKeySchema(std::move(value)); return *this;}

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddKeySchema(const AwsDynamoDbTableKeySchema& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }

    /**
     * <p>The primary key structure for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddKeySchema(AwsDynamoDbTableKeySchema&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline const Aws::String& GetLatestStreamArn() const{ return m_latestStreamArn; }

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline bool LatestStreamArnHasBeenSet() const { return m_latestStreamArnHasBeenSet; }

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline void SetLatestStreamArn(const Aws::String& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = value; }

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline void SetLatestStreamArn(Aws::String&& value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn = std::move(value); }

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline void SetLatestStreamArn(const char* value) { m_latestStreamArnHasBeenSet = true; m_latestStreamArn.assign(value); }

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithLatestStreamArn(const Aws::String& value) { SetLatestStreamArn(value); return *this;}

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithLatestStreamArn(Aws::String&& value) { SetLatestStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the latest stream for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithLatestStreamArn(const char* value) { SetLatestStreamArn(value); return *this;}


    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline const Aws::String& GetLatestStreamLabel() const{ return m_latestStreamLabel; }

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline bool LatestStreamLabelHasBeenSet() const { return m_latestStreamLabelHasBeenSet; }

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline void SetLatestStreamLabel(const Aws::String& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = value; }

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline void SetLatestStreamLabel(Aws::String&& value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel = std::move(value); }

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline void SetLatestStreamLabel(const char* value) { m_latestStreamLabelHasBeenSet = true; m_latestStreamLabel.assign(value); }

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline AwsDynamoDbTableDetails& WithLatestStreamLabel(const Aws::String& value) { SetLatestStreamLabel(value); return *this;}

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline AwsDynamoDbTableDetails& WithLatestStreamLabel(Aws::String&& value) { SetLatestStreamLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the latest stream. The label is not a unique identifier.</p>
     */
    inline AwsDynamoDbTableDetails& WithLatestStreamLabel(const char* value) { SetLatestStreamLabel(value); return *this;}


    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline void SetLocalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline void SetLocalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithLocalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>& value) { SetLocalSecondaryIndexes(value); return *this;}

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithLocalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableLocalSecondaryIndex>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddLocalSecondaryIndexes(const AwsDynamoDbTableLocalSecondaryIndex& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>The list of local secondary indexes for the table.</p>
     */
    inline AwsDynamoDbTableDetails& AddLocalSecondaryIndexes(AwsDynamoDbTableLocalSecondaryIndex&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline void SetProvisionedThroughput(const AwsDynamoDbTableProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline void SetProvisionedThroughput(AwsDynamoDbTableProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithProvisionedThroughput(const AwsDynamoDbTableProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * <p>Information about the provisioned throughput for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithProvisionedThroughput(AwsDynamoDbTableProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


    /**
     * <p>The list of replicas of this table.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableReplica>& GetReplicas() const{ return m_replicas; }

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline bool ReplicasHasBeenSet() const { return m_replicasHasBeenSet; }

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline void SetReplicas(const Aws::Vector<AwsDynamoDbTableReplica>& value) { m_replicasHasBeenSet = true; m_replicas = value; }

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline void SetReplicas(Aws::Vector<AwsDynamoDbTableReplica>&& value) { m_replicasHasBeenSet = true; m_replicas = std::move(value); }

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline AwsDynamoDbTableDetails& WithReplicas(const Aws::Vector<AwsDynamoDbTableReplica>& value) { SetReplicas(value); return *this;}

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline AwsDynamoDbTableDetails& WithReplicas(Aws::Vector<AwsDynamoDbTableReplica>&& value) { SetReplicas(std::move(value)); return *this;}

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline AwsDynamoDbTableDetails& AddReplicas(const AwsDynamoDbTableReplica& value) { m_replicasHasBeenSet = true; m_replicas.push_back(value); return *this; }

    /**
     * <p>The list of replicas of this table.</p>
     */
    inline AwsDynamoDbTableDetails& AddReplicas(AwsDynamoDbTableReplica&& value) { m_replicasHasBeenSet = true; m_replicas.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the restore for the table.</p>
     */
    inline const AwsDynamoDbTableRestoreSummary& GetRestoreSummary() const{ return m_restoreSummary; }

    /**
     * <p>Information about the restore for the table.</p>
     */
    inline bool RestoreSummaryHasBeenSet() const { return m_restoreSummaryHasBeenSet; }

    /**
     * <p>Information about the restore for the table.</p>
     */
    inline void SetRestoreSummary(const AwsDynamoDbTableRestoreSummary& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = value; }

    /**
     * <p>Information about the restore for the table.</p>
     */
    inline void SetRestoreSummary(AwsDynamoDbTableRestoreSummary&& value) { m_restoreSummaryHasBeenSet = true; m_restoreSummary = std::move(value); }

    /**
     * <p>Information about the restore for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithRestoreSummary(const AwsDynamoDbTableRestoreSummary& value) { SetRestoreSummary(value); return *this;}

    /**
     * <p>Information about the restore for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithRestoreSummary(AwsDynamoDbTableRestoreSummary&& value) { SetRestoreSummary(std::move(value)); return *this;}


    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline const AwsDynamoDbTableSseDescription& GetSseDescription() const{ return m_sseDescription; }

    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline bool SseDescriptionHasBeenSet() const { return m_sseDescriptionHasBeenSet; }

    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline void SetSseDescription(const AwsDynamoDbTableSseDescription& value) { m_sseDescriptionHasBeenSet = true; m_sseDescription = value; }

    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline void SetSseDescription(AwsDynamoDbTableSseDescription&& value) { m_sseDescriptionHasBeenSet = true; m_sseDescription = std::move(value); }

    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithSseDescription(const AwsDynamoDbTableSseDescription& value) { SetSseDescription(value); return *this;}

    /**
     * <p>Information about the server-side encryption for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithSseDescription(AwsDynamoDbTableSseDescription&& value) { SetSseDescription(std::move(value)); return *this;}


    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline const AwsDynamoDbTableStreamSpecification& GetStreamSpecification() const{ return m_streamSpecification; }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline bool StreamSpecificationHasBeenSet() const { return m_streamSpecificationHasBeenSet; }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline void SetStreamSpecification(const AwsDynamoDbTableStreamSpecification& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = value; }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline void SetStreamSpecification(AwsDynamoDbTableStreamSpecification&& value) { m_streamSpecificationHasBeenSet = true; m_streamSpecification = std::move(value); }

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithStreamSpecification(const AwsDynamoDbTableStreamSpecification& value) { SetStreamSpecification(value); return *this;}

    /**
     * <p>The current DynamoDB Streams configuration for the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithStreamSpecification(AwsDynamoDbTableStreamSpecification&& value) { SetStreamSpecification(std::move(value)); return *this;}


    /**
     * <p>The identifier of the table.</p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>The identifier of the table.</p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>The identifier of the table.</p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>The identifier of the table.</p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>The identifier of the table.</p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>The identifier of the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>The identifier of the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The total size of the table in bytes.</p>
     */
    inline long long GetTableSizeBytes() const{ return m_tableSizeBytes; }

    /**
     * <p>The total size of the table in bytes.</p>
     */
    inline bool TableSizeBytesHasBeenSet() const { return m_tableSizeBytesHasBeenSet; }

    /**
     * <p>The total size of the table in bytes.</p>
     */
    inline void SetTableSizeBytes(long long value) { m_tableSizeBytesHasBeenSet = true; m_tableSizeBytes = value; }

    /**
     * <p>The total size of the table in bytes.</p>
     */
    inline AwsDynamoDbTableDetails& WithTableSizeBytes(long long value) { SetTableSizeBytes(value); return *this;}


    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetTableStatus() const{ return m_tableStatus; }

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline void SetTableStatus(const Aws::String& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline void SetTableStatus(Aws::String&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline void SetTableStatus(const char* value) { m_tableStatusHasBeenSet = true; m_tableStatus.assign(value); }

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline AwsDynamoDbTableDetails& WithTableStatus(const Aws::String& value) { SetTableStatus(value); return *this;}

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline AwsDynamoDbTableDetails& WithTableStatus(Aws::String&& value) { SetTableStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the table. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>ARCHIVED</code> </p> </li>
     * <li> <p> <code>ARCHIVING</code> </p> </li> <li> <p> <code>CREATING</code> </p>
     * </li> <li> <p> <code>DELETING</code> </p> </li> <li> <p>
     * <code>INACCESSIBLE_ENCRYPTION_CREDENTIALS</code> </p> </li> <li> <p>
     * <code>UPDATING</code> </p> </li> </ul>
     */
    inline AwsDynamoDbTableDetails& WithTableStatus(const char* value) { SetTableStatus(value); return *this;}

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
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
