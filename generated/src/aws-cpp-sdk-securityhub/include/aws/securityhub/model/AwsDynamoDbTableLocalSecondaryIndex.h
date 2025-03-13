/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsDynamoDbTableProjection.h>
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
   * <p>Information about a local secondary index for a DynamoDB table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableLocalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableLocalSecondaryIndex
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableLocalSecondaryIndex() = default;
    AWS_SECURITYHUB_API AwsDynamoDbTableLocalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableLocalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the index.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    AwsDynamoDbTableLocalSecondaryIndex& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
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
    AwsDynamoDbTableLocalSecondaryIndex& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The complete key schema for the index.</p>
     */
    inline const Aws::Vector<AwsDynamoDbTableKeySchema>& GetKeySchema() const { return m_keySchema; }
    inline bool KeySchemaHasBeenSet() const { return m_keySchemaHasBeenSet; }
    template<typename KeySchemaT = Aws::Vector<AwsDynamoDbTableKeySchema>>
    void SetKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema = std::forward<KeySchemaT>(value); }
    template<typename KeySchemaT = Aws::Vector<AwsDynamoDbTableKeySchema>>
    AwsDynamoDbTableLocalSecondaryIndex& WithKeySchema(KeySchemaT&& value) { SetKeySchema(std::forward<KeySchemaT>(value)); return *this;}
    template<typename KeySchemaT = AwsDynamoDbTableKeySchema>
    AwsDynamoDbTableLocalSecondaryIndex& AddKeySchema(KeySchemaT&& value) { m_keySchemaHasBeenSet = true; m_keySchema.emplace_back(std::forward<KeySchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes that are copied from the table into the index. These are in
     * addition to the primary key attributes and index key attributes, which are
     * automatically projected.</p>
     */
    inline const AwsDynamoDbTableProjection& GetProjection() const { return m_projection; }
    inline bool ProjectionHasBeenSet() const { return m_projectionHasBeenSet; }
    template<typename ProjectionT = AwsDynamoDbTableProjection>
    void SetProjection(ProjectionT&& value) { m_projectionHasBeenSet = true; m_projection = std::forward<ProjectionT>(value); }
    template<typename ProjectionT = AwsDynamoDbTableProjection>
    AwsDynamoDbTableLocalSecondaryIndex& WithProjection(ProjectionT&& value) { SetProjection(std::forward<ProjectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<AwsDynamoDbTableKeySchema> m_keySchema;
    bool m_keySchemaHasBeenSet = false;

    AwsDynamoDbTableProjection m_projection;
    bool m_projectionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
