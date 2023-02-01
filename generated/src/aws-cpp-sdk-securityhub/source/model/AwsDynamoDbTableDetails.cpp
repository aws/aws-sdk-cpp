/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDynamoDbTableDetails::AwsDynamoDbTableDetails() : 
    m_attributeDefinitionsHasBeenSet(false),
    m_billingModeSummaryHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_globalTableVersionHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_latestStreamArnHasBeenSet(false),
    m_latestStreamLabelHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_restoreSummaryHasBeenSet(false),
    m_sseDescriptionHasBeenSet(false),
    m_streamSpecificationHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_tableStatusHasBeenSet(false)
{
}

AwsDynamoDbTableDetails::AwsDynamoDbTableDetails(JsonView jsonValue) : 
    m_attributeDefinitionsHasBeenSet(false),
    m_billingModeSummaryHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_globalSecondaryIndexesHasBeenSet(false),
    m_globalTableVersionHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_keySchemaHasBeenSet(false),
    m_latestStreamArnHasBeenSet(false),
    m_latestStreamLabelHasBeenSet(false),
    m_localSecondaryIndexesHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_restoreSummaryHasBeenSet(false),
    m_sseDescriptionHasBeenSet(false),
    m_streamSpecificationHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableSizeBytes(0),
    m_tableSizeBytesHasBeenSet(false),
    m_tableStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableDetails& AwsDynamoDbTableDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeDefinitions"))
  {
    Aws::Utils::Array<JsonView> attributeDefinitionsJsonList = jsonValue.GetArray("AttributeDefinitions");
    for(unsigned attributeDefinitionsIndex = 0; attributeDefinitionsIndex < attributeDefinitionsJsonList.GetLength(); ++attributeDefinitionsIndex)
    {
      m_attributeDefinitions.push_back(attributeDefinitionsJsonList[attributeDefinitionsIndex].AsObject());
    }
    m_attributeDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingModeSummary"))
  {
    m_billingModeSummary = jsonValue.GetObject("BillingModeSummary");

    m_billingModeSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetString("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Aws::Utils::Array<JsonView> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalTableVersion"))
  {
    m_globalTableVersion = jsonValue.GetString("GlobalTableVersion");

    m_globalTableVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInteger("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeySchema"))
  {
    Aws::Utils::Array<JsonView> keySchemaJsonList = jsonValue.GetArray("KeySchema");
    for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
    {
      m_keySchema.push_back(keySchemaJsonList[keySchemaIndex].AsObject());
    }
    m_keySchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestStreamArn"))
  {
    m_latestStreamArn = jsonValue.GetString("LatestStreamArn");

    m_latestStreamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestStreamLabel"))
  {
    m_latestStreamLabel = jsonValue.GetString("LatestStreamLabel");

    m_latestStreamLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalSecondaryIndexes"))
  {
    Aws::Utils::Array<JsonView> localSecondaryIndexesJsonList = jsonValue.GetArray("LocalSecondaryIndexes");
    for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
    {
      m_localSecondaryIndexes.push_back(localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject());
    }
    m_localSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");

    m_provisionedThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Replicas"))
  {
    Aws::Utils::Array<JsonView> replicasJsonList = jsonValue.GetArray("Replicas");
    for(unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex)
    {
      m_replicas.push_back(replicasJsonList[replicasIndex].AsObject());
    }
    m_replicasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreSummary"))
  {
    m_restoreSummary = jsonValue.GetObject("RestoreSummary");

    m_restoreSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SseDescription"))
  {
    m_sseDescription = jsonValue.GetObject("SseDescription");

    m_sseDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamSpecification"))
  {
    m_streamSpecification = jsonValue.GetObject("StreamSpecification");

    m_streamSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableId"))
  {
    m_tableId = jsonValue.GetString("TableId");

    m_tableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableSizeBytes"))
  {
    m_tableSizeBytes = jsonValue.GetInt64("TableSizeBytes");

    m_tableSizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableStatus"))
  {
    m_tableStatus = jsonValue.GetString("TableStatus");

    m_tableStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableDetails::Jsonize() const
{
  JsonValue payload;

  if(m_attributeDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeDefinitionsJsonList(m_attributeDefinitions.size());
   for(unsigned attributeDefinitionsIndex = 0; attributeDefinitionsIndex < attributeDefinitionsJsonList.GetLength(); ++attributeDefinitionsIndex)
   {
     attributeDefinitionsJsonList[attributeDefinitionsIndex].AsObject(m_attributeDefinitions[attributeDefinitionsIndex].Jsonize());
   }
   payload.WithArray("AttributeDefinitions", std::move(attributeDefinitionsJsonList));

  }

  if(m_billingModeSummaryHasBeenSet)
  {
   payload.WithObject("BillingModeSummary", m_billingModeSummary.Jsonize());

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithString("CreationDateTime", m_creationDateTime);

  }

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  if(m_globalTableVersionHasBeenSet)
  {
   payload.WithString("GlobalTableVersion", m_globalTableVersion);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("ItemCount", m_itemCount);

  }

  if(m_keySchemaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keySchemaJsonList(m_keySchema.size());
   for(unsigned keySchemaIndex = 0; keySchemaIndex < keySchemaJsonList.GetLength(); ++keySchemaIndex)
   {
     keySchemaJsonList[keySchemaIndex].AsObject(m_keySchema[keySchemaIndex].Jsonize());
   }
   payload.WithArray("KeySchema", std::move(keySchemaJsonList));

  }

  if(m_latestStreamArnHasBeenSet)
  {
   payload.WithString("LatestStreamArn", m_latestStreamArn);

  }

  if(m_latestStreamLabelHasBeenSet)
  {
   payload.WithString("LatestStreamLabel", m_latestStreamLabel);

  }

  if(m_localSecondaryIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localSecondaryIndexesJsonList(m_localSecondaryIndexes.size());
   for(unsigned localSecondaryIndexesIndex = 0; localSecondaryIndexesIndex < localSecondaryIndexesJsonList.GetLength(); ++localSecondaryIndexesIndex)
   {
     localSecondaryIndexesJsonList[localSecondaryIndexesIndex].AsObject(m_localSecondaryIndexes[localSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("LocalSecondaryIndexes", std::move(localSecondaryIndexesJsonList));

  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  if(m_replicasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicasJsonList(m_replicas.size());
   for(unsigned replicasIndex = 0; replicasIndex < replicasJsonList.GetLength(); ++replicasIndex)
   {
     replicasJsonList[replicasIndex].AsObject(m_replicas[replicasIndex].Jsonize());
   }
   payload.WithArray("Replicas", std::move(replicasJsonList));

  }

  if(m_restoreSummaryHasBeenSet)
  {
   payload.WithObject("RestoreSummary", m_restoreSummary.Jsonize());

  }

  if(m_sseDescriptionHasBeenSet)
  {
   payload.WithObject("SseDescription", m_sseDescription.Jsonize());

  }

  if(m_streamSpecificationHasBeenSet)
  {
   payload.WithObject("StreamSpecification", m_streamSpecification.Jsonize());

  }

  if(m_tableIdHasBeenSet)
  {
   payload.WithString("TableId", m_tableId);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_tableSizeBytesHasBeenSet)
  {
   payload.WithInt64("TableSizeBytes", m_tableSizeBytes);

  }

  if(m_tableStatusHasBeenSet)
  {
   payload.WithString("TableStatus", m_tableStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
