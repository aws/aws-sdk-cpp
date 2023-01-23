/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/VideoDescription.h>
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

VideoDescription::VideoDescription() : 
    m_codecSettingsHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_respondToAfd(VideoDescriptionRespondToAfd::NOT_SET),
    m_respondToAfdHasBeenSet(false),
    m_scalingBehavior(VideoDescriptionScalingBehavior::NOT_SET),
    m_scalingBehaviorHasBeenSet(false),
    m_sharpness(0),
    m_sharpnessHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
}

VideoDescription::VideoDescription(JsonView jsonValue) : 
    m_codecSettingsHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_respondToAfd(VideoDescriptionRespondToAfd::NOT_SET),
    m_respondToAfdHasBeenSet(false),
    m_scalingBehavior(VideoDescriptionScalingBehavior::NOT_SET),
    m_scalingBehaviorHasBeenSet(false),
    m_sharpness(0),
    m_sharpnessHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

VideoDescription& VideoDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codecSettings"))
  {
    m_codecSettings = jsonValue.GetObject("codecSettings");

    m_codecSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("respondToAfd"))
  {
    m_respondToAfd = VideoDescriptionRespondToAfdMapper::GetVideoDescriptionRespondToAfdForName(jsonValue.GetString("respondToAfd"));

    m_respondToAfdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scalingBehavior"))
  {
    m_scalingBehavior = VideoDescriptionScalingBehaviorMapper::GetVideoDescriptionScalingBehaviorForName(jsonValue.GetString("scalingBehavior"));

    m_scalingBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sharpness"))
  {
    m_sharpness = jsonValue.GetInteger("sharpness");

    m_sharpnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoDescription::Jsonize() const
{
  JsonValue payload;

  if(m_codecSettingsHasBeenSet)
  {
   payload.WithObject("codecSettings", m_codecSettings.Jsonize());

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_respondToAfdHasBeenSet)
  {
   payload.WithString("respondToAfd", VideoDescriptionRespondToAfdMapper::GetNameForVideoDescriptionRespondToAfd(m_respondToAfd));
  }

  if(m_scalingBehaviorHasBeenSet)
  {
   payload.WithString("scalingBehavior", VideoDescriptionScalingBehaviorMapper::GetNameForVideoDescriptionScalingBehavior(m_scalingBehavior));
  }

  if(m_sharpnessHasBeenSet)
  {
   payload.WithInteger("sharpness", m_sharpness);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
