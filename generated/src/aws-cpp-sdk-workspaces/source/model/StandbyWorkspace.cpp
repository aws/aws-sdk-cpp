/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/StandbyWorkspace.h>
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

StandbyWorkspace::StandbyWorkspace() : 
    m_primaryWorkspaceIdHasBeenSet(false),
    m_volumeEncryptionKeyHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dataReplication(DataReplication::NOT_SET),
    m_dataReplicationHasBeenSet(false)
{
}

StandbyWorkspace::StandbyWorkspace(JsonView jsonValue) : 
    m_primaryWorkspaceIdHasBeenSet(false),
    m_volumeEncryptionKeyHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dataReplication(DataReplication::NOT_SET),
    m_dataReplicationHasBeenSet(false)
{
  *this = jsonValue;
}

StandbyWorkspace& StandbyWorkspace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryWorkspaceId"))
  {
    m_primaryWorkspaceId = jsonValue.GetString("PrimaryWorkspaceId");

    m_primaryWorkspaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeEncryptionKey"))
  {
    m_volumeEncryptionKey = jsonValue.GetString("VolumeEncryptionKey");

    m_volumeEncryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataReplication"))
  {
    m_dataReplication = DataReplicationMapper::GetDataReplicationForName(jsonValue.GetString("DataReplication"));

    m_dataReplicationHasBeenSet = true;
  }

  return *this;
}

JsonValue StandbyWorkspace::Jsonize() const
{
  JsonValue payload;

  if(m_primaryWorkspaceIdHasBeenSet)
  {
   payload.WithString("PrimaryWorkspaceId", m_primaryWorkspaceId);

  }

  if(m_volumeEncryptionKeyHasBeenSet)
  {
   payload.WithString("VolumeEncryptionKey", m_volumeEncryptionKey);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_dataReplicationHasBeenSet)
  {
   payload.WithString("DataReplication", DataReplicationMapper::GetNameForDataReplication(m_dataReplication));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
