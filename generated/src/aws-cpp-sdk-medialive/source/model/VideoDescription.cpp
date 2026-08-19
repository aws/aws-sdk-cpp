/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/VideoDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

VideoDescription::VideoDescription(JsonView jsonValue) { *this = jsonValue; }

VideoDescription& VideoDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codecSettings")) {
    m_codecSettings = jsonValue.GetObject("codecSettings");
    m_codecSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("height")) {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("respondToAfd")) {
    m_respondToAfd = VideoDescriptionRespondToAfdMapper::GetVideoDescriptionRespondToAfdForName(jsonValue.GetString("respondToAfd"));
    m_respondToAfdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scalingBehavior")) {
    m_scalingBehavior =
        VideoDescriptionScalingBehaviorMapper::GetVideoDescriptionScalingBehaviorForName(jsonValue.GetString("scalingBehavior"));
    m_scalingBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sharpness")) {
    m_sharpness = jsonValue.GetInteger("sharpness");
    m_sharpnessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("width")) {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cropRectangle")) {
    m_cropRectangle = jsonValue.GetObject("cropRectangle");
    m_cropRectangleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputPositionRectangle")) {
    m_outputPositionRectangle = jsonValue.GetObject("outputPositionRectangle");
    m_outputPositionRectangleHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoDescription::Jsonize() const {
  JsonValue payload;

  if (m_codecSettingsHasBeenSet) {
    payload.WithObject("codecSettings", m_codecSettings.Jsonize());
  }

  if (m_heightHasBeenSet) {
    payload.WithInteger("height", m_height);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_respondToAfdHasBeenSet) {
    payload.WithString("respondToAfd", VideoDescriptionRespondToAfdMapper::GetNameForVideoDescriptionRespondToAfd(m_respondToAfd));
  }

  if (m_scalingBehaviorHasBeenSet) {
    payload.WithString("scalingBehavior",
                       VideoDescriptionScalingBehaviorMapper::GetNameForVideoDescriptionScalingBehavior(m_scalingBehavior));
  }

  if (m_sharpnessHasBeenSet) {
    payload.WithInteger("sharpness", m_sharpness);
  }

  if (m_widthHasBeenSet) {
    payload.WithInteger("width", m_width);
  }

  if (m_cropRectangleHasBeenSet) {
    payload.WithObject("cropRectangle", m_cropRectangle.Jsonize());
  }

  if (m_outputPositionRectangleHasBeenSet) {
    payload.WithObject("outputPositionRectangle", m_outputPositionRectangle.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
