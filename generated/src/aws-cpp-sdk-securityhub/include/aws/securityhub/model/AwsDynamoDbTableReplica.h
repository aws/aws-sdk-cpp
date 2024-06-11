/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughputOverride.h>
#include <aws/securityhub/model/AwsDynamoDbTableReplicaGlobalSecondaryIndex.h>
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
   * <p>Information about a replica of a DynamoDB table.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableReplica">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableReplica
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableReplica();
    AWS_SECURITYHUB_API AwsDynamoDbTableReplica(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableReplica& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of global secondary indexes for the replica.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }
    inline void SetGlobalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }
    inline AwsDynamoDbTableReplica& WithGlobalSecondaryIndexes(const Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>& value) { SetGlobalSecondaryIndexes(value); return *this;}
    inline AwsDynamoDbTableReplica& WithGlobalSecondaryIndexes(Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}
    inline AwsDynamoDbTableReplica& AddGlobalSecondaryIndexes(const AwsDynamoDbTableReplicaGlobalSecondaryIndex& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }
    inline AwsDynamoDbTableReplica& AddGlobalSecondaryIndexes(AwsDynamoDbTableReplicaGlobalSecondaryIndex&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key that will be used for KMS encryption for the
     * replica.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const{ return m_kmsMasterKeyId; }
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }
    inline void SetKmsMasterKeyId(const Aws::String& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = value; }
    inline void SetKmsMasterKeyId(Aws::String&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::move(value); }
    inline void SetKmsMasterKeyId(const char* value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId.assign(value); }
    inline AwsDynamoDbTableReplica& WithKmsMasterKeyId(const Aws::String& value) { SetKmsMasterKeyId(value); return *this;}
    inline AwsDynamoDbTableReplica& WithKmsMasterKeyId(Aws::String&& value) { SetKmsMasterKeyId(std::move(value)); return *this;}
    inline AwsDynamoDbTableReplica& WithKmsMasterKeyId(const char* value) { SetKmsMasterKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific configuration for the provisioned throughput.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    inline void SetProvisionedThroughputOverride(const AwsDynamoDbTableProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }
    inline void SetProvisionedThroughputOverride(AwsDynamoDbTableProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }
    inline AwsDynamoDbTableReplica& WithProvisionedThroughputOverride(const AwsDynamoDbTableProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}
    inline AwsDynamoDbTableReplica& WithProvisionedThroughputOverride(AwsDynamoDbTableProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region where the replica is located.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }
    inline AwsDynamoDbTableReplica& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline AwsDynamoDbTableReplica& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline AwsDynamoDbTableReplica& WithRegionName(const char* value) { SetRegionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the replica. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATING</code> </p> </li>
     * <li> <p> <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>DELETING</code>
     * </p> </li> <li> <p> <code>UPDATING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetReplicaStatus() const{ return m_replicaStatus; }
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }
    inline void SetReplicaStatus(const Aws::String& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }
    inline void SetReplicaStatus(Aws::String&& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = std::move(value); }
    inline void SetReplicaStatus(const char* value) { m_replicaStatusHasBeenSet = true; m_replicaStatus.assign(value); }
    inline AwsDynamoDbTableReplica& WithReplicaStatus(const Aws::String& value) { SetReplicaStatus(value); return *this;}
    inline AwsDynamoDbTableReplica& WithReplicaStatus(Aws::String&& value) { SetReplicaStatus(std::move(value)); return *this;}
    inline AwsDynamoDbTableReplica& WithReplicaStatus(const char* value) { SetReplicaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline const Aws::String& GetReplicaStatusDescription() const{ return m_replicaStatusDescription; }
    inline bool ReplicaStatusDescriptionHasBeenSet() const { return m_replicaStatusDescriptionHasBeenSet; }
    inline void SetReplicaStatusDescription(const Aws::String& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = value; }
    inline void SetReplicaStatusDescription(Aws::String&& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = std::move(value); }
    inline void SetReplicaStatusDescription(const char* value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription.assign(value); }
    inline AwsDynamoDbTableReplica& WithReplicaStatusDescription(const Aws::String& value) { SetReplicaStatusDescription(value); return *this;}
    inline AwsDynamoDbTableReplica& WithReplicaStatusDescription(Aws::String&& value) { SetReplicaStatusDescription(std::move(value)); return *this;}
    inline AwsDynamoDbTableReplica& WithReplicaStatusDescription(const char* value) { SetReplicaStatusDescription(value); return *this;}
    ///@}
  private:

    Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet = false;

    AwsDynamoDbTableProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_replicaStatus;
    bool m_replicaStatusHasBeenSet = false;

    Aws::String m_replicaStatusDescription;
    bool m_replicaStatusDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
