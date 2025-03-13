/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughputOverride.h>
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
   * <p>Information about a global secondary index for a DynamoDB table
   * replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableReplicaGlobalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableReplicaGlobalSecondaryIndex
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableReplicaGlobalSecondaryIndex() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableReplicaGlobalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableReplicaGlobalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughputOverride& GetProvisionedThroughputOverride() const { return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    template<typename ProvisionedThroughputOverrideT = AwsDynamoDbTableProvisionedThroughputOverride>
    void SetProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::forward<ProvisionedThroughputOverrideT>(value); }
    template<typename ProvisionedThroughputOverrideT = AwsDynamoDbTableProvisionedThroughputOverride>
    AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithProvisionedThroughputOverride(ProvisionedThroughputOverrideT&& value) { SetProvisionedThroughputOverride(std::forward<ProvisionedThroughputOverrideT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    AwsDynamoDbTableProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
