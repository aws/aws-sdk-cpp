/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GraphSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

GraphSummary::GraphSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(GraphStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_provisionedMemory(0),
    m_provisionedMemoryHasBeenSet(false),
    m_publicConnectivity(false),
    m_publicConnectivityHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false)
{
}

GraphSummary::GraphSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_status(GraphStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_provisionedMemory(0),
    m_provisionedMemoryHasBeenSet(false),
    m_publicConnectivity(false),
    m_publicConnectivityHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_replicaCount(0),
    m_replicaCountHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false)
{
  *this = jsonValue;
}

GraphSummary& GraphSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = GraphStatusMapper::GetGraphStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisionedMemory"))
  {
    m_provisionedMemory = jsonValue.GetInteger("provisionedMemory");

    m_provisionedMemoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publicConnectivity"))
  {
    m_publicConnectivity = jsonValue.GetBool("publicConnectivity");

    m_publicConnectivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicaCount"))
  {
    m_replicaCount = jsonValue.GetInteger("replicaCount");

    m_replicaCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");

    m_kmsKeyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deletionProtection"))
  {
    m_deletionProtection = jsonValue.GetBool("deletionProtection");

    m_deletionProtectionHasBeenSet = true;
  }

  return *this;
}

JsonValue GraphSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GraphStatusMapper::GetNameForGraphStatus(m_status));
  }

  if(m_provisionedMemoryHasBeenSet)
  {
   payload.WithInteger("provisionedMemory", m_provisionedMemory);

  }

  if(m_publicConnectivityHasBeenSet)
  {
   payload.WithBool("publicConnectivity", m_publicConnectivity);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_replicaCountHasBeenSet)
  {
   payload.WithInteger("replicaCount", m_replicaCount);

  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("deletionProtection", m_deletionProtection);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
