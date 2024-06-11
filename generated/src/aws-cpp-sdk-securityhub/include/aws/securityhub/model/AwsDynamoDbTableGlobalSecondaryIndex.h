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
    AWS_SECURITYHUB_API AwsDynamoDbTableGlobalSecondaryIndex();
    AWS_SECURITYHUB_API AwsDynamoDbTableGlobalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableGlobalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the index is currently backfilling.</p>
     */
    inline bool GetBackfilling() const{ return m_backfilling; }
    inline bool BackfillingHasBeenSet() const { return m_backfillingHasBeenSet; }
    inline void SetBackfilling(bool value) { m_backfillingHasBeenSet = true; m_backfilling = value; }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithBackfilling(bool value) { SetBackfilling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the index.</p>
     */
    inline const Aws::String& GetIndexArn() const{ return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    inline void SetIndexArn(const Aws::String& value) { m_indexArnHasBeenSet = true; m_indexArn = value; }
    inline void SetIndexArn(Aws::String&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::move(value); }
    inline void SetIndexArn(const char* value) { m_indexArnHasBeenSet = true; m_indexArn.assign(value); }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexArn(const Aws::String& value) { SetIndexArn(value); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexArn(Aws::String&& value) { SetIndexArn(std::move(value)); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexArn(const char* value) { SetIndexArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size in bytes of the index.</p>
     */
    inline long long GetIndexSizeBytes() const{ return m_indexSizeBytes; }
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
    inline const Aws::String& GetIndexStatus() const{ return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(const Aws::String& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline void SetIndexStatus(Aws::String&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }
    inline void SetIndexStatus(const char* value) { m_indexStatusHasBeenSet = true; m_indexStatus.assign(value); }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexStatus(const Aws::String& value) { SetIndexStatus(value); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexStatus(Aws::String&& value) { SetIndexStatus(std::move(value)); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithIndexStatus(const char* value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items in the index.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key schema for the index.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const{ return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    inline void SetKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { m_keySchemaHasBeenSet = true; m_keySchema = value; }
    inline void SetKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::move(value); }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithKeySchema(const Aws::Vector<AwsDynamoDbTableKeySchema>& value) { SetKeySchema(value); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithKeySchema(Aws::Vector<AwsDynamoDbTableKeySchema>&& value) { SetKeySchema(std::move(value)); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& AddKeySchema(const AwsDynamoDbTableKeySchema& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(value); return *this; }
    inline AwsDynamoDbTableGlobalSecondaryIndex& AddKeySchema(AwsDynamoDbTableKeySchema&& value) { m_keySchemaHasBeenSet = true; m_keySchema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes that are copied from the table into an index.</p>
     */
    inline const AwsDynamoDbTableProjection& GetProjection() const{ return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    inline void SetProjection(const AwsDynamoDbTableProjection& value) { m_projectionHasBeenSet = true; m_projection = value; }
    inline void SetProjection(AwsDynamoDbTableProjection&& value) { m_projectionHasBeenSet = true; m_projection = std::move(value); }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithProjection(const AwsDynamoDbTableProjection& value) { SetProjection(value); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithProjection(AwsDynamoDbTableProjection&& value) { SetProjection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioned throughput settings for the indexes.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }
    inline void SetProvisionedThroughput(const AwsDynamoDbTableProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }
    inline void SetProvisionedThroughput(AwsDynamoDbTableProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithProvisionedThroughput(const AwsDynamoDbTableProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}
    inline AwsDynamoDbTableGlobalSecondaryIndex& WithProvisionedThroughput(AwsDynamoDbTableProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}
    ///@}
  private:

    bool m_backfilling;
    bool m_backfillingHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    long long m_indexSizeBytes;
    bool m_indexSizeBytesHasBeenSet = false;

    Aws::String m_indexStatus;
    bool m_indexStatusHasBeenSet = false;

    int m_itemCount;
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
