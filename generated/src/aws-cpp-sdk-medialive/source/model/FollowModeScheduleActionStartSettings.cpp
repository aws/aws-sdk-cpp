/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FollowModeScheduleActionStartSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

FollowModeScheduleActionStartSettings::FollowModeScheduleActionStartSettings() : 
    m_followPoint(FollowPoint::NOT_SET),
    m_followPointHasBeenSet(false),
    m_referenceActionNameHasBeenSet(false)
{
}

FollowModeScheduleActionStartSettings::FollowModeScheduleActionStartSettings(JsonView jsonValue) : 
    m_followPoint(FollowPoint::NOT_SET),
    m_followPointHasBeenSet(false),
    m_referenceActionNameHasBeenSet(false)
{
  *this = jsonValue;
}

FollowModeScheduleActionStartSettings& FollowModeScheduleActionStartSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("followPoint"))
  {
    m_followPoint = FollowPointMapper::GetFollowPointForName(jsonValue.GetString("followPoint"));

    m_followPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceActionName"))
  {
    m_referenceActionName = jsonValue.GetString("referenceActionName");

    m_referenceActionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FollowModeScheduleActionStartSettings::Jsonize() const
{
  JsonValue payload;

  if(m_followPointHasBeenSet)
  {
   payload.WithString("followPoint", FollowPointMapper::GetNameForFollowPoint(m_followPoint));
  }

  if(m_referenceActionNameHasBeenSet)
  {
   payload.WithString("referenceActionName", m_referenceActionName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
