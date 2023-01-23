/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Stage.h>
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

Stage::Stage() : 
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

Stage::Stage(JsonView jsonValue) : 
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
  *this = jsonValue;
}

Stage& Stage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DurationInMinutes"))
  {
    m_durationInMinutes = jsonValue.GetInteger("DurationInMinutes");

    m_durationInMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Aws::Utils::Array<JsonView> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  return *this;
}

JsonValue Stage::Jsonize() const
{
  JsonValue payload;

  if(m_durationInMinutesHasBeenSet)
  {
   payload.WithInteger("DurationInMinutes", m_durationInMinutes);

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
