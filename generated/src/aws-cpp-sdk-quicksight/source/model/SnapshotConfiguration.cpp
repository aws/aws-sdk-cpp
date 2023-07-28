/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SnapshotConfiguration::SnapshotConfiguration() : 
    m_fileGroupsHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

SnapshotConfiguration::SnapshotConfiguration(JsonView jsonValue) : 
    m_fileGroupsHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotConfiguration& SnapshotConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileGroups"))
  {
    Aws::Utils::Array<JsonView> fileGroupsJsonList = jsonValue.GetArray("FileGroups");
    for(unsigned fileGroupsIndex = 0; fileGroupsIndex < fileGroupsJsonList.GetLength(); ++fileGroupsIndex)
    {
      m_fileGroups.push_back(fileGroupsJsonList[fileGroupsIndex].AsObject());
    }
    m_fileGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationConfiguration"))
  {
    m_destinationConfiguration = jsonValue.GetObject("DestinationConfiguration");

    m_destinationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    m_parameters = jsonValue.GetObject("Parameters");

    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileGroupsJsonList(m_fileGroups.size());
   for(unsigned fileGroupsIndex = 0; fileGroupsIndex < fileGroupsJsonList.GetLength(); ++fileGroupsIndex)
   {
     fileGroupsJsonList[fileGroupsIndex].AsObject(m_fileGroups[fileGroupsIndex].Jsonize());
   }
   payload.WithArray("FileGroups", std::move(fileGroupsJsonList));

  }

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("DestinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("Parameters", m_parameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
