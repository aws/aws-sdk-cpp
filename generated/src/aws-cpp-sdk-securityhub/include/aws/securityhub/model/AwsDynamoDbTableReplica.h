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
    AWS_SECURITYHUB_API AwsDynamoDbTableReplica() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableReplica(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableReplica& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of global secondary indexes for the replica.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>>
    void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value); }
    template<typename GlobalSecondaryIndexesT = Aws::Vector<AwsDynamoDbTableReplicaGlobalSecondaryIndex>>
    AwsDynamoDbTableReplica& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value)); return *this;}
    template<typename GlobalSecondaryIndexesT = AwsDynamoDbTableReplicaGlobalSecondaryIndex>
    AwsDynamoDbTableReplica& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace_back(std::forward<GlobalSecondaryIndexesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the KMS key that will be used for KMS encryption for the
     * replica.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const { return m_kmsMasterKeyId; }
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }
    template<typename KmsMasterKeyIdT = Aws::String>
    void SetKmsMasterKeyId(KmsMasterKeyIdT&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::forward<KmsMasterKeyIdT>(value); }
    template<typename KmsMasterKeyIdT = Aws::String>
    AwsDynamoDbTableReplica& WithKmsMasterKeyId(KmsMasterKeyIdT&& value) { SetKmsMasterKeyId(std::forward<KmsMasterKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific configuration for the provisioned throughput.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughputOverride& GetProvisionedThroughputOverride() const { return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    template<typename ProvisionedThroughputOverrideT = AwsDynamoDbTableProvisionedThroughputOverride>
    void SetProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::forward<ProvisionedThroughputOverrideT>(value); }
    template<typename ProvisionedThroughputOverrideT = AwsDynamoDbTableProvisionedThroughputOverride>
    AwsDynamoDbTableReplica& WithProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { SetProvisionedThroughputOverride(std::forward<ProvisionedThroughputOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Region where the replica is located.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    AwsDynamoDbTableReplica& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the replica. Valid values are as follows:</p> <ul> <li>
     * <p> <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATING</code> </p> </li>
     * <li> <p> <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>DELETING</code>
     * </p> </li> <li> <p> <code>UPDATING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetReplicaStatus() const { return m_replicaStatus; }
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }
    template<typename ReplicaStatusT = Aws::String>
    void SetReplicaStatus(ReplicaStatusT&& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = std::forward<ReplicaStatusT>(value); }
    template<typename ReplicaStatusT = Aws::String>
    AwsDynamoDbTableReplica& WithReplicaStatus(ReplicaStatusT&& value) { SetReplicaStatus(std::forward<ReplicaStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the replica status.</p>
     */
    inline const Aws::String& GetReplicaStatusDescription() const { return m_replicaStatusDescription; }
    inline bool ReplicaStatusDescriptionHasBeenSet() const { return m_replicaStatusDescriptionHasBeenSet; }
    template<typename ReplicaStatusDescriptionT = Aws::String>
    void SetReplicaStatusDescription(ReplicaStatusDescriptionT&& value) { m_replicaStatusDescriptionHasBeenSet = true; m_replicaStatusDescription = std::forward<ReplicaStatusDescriptionT>(value); }
    template<typename ReplicaStatusDescriptionT = Aws::String>
    AwsDynamoDbTableReplica& WithReplicaStatusDescription(ReplicaStatusDescriptionT&& value) { SetReplicaStatusDescription(std::forward<ReplicaStatusDescriptionT>(value)); return *this;}
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
