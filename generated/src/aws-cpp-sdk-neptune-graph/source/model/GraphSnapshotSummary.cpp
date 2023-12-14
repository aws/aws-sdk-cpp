/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GraphSnapshotSummary.h>
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

GraphSnapshotSummary::GraphSnapshotSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sourceGraphIdHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_status(SnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false)
{
}

GraphSnapshotSummary::GraphSnapshotSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_sourceGraphIdHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_status(SnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_kmsKeyIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

GraphSnapshotSummary& GraphSnapshotSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("sourceGraphId"))
  {
    m_sourceGraphId = jsonValue.GetString("sourceGraphId");

    m_sourceGraphIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotCreateTime"))
  {
    m_snapshotCreateTime = jsonValue.GetDouble("snapshotCreateTime");

    m_snapshotCreateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("kmsKeyIdentifier");

    m_kmsKeyIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue GraphSnapshotSummary::Jsonize() const
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

  if(m_sourceGraphIdHasBeenSet)
  {
   payload.WithString("sourceGraphId", m_sourceGraphId);

  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
   payload.WithDouble("snapshotCreateTime", m_snapshotCreateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SnapshotStatusMapper::GetNameForSnapshotStatus(m_status));
  }

  if(m_kmsKeyIdentifierHasBeenSet)
  {
   payload.WithString("kmsKeyIdentifier", m_kmsKeyIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
