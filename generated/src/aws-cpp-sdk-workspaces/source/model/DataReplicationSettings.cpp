/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DataReplicationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

DataReplicationSettings::DataReplicationSettings() : 
    m_dataReplication(DataReplication::NOT_SET),
    m_dataReplicationHasBeenSet(false),
    m_recoverySnapshotTimeHasBeenSet(false)
{
}

DataReplicationSettings::DataReplicationSettings(JsonView jsonValue) : 
    m_dataReplication(DataReplication::NOT_SET),
    m_dataReplicationHasBeenSet(false),
    m_recoverySnapshotTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationSettings& DataReplicationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataReplication"))
  {
    m_dataReplication = DataReplicationMapper::GetDataReplicationForName(jsonValue.GetString("DataReplication"));

    m_dataReplicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecoverySnapshotTime"))
  {
    m_recoverySnapshotTime = jsonValue.GetDouble("RecoverySnapshotTime");

    m_recoverySnapshotTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_dataReplicationHasBeenSet)
  {
   payload.WithString("DataReplication", DataReplicationMapper::GetNameForDataReplication(m_dataReplication));
  }

  if(m_recoverySnapshotTimeHasBeenSet)
  {
   payload.WithDouble("RecoverySnapshotTime", m_recoverySnapshotTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
