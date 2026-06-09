/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseConfiguration::KnowledgeBaseConfiguration(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseConfiguration& KnowledgeBaseConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateConfiguration")) {
    m_templateConfiguration = jsonValue.GetObject("templateConfiguration");
    m_templateConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventEnabled")) {
    m_eventEnabled = jsonValue.GetBool("eventEnabled");
    m_eventEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_templateConfigurationHasBeenSet) {
    payload.WithObject("templateConfiguration", m_templateConfiguration.Jsonize());
  }

  if (m_eventEnabledHasBeenSet) {
    payload.WithBool("eventEnabled", m_eventEnabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
