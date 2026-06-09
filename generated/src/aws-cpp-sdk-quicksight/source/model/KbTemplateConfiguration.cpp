/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KbTemplateConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KbTemplateConfiguration::KbTemplateConfiguration(JsonView jsonValue) { *this = jsonValue; }

KbTemplateConfiguration& KbTemplateConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("template")) {
    m_template = jsonValue.GetObject("template");
    m_templateHasBeenSet = true;
  }
  return *this;
}

JsonValue KbTemplateConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_templateHasBeenSet) {
    if (!m_template.View().IsNull()) {
      payload.WithObject("template", JsonValue(m_template.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
