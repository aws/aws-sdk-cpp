/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DataReplicationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

DataReplicationInfo::DataReplicationInfo() : 
    m_dataReplicationErrorHasBeenSet(false),
    m_dataReplicationInitiationHasBeenSet(false),
    m_dataReplicationState(DataReplicationState::NOT_SET),
    m_dataReplicationStateHasBeenSet(false),
    m_etaDateTimeHasBeenSet(false),
    m_lagDurationHasBeenSet(false),
    m_lastSnapshotDateTimeHasBeenSet(false),
    m_replicatedDisksHasBeenSet(false)
{
}

DataReplicationInfo::DataReplicationInfo(JsonView jsonValue) : 
    m_dataReplicationErrorHasBeenSet(false),
    m_dataReplicationInitiationHasBeenSet(false),
    m_dataReplicationState(DataReplicationState::NOT_SET),
    m_dataReplicationStateHasBeenSet(false),
    m_etaDateTimeHasBeenSet(false),
    m_lagDurationHasBeenSet(false),
    m_lastSnapshotDateTimeHasBeenSet(false),
    m_replicatedDisksHasBeenSet(false)
{
  *this = jsonValue;
}

DataReplicationInfo& DataReplicationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataReplicationError"))
  {
    m_dataReplicationError = jsonValue.GetObject("dataReplicationError");

    m_dataReplicationErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataReplicationInitiation"))
  {
    m_dataReplicationInitiation = jsonValue.GetObject("dataReplicationInitiation");

    m_dataReplicationInitiationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataReplicationState"))
  {
    m_dataReplicationState = DataReplicationStateMapper::GetDataReplicationStateForName(jsonValue.GetString("dataReplicationState"));

    m_dataReplicationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("etaDateTime"))
  {
    m_etaDateTime = jsonValue.GetString("etaDateTime");

    m_etaDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lagDuration"))
  {
    m_lagDuration = jsonValue.GetString("lagDuration");

    m_lagDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSnapshotDateTime"))
  {
    m_lastSnapshotDateTime = jsonValue.GetString("lastSnapshotDateTime");

    m_lastSnapshotDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatedDisks"))
  {
    Aws::Utils::Array<JsonView> replicatedDisksJsonList = jsonValue.GetArray("replicatedDisks");
    for(unsigned replicatedDisksIndex = 0; replicatedDisksIndex < replicatedDisksJsonList.GetLength(); ++replicatedDisksIndex)
    {
      m_replicatedDisks.push_back(replicatedDisksJsonList[replicatedDisksIndex].AsObject());
    }
    m_replicatedDisksHasBeenSet = true;
  }

  return *this;
}

JsonValue DataReplicationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_dataReplicationErrorHasBeenSet)
  {
   payload.WithObject("dataReplicationError", m_dataReplicationError.Jsonize());

  }

  if(m_dataReplicationInitiationHasBeenSet)
  {
   payload.WithObject("dataReplicationInitiation", m_dataReplicationInitiation.Jsonize());

  }

  if(m_dataReplicationStateHasBeenSet)
  {
   payload.WithString("dataReplicationState", DataReplicationStateMapper::GetNameForDataReplicationState(m_dataReplicationState));
  }

  if(m_etaDateTimeHasBeenSet)
  {
   payload.WithString("etaDateTime", m_etaDateTime);

  }

  if(m_lagDurationHasBeenSet)
  {
   payload.WithString("lagDuration", m_lagDuration);

  }

  if(m_lastSnapshotDateTimeHasBeenSet)
  {
   payload.WithString("lastSnapshotDateTime", m_lastSnapshotDateTime);

  }

  if(m_replicatedDisksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicatedDisksJsonList(m_replicatedDisks.size());
   for(unsigned replicatedDisksIndex = 0; replicatedDisksIndex < replicatedDisksJsonList.GetLength(); ++replicatedDisksIndex)
   {
     replicatedDisksJsonList[replicatedDisksIndex].AsObject(m_replicatedDisks[replicatedDisksIndex].Jsonize());
   }
   payload.WithArray("replicatedDisks", std::move(replicatedDisksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
