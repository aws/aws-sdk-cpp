/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsDynamoDbTableProjection.h>
#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughput.h>
#include <aws/securityhub/model/AwsDynamoDbTableKeySchema.h>
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
   * <p>Information abut a global secondary index for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableGlobalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableGlobalSecondaryIndex
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableGlobalSecondaryIndex() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableGlobalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableGlobalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the index is currently backfilling.</p>
     */
    inline bool GetBackfilling() const { return m_backfilling; }
    inline bool BackfillingHasBeenSet() const { return m_backfillingHasBeenSet; }
    inline void SetBackfilling(bool value) { m_backfillingHasBeenSet = true; m_backfilling = value; }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithBackfilling(bool value) { SetBackfilling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the index.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    AwsDynamoDbTableGlobalSecondaryIndex& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    AwsDynamoDbTableGlobalSecondaryIndex& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size in bytes of the index.</p>
     */
    inline long long GetIndexSizeBytes() const { return m_indexSizeBytes; }
    inline bool IndexSizeBytesHasBeenSet() const { return m_indexSizeBytesHasBeenSet; }
    inline void SetIndexSizeBytes(long long value) { m_indexSizeBytesHasBeenSet = true; m_indexSizeBytes = value; }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexSizeBytes(long long value) { SetIndexSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the index.</p> <ul> <li> <p> <code>ACTIVE</code> </p>
     * </li> <li> <p> <code>CREATING</code> </p> </li> <li> <p> <code>DELETING</code>
     * </p> </li> <li> <p> <code>UPDATING</code> </p> </li> </ul>
     */
    inline const Aws::String& GetIndexStatus() const { return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    template<typename IndexStatusT = Aws::String>
    void SetIndexStatus(IndexStatusT&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::forward<IndexStatusT>(value); }
    template<typename IndexStatusT = Aws::String>
    AwsDynamoDbTableGlobalSecondaryIndex& WithIndexStatus(IndexStatusT&& value) { SetIndexStatus(std::forward<IndexStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the index.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key schema for the index.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<AwsDynamoDbTableKeySchema>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<AwsDynamoDbTableKeySchema>>
    AwsDynamoDbTableGlobalSecondaryIndex& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = AwsDynamoDbTableKeySchema>
    AwsDynamoDbTableGlobalSecondaryIndex& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes that are copied from the table into an index.</p>
     */
    inline const AwsDynamoDbTableProjection& GetProjection() const { return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    template<typename ProjectionT = AwsDynamoDbTableProjection>
    void SetProjection(ProjectionT&& value) { m_projectionHasBeenSet = true; m_projection = std::forward<ProjectionT>(value); }
    template<typename ProjectionT = AwsDynamoDbTableProjection>
    AwsDynamoDbTableGlobalSecondaryIndex& WithProjection(ProjectionT&& value) { SetProjection(std::forward<ProjectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioned throughput settings for the indexes.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughput& GetProvisionedThroughput() const { return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    template<typename ProvisionedThroughputT = AwsDynamoDbTableProvisionedThroughput>
    void SetProvisionedThroughput(ProvisionedThroughputT&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::forward<ProvisionedThroughputT>(value); }
    template<typename ProvisionedThroughputT = AwsDynamoDbTableProvisionedThroughput>
    AwsDynamoDbTableGlobalSecondaryIndex& WithProvisionedThroughput(ProvisionedThroughputT&& value) { SetProvisionedThroughput(std::forward<ProvisionedThroughputT>(value)); return *this;}
    ///@}
  private:

    bool m_backfilling{false};
    bool m_backfillingHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    long long m_indexSizeBytes{0};
    bool m_indexSizeBytesHasBeenSet = false;

    Aws::String m_indexStatus;
    bool m_indexStatusHasBeenSet = false;

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableKeySchema> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    AwsDynamoDbTableProjection m_projection;
    bool m_projectionHasBeenSet = false;

    AwsDynamoDbTableProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
