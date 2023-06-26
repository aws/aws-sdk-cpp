/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Plan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

Plan::Plan() : 
    m_stagesHasBeenSet(false),
    m_rotationIdsHasBeenSet(false)
{
}

Plan::Plan(JsonView jsonValue) : 
    m_stagesHasBeenSet(false),
    m_rotationIdsHasBeenSet(false)
{
  *this = jsonValue;
}

Plan& Plan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Stages"))
  {
    Aws::Utils::Array<JsonView> stagesJsonList = jsonValue.GetArray("Stages");
    for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
    {
      m_stages.push_back(stagesJsonList[stagesIndex].AsObject());
    }
    m_stagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationIds"))
  {
    Aws::Utils::Array<JsonView> rotationIdsJsonList = jsonValue.GetArray("RotationIds");
    for(unsigned rotationIdsIndex = 0; rotationIdsIndex < rotationIdsJsonList.GetLength(); ++rotationIdsIndex)
    {
      m_rotationIds.push_back(rotationIdsJsonList[rotationIdsIndex].AsString());
    }
    m_rotationIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue Plan::Jsonize() const
{
  JsonValue payload;

  if(m_stagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stagesJsonList(m_stages.size());
   for(unsigned stagesIndex = 0; stagesIndex < stagesJsonList.GetLength(); ++stagesIndex)
   {
     stagesJsonList[stagesIndex].AsObject(m_stages[stagesIndex].Jsonize());
   }
   payload.WithArray("Stages", std::move(stagesJsonList));

  }

  if(m_rotationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rotationIdsJsonList(m_rotationIds.size());
   for(unsigned rotationIdsIndex = 0; rotationIdsIndex < rotationIdsJsonList.GetLength(); ++rotationIdsIndex)
   {
     rotationIdsJsonList[rotationIdsIndex].AsString(m_rotationIds[rotationIdsIndex]);
   }
   payload.WithArray("RotationIds", std::move(rotationIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
