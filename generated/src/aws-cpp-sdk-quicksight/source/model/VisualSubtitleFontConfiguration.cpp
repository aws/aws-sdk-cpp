/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/VisualSubtitleFontConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

VisualSubtitleFontConfiguration::VisualSubtitleFontConfiguration(JsonView jsonValue) { *this = jsonValue; }

VisualSubtitleFontConfiguration& VisualSubtitleFontConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FontConfiguration")) {
    m_fontConfiguration = jsonValue.GetObject("FontConfiguration");
    m_fontConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextAlignment")) {
    m_textAlignment = HorizontalTextAlignmentMapper::GetHorizontalTextAlignmentForName(jsonValue.GetString("TextAlignment"));
    m_textAlignmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextTransform")) {
    m_textTransform = TextTransformMapper::GetTextTransformForName(jsonValue.GetString("TextTransform"));
    m_textTransformHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualSubtitleFontConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fontConfigurationHasBeenSet) {
    payload.WithObject("FontConfiguration", m_fontConfiguration.Jsonize());
  }

  if (m_textAlignmentHasBeenSet) {
    payload.WithString("TextAlignment", HorizontalTextAlignmentMapper::GetNameForHorizontalTextAlignment(m_textAlignment));
  }

  if (m_textTransformHasBeenSet) {
    payload.WithString("TextTransform", TextTransformMapper::GetNameForTextTransform(m_textTransform));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
