/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataLakeDataset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

DataLakeDataset::DataLakeDataset(JsonView jsonValue)
{
  *this = jsonValue;
}

DataLakeDataset& DataLakeDataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetObject("schema");
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("partitionSpec"))
  {
    m_partitionSpec = jsonValue.GetObject("partitionSpec");
    m_partitionSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataLakeDataset::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithObject("schema", m_schema.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_partitionSpecHasBeenSet)
  {
   payload.WithObject("partitionSpec", m_partitionSpec.Jsonize());

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("lastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
