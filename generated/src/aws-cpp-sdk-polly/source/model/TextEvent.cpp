/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/TextEvent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

TextEvent::TextEvent(JsonView jsonValue) { *this = jsonValue; }

TextEvent& TextEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextType")) {
    m_textType = TextTypeMapper::GetTextTypeForName(jsonValue.GetString("TextType"));
    m_textTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlushStreamConfiguration")) {
    m_flushStreamConfiguration = jsonValue.GetObject("FlushStreamConfiguration");
    m_flushStreamConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TextEvent::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_textTypeHasBeenSet) {
    payload.WithString("TextType", TextTypeMapper::GetNameForTextType(m_textType));
  }

  if (m_flushStreamConfigurationHasBeenSet) {
    payload.WithObject("FlushStreamConfiguration", m_flushStreamConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
