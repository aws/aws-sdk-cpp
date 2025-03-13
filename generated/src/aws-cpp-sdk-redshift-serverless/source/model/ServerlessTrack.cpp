/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ServerlessTrack.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

ServerlessTrack::ServerlessTrack(JsonView jsonValue)
{
  *this = jsonValue;
}

ServerlessTrack& ServerlessTrack::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("trackName"))
  {
    m_trackName = jsonValue.GetString("trackName");
    m_trackNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTargets"))
  {
    Aws::Utils::Array<JsonView> updateTargetsJsonList = jsonValue.GetArray("updateTargets");
    for(unsigned updateTargetsIndex = 0; updateTargetsIndex < updateTargetsJsonList.GetLength(); ++updateTargetsIndex)
    {
      m_updateTargets.push_back(updateTargetsJsonList[updateTargetsIndex].AsObject());
    }
    m_updateTargetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workgroupVersion"))
  {
    m_workgroupVersion = jsonValue.GetString("workgroupVersion");
    m_workgroupVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerlessTrack::Jsonize() const
{
  JsonValue payload;

  if(m_trackNameHasBeenSet)
  {
   payload.WithString("trackName", m_trackName);

  }

  if(m_updateTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> updateTargetsJsonList(m_updateTargets.size());
   for(unsigned updateTargetsIndex = 0; updateTargetsIndex < updateTargetsJsonList.GetLength(); ++updateTargetsIndex)
   {
     updateTargetsJsonList[updateTargetsIndex].AsObject(m_updateTargets[updateTargetsIndex].Jsonize());
   }
   payload.WithArray("updateTargets", std::move(updateTargetsJsonList));

  }

  if(m_workgroupVersionHasBeenSet)
  {
   payload.WithString("workgroupVersion", m_workgroupVersion);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
