/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableReplica.h>
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

AwsDynamoDbTableReplica::AwsDynamoDbTableReplica() : 
    m_globalSecondaryIndexesHasBeenSet(false),
    m_kmsMasterKeyIdHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_replicaStatusHasBeenSet(false),
    m_replicaStatusDescriptionHasBeenSet(false)
{
}

AwsDynamoDbTableReplica::AwsDynamoDbTableReplica(JsonView jsonValue) : 
    m_globalSecondaryIndexesHasBeenSet(false),
    m_kmsMasterKeyIdHasBeenSet(false),
    m_provisionedThroughputOverrideHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_replicaStatusHasBeenSet(false),
    m_replicaStatusDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableReplica& AwsDynamoDbTableReplica::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlobalSecondaryIndexes"))
  {
    Aws::Utils::Array<JsonView> globalSecondaryIndexesJsonList = jsonValue.GetArray("GlobalSecondaryIndexes");
    for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
    {
      m_globalSecondaryIndexes.push_back(globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject());
    }
    m_globalSecondaryIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsMasterKeyId"))
  {
    m_kmsMasterKeyId = jsonValue.GetString("KmsMasterKeyId");

    m_kmsMasterKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughputOverride"))
  {
    m_provisionedThroughputOverride = jsonValue.GetObject("ProvisionedThroughputOverride");

    m_provisionedThroughputOverrideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatus"))
  {
    m_replicaStatus = jsonValue.GetString("ReplicaStatus");

    m_replicaStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicaStatusDescription"))
  {
    m_replicaStatusDescription = jsonValue.GetString("ReplicaStatusDescription");

    m_replicaStatusDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableReplica::Jsonize() const
{
  JsonValue payload;

  if(m_globalSecondaryIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> globalSecondaryIndexesJsonList(m_globalSecondaryIndexes.size());
   for(unsigned globalSecondaryIndexesIndex = 0; globalSecondaryIndexesIndex < globalSecondaryIndexesJsonList.GetLength(); ++globalSecondaryIndexesIndex)
   {
     globalSecondaryIndexesJsonList[globalSecondaryIndexesIndex].AsObject(m_globalSecondaryIndexes[globalSecondaryIndexesIndex].Jsonize());
   }
   payload.WithArray("GlobalSecondaryIndexes", std::move(globalSecondaryIndexesJsonList));

  }

  if(m_kmsMasterKeyIdHasBeenSet)
  {
   payload.WithString("KmsMasterKeyId", m_kmsMasterKeyId);

  }

  if(m_provisionedThroughputOverrideHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughputOverride", m_provisionedThroughputOverride.Jsonize());

  }

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_replicaStatusHasBeenSet)
  {
   payload.WithString("ReplicaStatus", m_replicaStatus);

  }

  if(m_replicaStatusDescriptionHasBeenSet)
  {
   payload.WithString("ReplicaStatusDescription", m_replicaStatusDescription);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
